//write a program to calculate passing percentage and failing percentage of student in a given three subject and get overall result if fail in one subject the student is fail in overall result.
#include <iostream>
using namespace std;

int main(){
    double passed=0,failed=0;
    int n,marks;

    cout << "Enter number of students: ";
    cin >> n;

    int students[n];
    int DSA_marks,HTML_marks,CSS_marks;

    for(int i =0;i < n;i++){
        cout << "\nStudent "<<i+1<<" DSA marks : ";
        cin >> DSA_marks;
        cout << "Student "<<i+1<<" HTML marks : ";
        cin >> HTML_marks;
        cout << "Student "<<i+1<<" CSS marks : ";
        cin >> CSS_marks;

        if(DSA_marks>=40 && HTML_marks >= 40 && CSS_marks>=40){
            passed+=1;
        }
        else{
            failed+=1;
        }
    }

    double pass_percentage = (passed/n) * 100;
    double fail_percentage = (failed/n) * 100;

    cout << "Class's passed percentage: " << pass_percentage << "%"<<endl;
    cout << "Class's failed percentage: " << fail_percentage << "%"<<endl;

    return 0;
}