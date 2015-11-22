#include <iostream>
using namespace std;

int gcd (int x, int y){
  int gcd;
  while ( x != 0 ){
    gcd = x;
    x = y%x;
    y = gcd;
  }return y;
}
int main (){
  int x,y;
  cout<<"This program is made to calculate the Greatest Common Divisor (GCD)"<<endl;
  cout<<"Inset the first number:"<<endl;
  cin>>x;
  cout<<"Insert the second number:"<<endl;
  cin>>y;
  cout<<"The GCD is:"<< gcd(x,y)<<endl;
  return 0;
}

  
