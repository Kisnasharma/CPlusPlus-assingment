// reversing an array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Size : ";
    cin>>size;

    int arr[size];
    // input of array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    //reversing the loop to reverse the array
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}