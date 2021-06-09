#include <iostream>
using namespace std;

int main(){

int sub1,sub2,sub3,sub4,sub5;
int average;

cout<<"Enter the 5 Subject Marks:";
cin>>sub1>>sub2>>sub3>>sub4>>sub5;

average = (sub1+sub2+sub3+sub4+sub5)/5;
cout<<"Average "<<average<<endl;
if (average>=60)
{
    cout<<"First Division";
}
else if (average>=50)
{
     cout<<"Second Division";
}
else if (average>=40)
{
     cout<<"Third Division";
}else
{
    cout<<"Fail";
}

    return 0;
}