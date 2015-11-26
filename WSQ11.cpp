#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;
int up;
int low;
int nat=0;
int non=0;
int ly=0;
BigInteger rev;
BigInteger num;

BigInteger reverse(BigInteger valid){
BigInteger invalid= 0;
while (valid != 0){
  invalid= invalid*10 + valid % 10;
  valid= valid/10;
}
  return invalid;
}

void palindrome(BigInteger n, BigInteger r){
  if(n == r){
nat = nat+1;
}
else {
int rep= 0;
BigInteger a= n;
while (a!=r && rep < 30){
a=a+r;
r= reverse(a);
rep= rep+1;
}
if (rep == 30){
  cout << "This is a Lynchrel number: " << n << endl;
  ly= ly+1;
}
else {
  non=non+1;
     }
  }
}

int main (){
cout << "We are going to see how many Lycherel numbers are." << endl;
 cout <<" Enter the lower bound:";
cin >> low;
cout << "Enter the upper bound: ";
cin >> up;
num = low;
while(num <= up){
rev= reverse(num);
palindrome(num, rev);
num = num + 1;
}

cout << "The numbers are between: " << low << " and " << up << endl;
cout << " Number of natural palindromes : " << nat << endl;
cout << " Number of non-Lycherel numbers: " << non << endl;
cout << "Number of Lycherel numbers: " << ly << endl;

return 0;
}
