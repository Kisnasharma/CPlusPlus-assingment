// diamond pattern of alphabet
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<char(64+j);
        }cout<<endl;
    }

    int p = 2*n-3;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=p;k++){
            cout<<char(64+k);
        }cout<<endl;
        p -=2;
    }
    
}