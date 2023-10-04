// finding the maximum length or sequence which contain equla  numbre of 1 abd 0 's
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Size : ";
    cin>>size;

    int arr[size];
    cout<<"array = ";
    // input of array can be only 0 and 1
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int length = 0; // length we required
    int initial = 0;
    while(initial < size){
        if(arr[initial]==1 && arr[initial+1]==0){
            length+=2;
        }
        else if(arr[initial]==0 && arr[initial+1]==1){
            length+=2;
        }
        else{
            break;
        }
        initial = initial + 2;
    }

    cout<<"The longest sequence is : ";
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
