// calculating profit and loss
#include<iostream>
using namespace std;
int main(){
    int costPrice , sellingPrice;
    cout<<"Cost price : ";
    cin>>costPrice;

    cout<<"Selling price : ";
    cin>>sellingPrice;

    int loss,profit;

    if(costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        cout<<"Loss : "<<loss;
    }
    else if (sellingPrice > costPrice){
        profit = sellingPrice - costPrice;
        cout<<"Profit : "<<profit;
    }
    else{
        cout<<"No profit and loss";
    }

    return 0;

}