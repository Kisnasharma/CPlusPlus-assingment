// returning the preffix sum of matrix 
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int > > preffixSum(vector<vector<int > > &v){

    //preffix sum about row
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v[i].size();j++){
            v[i][j] += v[i][j-1];
        }
    }

    // preffix sum about col
    for(int i=1;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            v[i][j] += v[i-1][j]; 
        }
    }

    return v;
}
int main(){
    int m,n;
    cin>>m>>n;

    vector<vector<int > >v(m,vector<int>(n,0));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cin>>v[i][j];
        }
    }

    preffixSum(v);

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}