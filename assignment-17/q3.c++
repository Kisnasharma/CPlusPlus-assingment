// traversing the array in reversing order 
#include<iostream>
using namespace std;
void reverse(int *a , int size){ // pass by refernce of array
    for(int i=0;i<size/2;i++){
        int temp = *(a+i);
        *(a+i) = *(a+size-1-i);
        *(a+size-1-i) = temp;
    }
    return ;
}
int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}