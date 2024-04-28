// Write a Program to Count the Number of Vowels

#include<iostream>
#include<string>
using namespace std;

int countVowels(string &s)
{
  int size =s.length();
  int count =0;
  for(int i=0;i<size;i++)
  {
    char c =s[i];
    if(c == 'a' || c == 'e' || c == 'i' || c== 'o' || c =='u' || c=='A' || c == 'E'||c == 'I'|| c == 'O' || c == 'U')
    {
      count++;
    }
  }
  return count;
}

int main()
{
  string s = "Tech Alpha provides Internship";
  int ans = countVowels(s);
  cout<<"Number of vowels in the string is :"<<ans;

  return 0;
}