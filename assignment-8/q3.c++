// if there exists a pair in the array whose absolute difference is exactly x.
#include<iostream>
#include<vector>
int absolute(int a){
    if(a>0) return a;
    else return -a;
}
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
    cout<<"x : ";
    cin>>x;

    int occuerence = 0;

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if( (absolute(v[i]) + absolute(v[j])) == x )occuerence++;
        }
    }
    if(occuerence>0)cout<<"Yes";
    else cout<<"No";

    return 0;

}
