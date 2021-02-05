#include<iostream>
using namespace std;



bool isItPerfectNumber(long long int n,long long int m)
{


    if(n<=0 || m<=0)
    {
        cout<<"enter positive range"<<endl;
        return false;
    }
    if(n>m)
    {
        cout<<"start point always lesser than end point"<<endl;
        return false;
    }


    for (int j=n; j<m; j++) {
            long long int sum = 1;
    for (long long int i=2; (i*i)<=j; i++)
    {
        if (j%i==0)
        {
            if(i*i!=j)
                sum = sum + i + j/i;
            else
                sum=sum+i;
        }
    }

     if (sum == j && j != 1 )
          cout<<j<<" ";
    }

     return true;
}

int main()
{

     long long int start,finish;
    cout<<"enter the range ";
    cin>>start>>finish;
   bool ok= isItPerfectNumber(start,finish);

   if(!ok)
    cout<<"please enter valid input"<<endl;


    return 0;
}
