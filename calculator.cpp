#include <iostream>
using namespace std;

int main() {
    char sign;
    int num1;
    int num2;
    cout<<"Input the Arthematic operators + - * / % : ";
    cin>>sign;
    switch (sign)
    {
    case '+':
        cout<<"Enter two no : ";
        cin>>num1>>num2;
        cout<<"Your result :"<<num1+num2;
        break;
    
     case '-':
        cout<<"Enter two no : ";
        cin>>num1>>num2;
        cout<<"Your result :"<<num1-num2;
        break;
         
         case '*':
        cout<<"Enter two no : ";
        cin>>num1>>num2;
        cout<<"Your result :"<<num1*num2;
        break;
    
     case '/':
        cout<<"Enter two no : ";
        cin>>num1>>num2;
        cout<<"Your result :"<<num1/num2;
        break;
        
         case '%':
        cout<<"Enter two no : ";
        cin>>num1>>num2;
        cout<<"Your result :"<<num1%num2;
        break;

    default:
    cout<<"wrong Input!"<<endl;
        break;
    }
}