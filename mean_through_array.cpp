// write a cpp program to read diplay n numbers and find mean of all the numbers using array display all the numbers and mean 
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number-";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
    sum=sum+arr[i];
    cout<<arr[i];
    }
    cout<<endl;
    cout<<"The mean is ="<<sum/n<<endl;

}