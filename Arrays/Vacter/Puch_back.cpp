//  puch_back -->  next value print kar vata h 
#include<iostream>
#include<vector>
using namespace std;
int main (){
    // Normal vactor creact--->
    vector<int>values; // <--- vactor name
   

   // element------>>>
   values.push_back(1);
   values.push_back(2);
   values.push_back(3);


   // Print -------->>>>
   for(int i =0; i<values.size(); i++){
    cout<<values[i]<<endl; // next value add karta h
   }
            

}




