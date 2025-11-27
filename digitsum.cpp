#include <iostream>
using namespace std;

int sumOfDigit(int num){
    int digitSum=0;
     
    while(num>0){
        int lastDig=num%10;
        num/=10;
        digitSum+=lastDig;
    }
    return digitSum;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"sum="<<sumOfDigit(n)<<endl;
    return 0;
}