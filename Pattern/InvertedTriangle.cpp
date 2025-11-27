/*
11111
 2222
  333
   44
    5
*/

#include <iostream>
using namespace std;

int main(){
    int n,num=1;

    cout<<"Enter the number of lines n:";
    cin>>n;
    cout<<"Printing the pattern"<<endl;
    for(int i=0;i<n;i++){

        // spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        // nums
        for (int j=0;j<n-i;j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}