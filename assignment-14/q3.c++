// calculating in which hourglass the sum of all ele is maximum
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void hourGlassMaxSum(vector<vector<int > >&v){
    int max_sum = INT_MIN;
    int sum = 0 ;

    for(int i=1;i<v.size()-1;i++){
        for(int j=1;j<v[i].size()-1;j++){
            sum = v[i][j] + v[i-1][j] + v[i-1][j-1] + v[i-1][j+1] + v[i+1][j] + v[i+1][j-1] + v[i+1][j+1];
            if(sum>max_sum) max_sum = sum;
        }
    }
    cout<<max_sum;
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

    hourGlassMaxSum(v);

    return 0;
}