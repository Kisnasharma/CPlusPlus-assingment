// calculating minimum sum of two array's ele
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Size : ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int brr[size];
    for(int i=0;i<size;i++){
        cin>>brr[i];
    }

    int sum = INT_MAX;

    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){ // loop iterating upto less than i
            if(arr[i]+brr[j]<sum) sum = arr[i]+brr[j];
        }
        for(int k=i+1;k<size;k++){ //loop iterating more than i
            if(arr[i]+brr[k]<sum) sum = arr[i]+brr[k];
        }
        // we are not including i because we can't take same index minimum num
    }
    cout<<sum;

    return 0;
}