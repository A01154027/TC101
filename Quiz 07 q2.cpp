#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string x)
{
  int l= x.length();
  string word="";
  int i=l-1;
  do {
    word=word+x[i];
    i=i-1;
  } while (i>=0);

  if (x == word)
  {
    return true;
  }
  else {
    return false;
  }
}

int main ()
{
  string x;
  cout << "Write a word, and I'll tell you if it's a palindrome or not: ";
  cin >> x;
  isPalindrome(x);
  if (isPalindrome(x) == true){
    cout<<"It is a palindrome."<<endl;
  }else{
    cout<<"It's not a palindrome."<<endl;
  }
  return 0;
}
