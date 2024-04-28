// Write a Program to Remove Spaces From a String

#include<iostream>
#include<string>
using namespace std;

void removeSpace(string &s)
{
   int size = s.length();
  

  // index for the modified string
   int j = 0;


   for(int i = 0; i < size; i++)
   {
      if(s[i] != ' ')
      {
         
          // overwrite the string with non-space characters
          s[j++] = s[i]; 
      }
   }
   // resize the string to remove the extra characters
   s.resize(j); 
}

int main()
{
  string s = "Tech Alpha provides Internship";
  removeSpace(s);
  cout << "Output : " << s << endl;

  return 0;
}
