// returns the first character, last character and the number of
//occurrences of ‘t’ in a string input by user.
#include<iostream>
using namespace std;
void filant(char &str[] , int &n){
    char *first = &str; // as address of string is as same as of string first element address
    cout<<*first<<" ";

    char *last = &str[n-1];
    cout<<*last<<" ";

    int i=0;
    int count = 0;
    while(str[i]!='\0'){
        if(str[i]=='t')count ++;
        i++;
    }
    cout<<count<<endl;
    return ;
    
}
int main(){
    int size; // size of string 
    cin>>size;
    int n = size;
    char str[n];
    int i = 0 ;
    while(i>n){
        cin>>str[i];
        i++;
    }
    filant(str , n);

    return 0;
}