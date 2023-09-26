// printing prime number between a and b
#include<iostream>
using namespace std;
void primeAtoB(int a,int b){
    for(int i=a;i<=b;i++){ // for number between a to b
        int count = 0;
        for(int j=2;j<i;j++){ // for divisor
            if(i%j==0) count ++;
        }
        if(count==0) cout<<i<<" ";
    }
    return ;
}

int main(){
    int num_1,num_2;
    cout<<"Num_1 : ";
    cin>>num_1;

    cout<<"Num_2 : ";
    cin>>num_2;

    primeAtoB(num_1,num_2);
    return 0;

}