// finding amstrong number between 100 to 500
#include<iostream>
using namespace std;
int main(){
    int initial,final;
    cout<<"Initial : ";
    cin>>initial;

    cout<<"Final : ";
    cin>>final;

    int k,t,sum;
    for(int i=initial;i<=final;i++){
        sum = 0;
        t = i;
        for(int j=1;j<=3;j++){
            k = t%10;
            k = k*k*k;
            sum += k;
            t = t/10;
        }
        if(i == sum) cout<<i<<" ";
    }
}