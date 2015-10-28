#include <iostream>
#include <cmath>
using namespace std;

int main (){
  float array [0];
  float sum = 0;
  float average;
  int i;
  int y = 0;
  cout<<"Insert ten values in order to calculate the average of them and the standard deviation."<<endl;
  for (int i = 0; i < 10; i++){
    cout<<"Enter value:"<<endl;
    cin>>array[i];
  } 
  for (int i = 0; i < 10; i++){
    sum = sum + array[i];
  }
  average = sum/10;
  for (int i = 0; i < 10; i++){
    y = y + ((array [i] - average) * (array[i] - average));
  }
  y = y / 9;
  y = sqrt(y);
  
  cout<<"The sum is:"<<sum<<endl;
  cout<<"The average is:"<<average<<endl;
  cout<<"The standard deiation is:"<<y<<std::endl;
  return 0;
}
