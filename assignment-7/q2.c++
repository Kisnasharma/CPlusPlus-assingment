// calculating the sum of largest and smallest num of array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Size: ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    // calculating max and min value of array
    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min  = arr[i];
    }

    int sum  = min+max;

    cout<<max<<"+"<<min<<"="<<sum;
    return 0;
}