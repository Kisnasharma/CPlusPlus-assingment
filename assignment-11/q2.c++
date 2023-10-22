// rotating the matrix by 90 degree clockwise direction
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int > > rotateClockwise(vector<vector<int > >&v){

    // transpose of matrix
    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }

    //reversing each row to get the rotated matrix 
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }
    return v;
}
int main(){
    int n;
    cin>>n; // n is order of matrix 

    vector<vector<int > >v(n,vector<int>(n));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cin>>v[i][j];
        }
    }

    rotateClockwise(v);

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}