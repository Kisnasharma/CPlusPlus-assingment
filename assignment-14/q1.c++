// finding the row with max sum
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void max_sum_row(vector<vector<int > >&v){
    int max_sum = INT_MIN;
    int idx = -1;
    for(int i=0;i<v.size();i++){
        int sum = 0;
        for(int j=0;j<v[i].size();j++){
            sum+= v[i][j];
        }
        if(sum>max_sum) idx = i;

    }
    cout<<idx+1;
}

int main(){
    int m,n;
    cin>>m>>n;

    vector<vector<int > >v(m,vector<int>(n));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cin>>v[i][j];
        }
    }
    max_sum_row(v);

    return 0;
}