// printing odd number between two num a and b
#include<iostream>
using namespace std;
void oddnumAtoB(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0) cout<<i<<" ";
    }
    return ;
}

int main(){
    int num_1,num_2;
    cout<<"Num_1 : ";
    cin>>num_1;

    cout<<"Num_2 : ";
    cin>>num_2;

    oddnumAtoB(num_1,num_2);

    return 0;

}