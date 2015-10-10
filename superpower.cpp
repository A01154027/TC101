#include <iostream>
using namespace std;

int potencia(int a, int b)
{
  int i, x;
  i = 1;
  x = 1;
  while (i <= b)
  {
    x = x * a;
    i = i + 1;
  }
  return x;
}
int main ()
{
  int a, b;
  cout<<"Enter the base:"<<endl;
  cin>> a;
  cout<<"Now please enter the exponent."<<endl;
  cin>>b;
  cout<<"The answer is:"<< potencia(a,b)<<endl;
  return 0;
}
