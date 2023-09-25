// counting number of zeros in binary form of number 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;

    int power = 1; // 10^0
    int ans = 0;
    while(n>0){ // conversion of decimal to binary
        int paritydigit = n%2;
        ans += paritydigit*power;
        power*=10;
        n/=2;
    }
    cout<<ans<<endl;
    int storage = ans;

    int count = 0;
    while(storage>0){
        int lastdigit = storage%10;
        if(lastdigit==0) count++;
        storage /=10;
    }
    cout<<"Number of zeros in "<<ans<<" is : "<<count<<endl;




}