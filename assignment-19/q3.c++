// converting decimal to binary by using recurrsion
#include<iostream>
using namespace std;
int d2b(int n , int ans , int pow){
    if(n==0) return ans;
    int parity_digit = n%2;
    ans+= parity_digit * pow;
    return d2b(n/2 , ans , pow*10);
}
int main(){

    int n , ans = 0 , pow = 1;
    cin>>n;
    cout<<d2b(n , ans , pow);

    return 0;
}