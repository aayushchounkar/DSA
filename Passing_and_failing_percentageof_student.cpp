//write a program to calculate passing percentage and failing percentage of student in a given subject 
#include <iostream>
using namespace std;
int main(){
    double passed=0,failed=0;
    int n,marks;
    cout<<"Enter number of student marks you want to enter ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter marks of student obtained=";
        cin>>marks;
        if(marks<=40){
            failed+=1;
        }
        else{
            passed+=1;
        }

    }
    double pass_percentage=(passed/n)*100;
    double failed_percentage=(100-pass_percentage);
    cout<<"The student passed percentage="<<pass_percentage<<"%"<<endl;
    cout<<"The student failed percentage="<<failed_percentage<<"%"<<endl;
}


