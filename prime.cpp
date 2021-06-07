#include <iostream>
using namespace std;

// program to find the no is prime or not

int main()
{
    int n,i;
    cin>>n;
  
    for ( i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"Non prime No"<<endl;
            break;
        }
        
    }
    if(i==n){
        cout<<"Prime No"<<endl;
    }


   
    return 0;
}