#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    arr[4]=100;//{1,2,3,4,100}
    arr[1]=8;//{1,8,3,4,5}
     printf("%d",arr[3]);
     return 0;
}