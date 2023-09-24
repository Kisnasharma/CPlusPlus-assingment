// factorial of agivennumber n 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;

    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial *= i;
        cout<<i<<" factorial is : "<<factorial<<endl;
    }

    return 0;
}