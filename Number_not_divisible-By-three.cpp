#include <iostream>
using namespace std;
// this program means that we need to print the number in between 1 to 100 which is divisible by 3.
int main(){
   
   for (int i = 0; i < 100; i++)
   {
       if (i%3==0)
       {
           continue;
       }
       
       cout<<i<<endl;
   }
   
return 0;

}