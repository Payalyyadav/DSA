#include <iostream> 
using namespace std;
int main(){
    int copies;
    cout<<"Enter your copy";
    cin>>copies;
    
    int sum =0;
    cout<<"Enter your sum";
    sum=sum+copies;
    cin>>sum;
    
    int price=2;
    cout<<"Enter your price";
    price=price/sum;
    cin>>price;
    
    if(price/2){
        cout<<"it is valid";
     }else{
         cout<<"It is not valid";
     }
    
    
}
