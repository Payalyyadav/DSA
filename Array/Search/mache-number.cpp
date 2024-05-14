#include<iostream>
 #include<vector>
using namespace std;

int main(){
vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> b = {1, 2};
    
    for (int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < b.size(); j++) {
            if(arr[i] == b[j]) {
                cout << arr[i] << " ";
            }
        }
    }
}
