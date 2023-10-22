// finding maximum value present in 2D array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxValue(vector<vector<int > >&v){
    int max = INT_MIN;

    // to find the max ele from 2D array 
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]>max) max = v[i][j];
        }
    }
    
    return max;
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

    int maximum = maxValue(v);
    cout<<maximum;

    return 0;

}