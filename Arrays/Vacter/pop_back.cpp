// pop_back--function ---->>> last value ko delete kar dita h
#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> val;
    val.push_back(10);
    val.push_back(20);
    val.push_back(30);

    if(!val.empty()){
        val.resize(val.size()-1);
    }

    for(int i=0; i<val.size(); i++){
        cout<<val[i]<<endl;

    }
}