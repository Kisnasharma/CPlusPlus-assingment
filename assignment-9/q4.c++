// Returning the number of consecutive sequences(subarray) with odd sum
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Size : ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int t = 0; // decideds the range of subarray  
    int count = 0; // number of subarray that are required
    while(t<size){
        int idx = 0; // initial index of subarray
        int fdx = 0; // final index of array
        while(idx<size-t && fdx<size){
            int sum = 0; // sum of that subarray
            fdx = idx + t;
            for(int i=idx;i<=fdx;i++){
                sum+=arr[i];
            }
            if(sum%2 != 0){
                count++;
            }
            idx++;
        }
        t++;
    }
    cout<<count;
    return 0;

}