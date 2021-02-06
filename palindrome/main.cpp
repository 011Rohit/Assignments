
#include <iostream>
#include <string.h>

using namespace std;
int isPalindrome(string input)
{



   long long int length = input.length();

   if(length == 0 )
    return 2;

    long long int start = 0;
    long long int finish = length - 1;

   //logic
    while (start < finish)
    {
        if (input[start++] != input[finish--])
        {

            return 0;
        }
    }

    return 1;
}


int main()
{
    string s;
    cout<<"enter input :";
    cin>>s;
    int ans = isPalindrome(s);
    if(ans==1)
    cout<<"palindrome"<<endl;
    else if(ans==0)
    cout<<"not Palindrome "<<endl;
    else
    cout<<"enter valid string"<<endl;
    return 0;
}
