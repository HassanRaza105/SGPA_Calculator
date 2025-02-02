#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
// calculateGPA function on basis of obtained percentage
float calculateGPA(float percentage) {
    if (percentage >= 85) return 4.0;
    else if (percentage >= 83) return 3.9;
    else if (percentage >= 82) return 3.8;
    else if (percentage >= 80) return 3.7;
    else if (percentage >= 79) return 3.6;
    else if (percentage >= 77) return 3.5;
    else if (percentage >= 76) return 3.4;
    else if (percentage >= 74) return 3.3;
    else if (percentage >= 73) return 3.2;
    else if (percentage >= 71) return 3.1;
    else if (percentage >= 70) return 3.0;
    else if (percentage >= 69) return 2.9;
    else if (percentage >= 68) return 2.8;
    else if (percentage >= 67) return 2.7;
    else if (percentage >= 66) return 2.6;
    else if (percentage >= 65) return 2.5;
    else if (percentage >= 64) return 2.4;
    else if (percentage >= 63) return 2.3;
    else if (percentage >= 62) return 2.2;
    else if (percentage >= 61) return 2.1;
    else if (percentage >= 60) return 2.0;
    else if (percentage >= 59) return 1.9;
    else if (percentage >= 58) return 1.8;
    else if (percentage >= 57) return 1.7;
    else if (percentage >= 56) return 1.6;
    else if (percentage >= 55) return 1.5;
    else if (percentage >= 54) return 1.4;
    else if (percentage >= 53) return 1.3;
    else if (percentage >= 52) return 1.2;
    else if (percentage >= 51) return 1.1;
    else if (percentage >= 50) return 1.0;
    else return 0.0;
}
// calculateGrade function on basis of obtained GPA
string calculateGrade(float GPA, float percentage) {
    if (GPA >= 4.0 && percentage >= 95) return "A+";
    else if (GPA >= 4.0) return "A";
    else if (GPA >= 3.7) return "B+";
    else if (GPA >= 3.0) return "B";
    else if (GPA >= 2.0) return "C";
    else if (GPA >= 1.0) return "D";
    else return "F";
}

int main() {
    int totalSubjects;
    float totalMarks = 0;
    float totalObtainedMarks = 0;
    float SGPA;
    float totalQualityPoints=0.0;
    int totalCreditHours=0;
    float totalPercentage=0.0;
    
    cout << "Enter total subjects: ";
    cin >> totalSubjects;
    for (int i = 1; i <= totalSubjects; i++) {
        float totalMarksInSubject; // total marks in subject
        float obtainedMarksInSubject; // obtained marks in subject
        float percentageInSubject;

        int creditHourOfSubject=0;

        float qualityPointsOfSubject=0.0;

        cout << "\nEntar total Marks of Subject " << i << " : ";
        cin >> totalMarksInSubject;
        cout << "\nEntar obtained Markes in Subkect " << i << " : ";
        cin >> obtainedMarksInSubject;
        cout << "\nEntar Crediet Hours of "<< i << " subject : ";
        cin >> creditHourOfSubject;
        totalMarksInSubject = round(totalMarksInSubject);
        obtainedMarksInSubject = round(obtainedMarksInSubject);

        totalMarks += totalMarksInSubject;
        totalObtainedMarks += obtainedMarksInSubject;

        percentageInSubject = obtainedMarksInSubject/totalMarksInSubject*100;

        qualityPointsOfSubject = calculateGPA(percentageInSubject)*creditHourOfSubject;

        totalQualityPoints +=qualityPointsOfSubject;
        totalCreditHours +=creditHourOfSubject;


    }

    SGPA = totalQualityPoints/totalCreditHours;
    totalPercentage = totalObtainedMarks/totalMarks*100;
    cout<< endl<<"\n\nYour SGPA is : "<< SGPA<<endl;
    cout<< endl<<"\n\nYour SGPA is : "<< round(SGPA)<<endl;
    cout<< "your Grade is : "<<calculateGrade(SGPA,totalPercentage);
    cout << "\n Percentage is : "<<totalPercentage;
    return 0;
}