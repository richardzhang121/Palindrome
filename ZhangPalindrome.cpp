//ZhangRichard Palindrome
#include <iostream>
#include <cstdlib>
#include <cstring>
//includes are similar to imports from Java
using namespace std;

int main()
{
  char input[81];
  int length; 
  cout << "Please input a word or sentence to see if it is a palindrome or not" << endl;
  cin >> input;

  for (auto c: input){
    if (ispunct(c)) input.erase(input.find_first_of(c));

  }
  cout << input << endl;

}
