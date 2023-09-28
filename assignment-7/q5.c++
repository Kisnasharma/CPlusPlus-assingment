// returning only the number of range which is not present in array
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

    int search = 0; // initialising the number that is missing
    for(int i=0;i<size;i++){
        bool flag = true;
        for(int j=0;j<size;j++){
            if(arr[j] == search){
                search ++;
                flag = false;
                break;
            }
        }
        if(flag == true){
            cout<<search; 
            break;
        }

    }

    
}