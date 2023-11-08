// sum of all ele of array
#include<iostream>
using namespace std;
int sumArray(int a[] , int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+= *(a+i);
    }
    return sum;
}
int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>*(arr + i);
    }

    sumArray(arr,size);
    cout<<sumArray(arr,size);

    return 0;
}