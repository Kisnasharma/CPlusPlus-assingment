/*
given array name is nums of n size and num[i]+num[j]+num[k]
== x and x if provided input from user also k is input
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Size : ";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    } // take input in a sorted way

    int x;
    cout<<"x : ";
    cin>>x;

    int occurence = 0;

    for(int i=0;i<v.size();i++){
        int j = i+1;
        int k = v.size()-1;
        int sum = x-v[i];
        int value = v[j]+v[k];
        while(j<k){
            if(value<sum) j++;
            else if(value>sum)k--;
            else {
                j++;
                k--;
                occurence++;
            }
        }
    }
    cout<<occurence;

    return 0;
}