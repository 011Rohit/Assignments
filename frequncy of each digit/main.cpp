


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 bool ok=true;
 bool validate(string s){

     for(int i=0;i<s.length();i++)
     {
         if(s[i]!=48)
         ok=false;

         if(!((s[i]>=48 && s[i]<=57)))
         return false;
     }
     return true;
 }
 void solve(string number){

     if(!(number.length()==10))
     {
         cout<<"invalid number"<<endl;
         return;
     }


    ok=true;

    string ans=" ";


    if(validate(number)){

        map<char,int> mymap;
        for(int i=0;i<number.length();i++)
        mymap[number[i]]++;

        for(auto itr : mymap)
        cout<<itr.first<<" "<<itr.second<<endl;

     }
    else
    cout<<"enter valid number"<<endl;


 }
int main()
{


    cout<<"enter phone number ";
    string number;
    solve(number);

    return 0;
}

