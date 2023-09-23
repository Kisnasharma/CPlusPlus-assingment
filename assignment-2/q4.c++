//sum of first and second last digit of five digit number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int count = 0;
    // code for calculating the required sum
    for(int i=1;i<=5;i++){
        int k;
        k = num%10;
        if(i==2 || i==5) count+=k;
        num = num / 10;
    }

    cout<<"count of first and fourth digit is : "<<count<<endl;

    return 0;


}