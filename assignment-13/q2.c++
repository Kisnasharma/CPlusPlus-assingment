// checking that given matrix is perfect or not 
// condition of perfect 
// 1. All the elements in the diagonals of the matrix are non-zero integers.
// 2. All other elements except the diagonal elements are 0.

#include<iostream>
#include<vector>
using namespace std;

bool perfect_or_imperfect_mat(vector<vector<int > >&v){
    int count = 0; // counting numbers which are satisfying the condition
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(( (i==j || (i+j==v.size()-1))&&(v[i][j]!=0) ) || ( (i!=j || (i+j!=v.size()-1))&&(v[i][j]==0) )){
                count++;
            }
            else break;
        }
        if(count != (v.size())*(i+1)) break; // condition to decrease runtime
    }
    if(count ==v.size()*v.size()) return true;
    else return false;

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
    bool perfectness = perfect_or_imperfect_mat(v);
    cout<<perfectness;

    return 0;
}

