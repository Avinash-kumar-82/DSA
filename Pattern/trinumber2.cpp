/*

1 
1 2 
1 2 3 
1 2 3 4 

*/

#include <iostream>
using namespace std;

int main(){
    int n,num=1;
    cout<<"Enter the number of lines n:";
    cin>>n;

    cout<<"Printing the pattern"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=num;j++){
            cout<<j<<" ";
        } 
        cout<<endl;
        num++;
       
    }
    return 0;
}