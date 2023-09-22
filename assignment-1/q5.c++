// size of different datatype
#include<iostream>
using namespace std;
int main(){
    int x;
    sizeof(x);
    cout<<"size of integer : "<<sizeof(x)<<endl;

    float y;
    sizeof(y);
    cout<<"size of float : "<<sizeof(y)<<endl;

    char ch;
    sizeof(ch);
    cout<<"size of character : "<<sizeof(ch)<<endl;

    bool flag;
    sizeof(flag);
    cout<<"size of bool : "<<sizeof(flag)<<endl;

    double a;
    sizeof(a);
    cout<<"size of double : "<<sizeof(a)<<endl;

    short b;
    sizeof(b);
    cout<<"size of short : "<<sizeof(b)<<endl;

    long c;
    sizeof(c);
    cout<<"size of long : "<<sizeof(c)<<endl;

    long long d;
    sizeof(d);
    cout<<"size of long long : "<<sizeof(d)<<endl;

    long double e;
    sizeof(e);
    cout<<"size of long double : "<<sizeof(e);
    



    return 0;
}