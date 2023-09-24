// printing prime number in triangular manner
#include<iostream>
using namespace std;
int main(){
    int lineNo;
    cout<<"Please enter line number : ";
    cin>>lineNo;

    int sum = 0;

    for(int i=1;i<=lineNo;i++){
        sum+=i;
    } // for calculating number of ele in triangle

    int arr[sum]; // sum as a size of array

    int initial_prime = 2;
    int size = 0;
    int count;
    // to store all prime number
    while(size<=sum){
        count = 0;
        for(int i=2;i<initial_prime;i++){
            if(initial_prime%i==0)
            count++;
        }
        if(count==0){
            arr[size] = initial_prime;
            size++;
        }
        // now array will only store prime number
        initial_prime ++;
    }

    for(int i=0;i<sum;i++){
        cout<<arr[i]<<endl;
    }// for checking that all ele of array is prime

    int k = 0; // k will iterate as index of array
    for(int i=1;i<=lineNo;i++){
        for(int j=1;j<=lineNo-i;j++){
            cout<<" ";
        }
        for(int t=1;t<=i;t++){
            cout<<arr[k]<<" ";
            k++;
        } cout<<endl;
    }

    return 0;
}