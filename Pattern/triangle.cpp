/*

*  
*  *  
*  *  *  
*  *  *  *  
*  *  *  *  *  
*  *  *  *  *  *  
*  *  *  *  *  *  * 

*/

#include <iostream>
using namespace std;

int main(){
    int n,num=1;
    cout<<"Enter the number of lines n:";
    cin>>n;

    cout<<"Printing the pattern"<<endl;
    for(int i=1;i<=n;i++){
        for(int i=0;i<num;i++){
            cout<<"* "<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}