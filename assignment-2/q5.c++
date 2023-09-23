// calculating the sum of digits of three digit number 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int count = 0;

    for(int i=1;i<=3;i++){
        int k;
        k = num % 10;
        count +=k;
        num /= 10;
    }
    cout<<"Sum of digits os three digit number is : "<<count<<endl;

    return 0;
}