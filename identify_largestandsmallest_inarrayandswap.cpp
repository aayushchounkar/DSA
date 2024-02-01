#include <iostream>
using namespace std;
int main(){
    int a;
    int largest,smallest;
    cout<<"Enter numbers of elements in array=";
    cin>>a;
    int arr[a];
    cout<<"Enter elements of array=";
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int i=0;i<arr[i];i++){
        if(largest>arr[i]){
            cout<<largest;
        }
        else if(smallest<arr[i]){
            cout<<smallest;
        }
    }
}