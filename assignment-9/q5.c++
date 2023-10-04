// finding array ans such that ans[i] is equal to 
// the product of all ele of arr except arr[i].

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; // size of array

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans[n];
    int initial_idx = 0;
    // manuplating array by making the ans array term as 1.
    for(int i=0;i<n;i++){
        ans[i] = 1;
    }

    while(initial_idx<n){
        int temp = arr[initial_idx];
        for(int i=0;i<n;i++){
            arr[initial_idx] = 1;
            ans[initial_idx] *=arr[i];
        }
        arr[initial_idx] = temp;
        initial_idx++;
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}