#include <iostream>
using namespace std;

int main(){
    double passed=0,failed=0;
    double html_passed = 0,css_passed = 0,dsa_passed = 0;
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
            dsa_passed++;
            html_passed++;
            css_passed++;
            passed+=1;
        }
        else{
            failed+=1;
            if(DSA_marks>=40 && HTML_marks<40 && CSS_marks<40){
                dsa_passed++;
            }
            else if(DSA_marks<40 && HTML_marks<40 && CSS_marks>=40){
                css_passed++;
            }
            else if(HTML_marks>=40 && DSA_marks<40 && CSS_marks<40){
                html_passed++;
            }
            else if(HTML_marks>=40 && DSA_marks>=40){
                html_passed++;
                dsa_passed++;
            }
            else if(HTML_marks>=40 && CSS_marks>=40){
                html_passed++;
                css_passed++;
            }
            else if(DSA_marks>=40 && CSS_marks>=40){
                dsa_passed++;
                css_passed++;
            }
        }
    }

    double pass_percentage = (passed/n) * 100;
    double fail_percentage = (failed/n) * 100;
    double dsa_pass = (dsa_passed/n) * 100;
    double html_pass = (html_passed/n) * 100;
    double css_pass = (css_passed/n) * 100;

    cout << "\nDSA's Passing %: " << dsa_pass<<"%" <<endl;
    cout << "HTML's Passing %: " << html_pass<<"%" <<endl;
    cout << "CSS's Passing %: " << css_pass<<"%" <<endl;

    cout << "\nClass's passed percentage: " << pass_percentage << "%"<<endl;
    cout << "Class's failed percentage: " << fail_percentage << "%"<<endl;

    return 0;
}
