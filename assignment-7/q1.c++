// counting number of odd num and even num in array
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

    int count_odd = 0;
    int count_even = 0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0) count_even++; // condition for counting even num
        else count_odd ++; // condition for counting odd num
    }
    cout<<"Odd number = "<<count_odd<<endl;
    cout<<"Even number ="<<count_even<<endl;

    return 0;
}