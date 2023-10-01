// merging two vector one after other
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;

    // for 1 st array
    cout<<"m : ";
    cin>>m;
    vector<int>arr1(m);
    for(int i=0;i<arr1.size();i++){
        cin>>arr1[i];
    }

    // for 2nd array
    cout<<"n : ";
    cin>>n;
    vector<int>arr2(m+n); 
    for(int i=m;i<arr2.size();i++){
        cin>>arr2[i];
    }

    vector<int>arr(m+n); // for resultant array

    for(int i=0;i<arr.size();i++){
        if(i<m) arr[i] = arr1[i];
        else arr[i] = arr2[i];
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}