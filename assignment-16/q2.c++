// program to print the product of two int using pointer
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    int *ptra = &a; // ptra is storing the address of a
    int *ptrb = &b; // ptrb is storing the address of b
    int product = *ptra * *ptrb;

    int *result = &product;
    cout<<*result; // *result is pointing towards the value store in product

    return 0;
}