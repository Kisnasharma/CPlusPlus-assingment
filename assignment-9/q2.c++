// calulating the net height travel by treker
#include<iostream>
#include<climits>
using namespace std;
int highest_altitude(int arr[],int size){

    int displace = 0;
    int net_height = INT_MIN;
    // loop for finding net height 
    for(int i=0;i<size;i++){
        if(displace>net_height){
            net_height = displace;
        }
        displace +=arr[i];
    }

    return net_height;
}

int main(){
    int n;
    cout<<"Size : ";
    cin>>n;

    int height[n];
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    int peak = highest_altitude(height,n);
    cout<<peak;

}