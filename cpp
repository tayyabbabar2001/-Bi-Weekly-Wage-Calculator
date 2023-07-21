#include <iostream>
using namespace std;

int main() {
    int hourlyRate, regularhours1, regularhours2, overtimehours1, workinghours1, overtimehours2, workinghours2, allowedhours = 80, totalWages1, totalWages2;
    float overtimeWages;
    
    cout << "Enter hourly rate: ";
    cin >> hourlyRate;
    
	cout << "Enter Week 1 working hours:";
	cin >> workinghours1;
	cout << "Enter hours worked overtime:";
	cin >> overtimehours1;
	
	cout << "Enter Week 2 working hours:";
	cin >> workinghours2;
	cout << "Enter hours worked overtime:";
	cin >> overtimehours2;
	
	regularhours1 = workinghours1 * hourlyRate;
	overtimehours1 = overtimehours1 * (hourlyRate * 1.75);
	totalWages1 = regularhours1 + overtimehours1;
	
	regularhours2 = workinghours2 * hourlyRate;
	overtimehours2 = overtimehours2 * (hourlyRate * 1.75);
	totalWages2 = regularhours2 + overtimehours2;

cout << "Total bi-weekly wages: $" << totalWages1 + totalWages2 << endl;
	return 0;
}
