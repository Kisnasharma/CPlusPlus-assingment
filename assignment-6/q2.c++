// by providing radius of circle to give circumference and are
#include<iostream>
using namespace std;
void circumArea(float r){
    float area = (22*r*r)/7;
    float circum = (2*22*r)/7;

    cout<<"Area : "<<area<<endl<<"circumference : "<<circum;

    return;
}
int main(){
    float radius;
    cout<<"Radius : ";
    cin>>radius;
    circumArea(radius);

    return 0;
}