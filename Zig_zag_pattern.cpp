/*
Zig-Zag Pattern 

  *   *  
 * * * *
*   *   *

rows= 1 to 3
coloumn = "*" = (row+coloumn)$4=0 &&   row=2 & c%4=0 
" " = else


*/

#include<iostream>
using namespace std;
int main(){

       int n;
      cin>>n;

    for (int  i = 1; i <= 3; i++)
   {
        for (int j = 1; j <=n; j++)
        {
            if (((i+j)%4==0) || (i==2 && j%4==0))
            {
               cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
   }





    
    
    return 0;

}