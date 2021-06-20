#include<iostream>
#include<cmath>

using namespace std;
int main(){

int n;

cin>>n;
bool flag= 0;

 
 for (int i = 2; i <=sqrt(n); i++)
 {
     if (n%i==0)
     {
         cout<<"The no is not a Prime no: "<<n<<endl;
         flag=1;
         break;
     }
     
 }
 if (flag==0)
 {
     cout<<"Prime no "<<endl;
 }
 

    return 0;
}