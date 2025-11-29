/*
   1
  121
 12321
1234321
*/
#include <iostream>
using namespace std;

int main(){
    int n,num=1;
    cout<<"Enter the number of lines n:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<num;j++){
            cout<<j+1;
        }
        num++;
        
        int m=i;
        for(int k=1;k<=i;k++){
            
            cout<<m;
            m--;
        }
        cout<<endl;
    }
    return 0;
}