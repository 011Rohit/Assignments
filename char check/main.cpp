/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void solve(string s)
{
    if(s.length()==0)
    {
        cout<<"enter atleast chararcter "<<endl;
        return;
    }else if(s.length()>1){
    cout<<"You have enter more than 1 char "<<endl;
        return;
    }

    if((s[0]>=65 && s[0]<=90) || (s[0]>=97 && s[0]<=122))
    cout<<"enter char is alphabet"<<endl;
    else
    cout<<"it is not alphabet"<<endl;

    return;

}
int main()
{


    string s;
    cout<<"enter character to check ";
    cin>>s;
    solve(s);




    return 0;
}
