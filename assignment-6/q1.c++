// square of first n natural number
#include<iostream>
using namespace std;
void squareNum(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<" ";
    }
    return ;
}
int main(){
    int n;
    cout<<"n : ";
    cin>>n;

    squareNum(n);

    return 0;

}