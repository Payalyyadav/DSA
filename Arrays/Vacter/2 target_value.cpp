#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter your value: ";
    cin >> n;

    vector<int> values;
      int val;
    
    for (int i = 0; i < n; i++) {
       
        cout << "Enter value " << i + 1 << ": ";
        cin >> val;
        values.push_back(val);
    }

        int target;


    cout << "enter target value:";
    cin>>target;
    for (int i = 0; i <n; i++) {
       if(values[i]=target){
           cout<<"target values";
           break;
       } 
    }
        return 0;
}


