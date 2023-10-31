// returns the largest and the smallest number out of 3 given numbers.
//using function to get the largest and smallest number .

#include<iostream>
using namespace std;
void largest_smallest(int &a, int &b , int &c){
    int *ptra = &a;
    int *ptrb = &b;
    int *ptrc = &c;
    int max;
    int min;

    // check for min
    if(*ptra<*ptrb){
        if(*ptra<*ptrc){
            min = *ptra;
        }
        else{
            min = *ptrc;
        }
    }
    else{
        if(*ptrb<*ptrc){
            min = *ptrb;
        }
        else{
            min = *ptrc;
        }
    }
    cout<<min<<" ";

    // check for max
    if(*ptra>*ptrb){
        if(*ptra>*ptrc){
            max = *ptra;
        }
        else{
            max = *ptrc;
        }
    }
    else{
        if(*ptrb>*ptrc){
            max = *ptrb;
        }
        else{
            max = *ptrc;
        }
    }
    cout<<max<<" ";

    return ;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    largest_smallest(a,b,c);
    return 0;
}
