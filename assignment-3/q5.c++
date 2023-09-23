// arithmetic operator  + - * / %
#include<iostream>
using namespace std;
int main(){
    int num_1 , num_2;

    char ch;
    cout<<"Enter an operator(+ - * /): ";
    cin>>ch;

    cout<<"Num_1 : ";
    cin>>num_1;

    cout<<"Num_2 : ";
    cin>>num_2;

    switch(ch){
        case '+':
        cout<<num_1<<"+"<<num_2<<" = "<<num_1 + num_2;
        break;

        case '-':
        cout<<num_1<<"-"<<num_2<<" = "<<num_1 - num_2;
        break;

        case '*':
        cout<<num_1<<"*"<<num_2<<" = "<<num_1 * num_2;
        break;

        case '/':
        cout<<num_1<<"/"<<num_2<<" = "<<num_1 / num_2;
        break;

        default :
        cout<<"Invalid operator";
    }
    return 0;
}