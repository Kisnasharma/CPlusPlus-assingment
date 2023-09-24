// checking a +ve integer can be expressed by sum of prime of not 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n; // +ve integer

    int size = 0; // arr index
    int arr[n]; // max size of arr can be this 

    int prime = 0; // for manipulation of rest random ele in array to 0
    for(int i=2;i<=n;i++){
        int count = 0; // count denotes number of factor
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }if(count==0){
            prime++;
            arr[size] = i;
            size++;
        }
    }

    for(int i=prime;i<n;i++){
        arr[i] = 0;
    } // manipulation of rest ele for array containing prime number

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] + arr[j] == n){
                cout<<arr[i]<<"+"<<arr[j]<<"="<<n<<endl;
            }
        }
    }
}