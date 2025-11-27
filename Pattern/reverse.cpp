
/*
1 
2 1 
3 2 1 
4 3 2 1
*/
#include <iostream>
using namespace std;

int main(){
    int n,num=1;
    cout<<"Enter the no of lines n:";
    cin>>n;
    cout<<"printing the pattern"<<endl;
    for(int i=0;i<n;i++){ 
        int n=num;
        for(int j=0;j<num;j++){
            cout<<n<<" ";
            n--;
        }
        cout<<endl;
        num++;
    }
    return 0;
}