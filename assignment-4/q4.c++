// reversing a integer 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;

    int t = n;
    int countDigit = 0;

    while(t>0){
        countDigit ++;
        t = t/10;
    }

    int rev,sum = 0;
    for(int i=1;i<=countDigit;i++){
        rev = n%10;
        sum *=10;
        sum += rev;
        n = n/10;
    }
    cout<<"r : "<<sum;
}