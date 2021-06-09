#include <iostream>
using namespace std;

// to say hello in different way
int main(){
char button ;
 
 cout<<"Enter the value A to E: ";
    cin>>button;
 /* if (button =='a')
 {
     cout<<"Hello"<<endl;
 }
 else if (button =='b')
 {
     cout<<"Namaste"<<endl;
 }else if (button =='c') 
 {
     cout<<"Salut"<<endl;
 }else if (button =='d')
 {
     cout<<"Hallo"<<endl;
 }else 
 {
     cout<<"I am still Learning"<<endl;
 }*/

// now with switch case
switch (button)
{
case 'a':
    cout<<"hello"<<endl;
   break;

case 'b':
    cout<<"hallo"<<endl;
    break;
    
    case 'c':
    cout<<"Namaste"<<endl;
    break;
    
    case 'd':
    cout<<"Salut"<<endl;
    break;

default:
cout<<"I am still learning"<<endl;
    break;
}
 return 0;
}