// we are printing the upper half of matrix including the diagonal
#include<iostream>
#include<vector>
using namespace std;
void upper(vector<vector<int > >&v){
    for(int i=0;i<v.size();i++){
        for(int k=0;k<i;k++){
            cout<<"  ";
        }
        for(int j=i;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int > >v(n,vector<int>(n));

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cin>>v[i][j];
        }
    }

    upper(v);

    return 0;
}
