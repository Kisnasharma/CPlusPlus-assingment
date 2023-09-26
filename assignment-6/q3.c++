// checking the eligiblity criteria for voting 
#include<iostream>
using namespace std;
void voterAge(float n){
    if(n>=18) cout<<"Yes";
    else cout<<"No";

    return ;
}
int main(){
    float age;
    cout<<"Age : ";
    cin>>age;
    voterAge(age);

    return 0;
}