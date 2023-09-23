//checking condition a<50 and a<b both are true or not
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a : ";
    cin>>a; // input of a

    cout<<"b : ";
    cin>>b; // input of b

    if(a<50 && a<b)cout<<"1"; //given condition
    else cout<<"0";

    return 0;
}