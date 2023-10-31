// swap function using pointer 
#include<iostream>
using namespace std;
void swap(int &a , int &b){ // pass by reference
    int *ptra = &a;
    int *ptrb = &b;
    int temp = *ptrb;
    *ptrb = *ptra;
    *ptra = temp;

    cout<<"a : "<<*ptra<<endl;
    cout<<"b : "<<*ptrb;

    return ;
}
int main(){
    int a,b;
    cout<<"a : ";
    cin>>a;

    cout<<"b : ";
    cin>>b;

    swap(a,b);
    return 0;
}