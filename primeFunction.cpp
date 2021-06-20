#include<iostream>
#include<math.h>
using namespace std;

// defining a function
bool isPrime(int num)
{
    for (int  i = 2; i <= sqrt(num); i++)
    {
        if (num%i==0)
        {
            return false;
        }
        
    }
    return true;
}


// calling a function 

int main(){
    
    int a,b;
    cin>>a>>b;

    for (int  i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout<<"The Prime no between "<<a<<" to "<<b<<" is :";
            cout<<i<<endl;
        }
        
    }
    

    return 0;

}