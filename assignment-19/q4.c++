// Given the Binary code of a number as a decimal number, we need to convert this into its
// equivalent Gray Code. In gray code, only one bit is changed in 2 consecutive number
#include<iostream>
using namespace std;
int power(int p, int q){
    // base condition 
    if(q==0) return 1;
    if(q%2==0){
        int result = power(p,q/2); // q is even
        return result*result;
    }
    else{
        int result = power(p,(q-1)/2); // q is odd
        return result*result*p;
    }
}
void grayCode(int n , int d , int i){
    if(i==d) return ; // base case
    ( (n/power(10,(d-i)))%10 + (n/power(10,(d-i-1)))%10 )%2 == 1 ? cout<<"1" : cout<<"0"; // self work
    return grayCode(n , d , i+1); // assumption
}
int main(){
    int n = 100110,digit = 0,temp,i = 1;
    // n should be in binary
    temp = n;
    while(temp>0){
        digit++;
        temp/=10;
    }
    cout<<"1";
    grayCode(n,digit,i);
    return 0;
}
