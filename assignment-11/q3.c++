// given an ele of 2D array is 0 then we have to set all ele in that row or col as 0
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int > > zeroAt_zero_i_j(vector<vector<int > >&v){
    int count = 0;

    // to find how many zeros are present in 2D array
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==0){
                count++;
            }
        }
    }

    vector<vector<int > >position(count,vector<int>(2)); // vector to store position(i,j) of zeros in array
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==0){
                for(int k=0;k<count;k++){
                    position[k][0] = i;
                    position[k][1] = j;
                    break;
                }
            }              
        }
    }

    // ele in row and col of zero ele is  = 0
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            for(int k=0;k<position.size();k++){
                if(i==position[k][0] || j==position[k][1]) v[i][j]=0;
            }
        }
    }
   
    return v; // now v is updated as per Q
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

    zeroAt_zero_i_j(v); // return a vector inpalce only

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
