// printing star triangle
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"rows : ";
    cin>>rows;

    cout<<"cols : ";
    cin>>cols;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"*";
        }cout<<endl;
    } 
}