// calculating square of each element of given array/vector
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
    for(int i=0;i<v.size();i++){
        v[i] *= v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
