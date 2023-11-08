// printing the value store at k th ele of array
#include<iostream>
using namespace std;
int main(){
    int size,k;
    cin>>size>>k;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>*(arr + i);
    }
    
    cout<<*(arr+k-1)<<endl;

    return 0;

}