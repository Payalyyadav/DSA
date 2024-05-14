#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>e ;
    e.push_back(5);
    e.push_back(7);
    e.push_back(3);
    e.push_back(8);
    e.push_back(5);
    
    for(int i =0; i<e.size();i++){
        cout<<e[i]<<"  ";
    }
}

