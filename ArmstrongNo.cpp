/*

1  5   3
1+125+27=153

it is a armstrong no .


153 = (1*1*1)+(5*5*5)+(3*3*3)  
where:  
(1*1*1)=1  
(5*5*5)=125  
(3*3*3)=27  
So:  
1+125+27=153  
*/

#include<iostream>
#include<math.h>

using namespace std;
int main(){

int n;
cin>>n;

int sum=0;
int originaln=n;
while (n>0)
{
    int lastdigit= n%10; 
    sum+= pow(lastdigit,3);
    n=n/10;
}

if (sum==originaln)
{
    cout<<"Armstrong No: "<<endl;
}else{
    cout<<"Not a armstrong no: "<<endl;
}


    return 0;

}