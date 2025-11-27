// how to solve pattern
/*
n=3---->no of lines

1 2 3 4
1 2 3 4
1 2 3 4

*/

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of lines n and number of charcters m:";
    cin>>n>>m;

    cout<<"Printing the pattern"<<endl;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}