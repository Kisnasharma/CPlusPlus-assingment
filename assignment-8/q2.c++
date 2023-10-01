// checking that if any pair exist in vector that sum is equal to given x;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    int x;
    cout<<"x = ";
    cin>>x;

    int occurence = 0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if((v[i]+v[j])==x){
                occurence ++;
            }
        }
    }
    if(occurence>0)cout<<"Yes";
    else cout<<"No";

    return 0;
} 