/*
t1 =0
t2 =1
t3 = t1+t2=0+1=1
t4 =t2+t3=1+1=2

tn = tn-2 + tn-1
*/
#include<iostream>
using namespace std;

void fib(int n){

    int t1=0;
    int t2=1;
    int nextTerm;
    for (int i = 1; i<= n; i++)
    {
        cout<<t1<<endl;
        nextTerm = t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;

}

int main(){

    int n;
    cin>>n;
    fib(n);
 
    return 0;

}
