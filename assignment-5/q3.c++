// returning the greatest of two binary in decimal form
#include<iostream>
using namespace std;
int binary_to_decimal(int n){
    int power = 1; // 2^0
    int ans = 0;
    while(n>0){
        int unitdigit = n%10;
        ans += unitdigit*power;
        power*= 2;
        n/= 10;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"a : ";
    cin>>a;

    cout<<"b: ";
    cin>>b;
    int num_1 = binary_to_decimal(a);
    int num_2 = binary_to_decimal(b);
    if(num_1>num_2) cout<<num_1;
    else num_2;




}