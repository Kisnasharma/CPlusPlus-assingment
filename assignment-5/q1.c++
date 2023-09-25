// sum of number upto n in binary
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;
    int sum = 0;

    for(int i=1;i<=n;i++){ // to calculate sum upto n
        sum+=i;
    } 

    // converting sum to binary
    int power = 1; // 10^0
    int ans = 0; // coversion var for decimal to binary
    while(sum>0){
        int paritydigit = sum%2;
        ans += (paritydigit*power);
        power *= 10;
        sum /=2;
    }

    cout<<ans<<endl;
}
