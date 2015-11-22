#include <iostream>
#include <stdio.h>
using namespace std;

float calculateE( float n) {
float x=1.0f;
float sum = 1.0f;
    for (int i = n - 1; i > 0; --i )
        sum = 1 + x * sum / i;
    return sum;
}
int main() {
    float n;
    cout <<"Enter the length you would like to approximate the value of e:"<<endl;
    cin>> n;
    cout << "The approximation is:" << calculateE(n) << endl;
    return 0;
}
