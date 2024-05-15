#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main(){
    vector<int>values {4,10,8,11,1};
    sort(values.begin(), values.end());
    for(int i=0;i<values.size(); i++){
        cout<<values[i]<<endl;
    }
    
}    