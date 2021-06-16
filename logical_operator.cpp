#include <iostream>
using namespace std;
// wap to output whether a no is divisible by both 2 and 4 or divisible by only one of them.
int main(){

int n;
cin>>n;
if (n%2==0 && n%3==0)
{
    cout<<"It is divisible by 2 and 3";
}else if (n%2==0) {
    cout<<"Number is Divisible by 2 Only";
}else if(n%3==0)
{
    cout<<"Number is Divisible by 3 Only";
}else{
    cout<<"Number is not divisible by 2 and 3.";
}



    return 0;
}