#include <iostream>
using namespace std;
void insertEnd(int *arr, int&a, int element){
    arr[a] = element;
    for (int i = 0; i < a+1; i++){
        cout << arr[i]<<" ";
    }cout << endl;
    
}

int main(){

    int n,element;
    cout<<"Enter a size of array-";
    cin>>n;
    int arr[n+1];

    cout<<"Enter elements into array-";
    for(int i = 0; i < n; i++){
    cin>>arr[i];
    }

    cout<<"Enter elment yo want to insert-";
    cin>>element;

    insertEnd(arr,n,element);

} 