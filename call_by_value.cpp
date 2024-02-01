#include <iostream>
using namespace std;
void func(int num){
    cout<<num<<endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    func(arr[3]);
}