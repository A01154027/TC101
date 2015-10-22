#include <iostream>
#include <vector>
using namespace std;
int sumsquare_list (vector <int> x){
  int i = 0;
  int square = 0;
  for (i=0; i<x.size(); i++){
    square = square + (x[i]*x[i]);
  }
  return square;
}
int main () {
  vector <int> x(5);
  x[0]=1;
  x[1]=2;
  x[2]=3;
  x[3]=4;
  x[4]=5;
  cout<<"The sum of the squares is equal to:"<<sumsquare_list(x)<<endl;
  return 0;
}
