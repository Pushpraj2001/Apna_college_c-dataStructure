#include<iostream>
using namespace std;

int main(){
    
    int i =10;
    int j=20;
    int k;
    int m=0;
/*
    //1    2   1    2    3     4
    k= i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k<<endl;

 cout<< ++i <<endl;
 cout<< --i <<endl;
  cout<< j-- <<endl;
   cout<< i++ <<endl;
   cout<< i <<endl;*/
//    10     9     19   20    9    20     10     19      
   k= i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
   cout<<i<<endl;//9 
   cout<<j<<endl;//19
   cout<<k<<endl;//

    return 0;
}