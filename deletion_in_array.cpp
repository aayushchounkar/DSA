//deletion of an element in an array dsa
#include <iostream>
using namespace std;
int main(){
    int n,pos,count=0;
    cout<<"Enter a size of an array=";
    cin>>n;
    int arr[n];
    cout<<"Entr an elements of an array=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter position of array you want to delete= ";
    cin>>pos;
    for(int i=pos-1;i<n;i++){
        arr[i]=arr[i+1];  
    }
    n--;
    cout<<"New array is =";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}