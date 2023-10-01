// finding number of unique pairs whose absolute sum os exactly same
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int absolute(int &a){
    if(a>0)return a;
    else return -a;
}
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

    int occurence = 0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if((absolute(v[i]) + absolute(v[j]) == x)){
                occurence++;
                v[i] = 0;
                v[j] = 0;
            }
        }
    }
    cout<<occurence;


}