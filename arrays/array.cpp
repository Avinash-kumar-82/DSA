#include <iostream>
#include <algorithm>  // for min() and max()
#include <climits>    // for INT_MAX and INT_MIN
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -35, -24};
    int size = 6;

    int smallest = INT_MAX;// INT_MAX--->a value which have highest maximum int value had initialize in positve number like in infinite.
    int largest = INT_MIN;//INT_MIN---> a value which have lowest in value had initialize in -ve number like in infinite.


    // so the question you have why would u take INIT_MAX and INIT_MIN----> because when you will comparing bewteen two values for min or max you should at least two number for comparing bewtween two values so we take INT_MAX(+infinite) which is higest value initially then we had update the value of smallest value from 0 to end index same as for INT_MIN;

    for (int i = 0; i < size; i++) {
        smallest = min(nums[i], smallest);//min already buildIn function in c++ for comparing a minimum value between two numbers. so you don't have create own logic for that in if-else conditions 
        largest = max(nums[i], largest);// same as for that
    }

    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;

    return 0;
}
