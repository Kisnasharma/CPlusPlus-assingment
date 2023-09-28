// finding the ele to which the left ele are smaller than it and right ele are larger than it
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){// i is starting from 1 because we aren't counting 1 st ele as no ele to left of it
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int small = i; //
        bool flag_1 = false;
        while(arr[i]>=arr[small] && small>=0){ // loop for less than i
            small--;
            flag_1 = true;
        }
        if(arr[i]<=arr[small] && small>=0){ // if while condition is false
            flag_1 = false;
        }


        int large = i;
        bool flag_2 = false;
        while(arr[i]<=arr[large] && large<=(n - 1)){ // loop for greater than i
            large ++;
            flag_2 = true;
        }
        if(arr[i]>=arr[large] && large<=(n - 1)){ // if while condition is false
            flag_2 = false;
        }


        if(flag_1 == true && flag_2 == true){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}