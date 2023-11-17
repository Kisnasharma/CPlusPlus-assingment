// check whether a number is prime or not using recurssion
#include<iostream>
using namespace std;
bool check_prime(int n , int i , int f){
    if(i==f && n%i!=0) return true;
    if(n%i==0) return false; // composite case
    else return check_prime(n,i+1,f);

}
int main(){
    // 2 is exceptional case of even prime number
    int n;
    cin>>n;
    cout<<check_prime(n,2,n-1); // if 1 it means it is a prime

    return 0;
}