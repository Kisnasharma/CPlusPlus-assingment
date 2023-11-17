// calculating the product of two number using recurssion
#include<iostream>
using namespace std;
int pro(int base , int a , int b){
    if(b==1)return base;
    return pro(a+base , a , b-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    int base = a;

    cout<<pro(base,a,b);
    return 0;

}
