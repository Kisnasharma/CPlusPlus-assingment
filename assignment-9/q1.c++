// finding the sum of ele present between the index L and R inclucive of L and R
#include<iostream>
using namespace std;
int sumFromLtoR(int arr[],int size,int lidx,int ridx){
    int sum = 0;
    for(int i=lidx;i<=ridx;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int l,r;
    cout<<"Left index : ";
    cin>>l;

    cout<<"right index : ";
    cin>>r;

    int sumLtoR = sumFromLtoR(arr,size,l,r);
    cout<<sumLtoR;


} 