/*
Star Pattern 

    *    
   ***   
  *****  
 ******* 
*********
*********
 *******
  *****
   ***
    *
    * 
rows= to n
coloumn = "*" = 1 to 2*row no-1
" " = 1 to n-row no

for opposite 

row = n to 1
coloumn =  "*" = 1 to 2*row no-1
" " = 1 to n-row no
*/

#include<iostream>
using namespace std;
int main(){

       int n;
      cin>>n;

    for (int  i = 1; i <= n; i++)
    {
      
        for (int j = 1; j <= n-i; j++)
        {
                    cout<<" ";
        }
          for (int j = 1; j <= 2*i-1; j++)
            {
                  cout<<"*";
                }
                    cout<<endl;
    }
// for opposite
for (int  i = n; i >=1; i--)
{

for (int j = 1; j <= n-i; j++)
{
    cout<<" ";
}for (int j = 1; j <= 2*i-1; j++)
{
    cout<<"*";
}
cout<<endl;

}






    
    
    return 0;

}