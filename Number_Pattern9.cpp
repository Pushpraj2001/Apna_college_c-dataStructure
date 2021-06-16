/*

    1 
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5


Row = 1 to n
coloumn = " " -> 1 to n-row no
    1 to row no  ->  j
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
    for (int j = 1; j <= i; j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    
}






    return 0;

}