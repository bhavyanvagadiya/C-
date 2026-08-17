#include <iostream>
using namespace std;

int main() {
    int totalDays;
    int years, weeks, days, remainingDays;

    cout << "Enter the total number of days: ";
    cin >> totalDays;


    years = totalDays / 365;
    remainingDays = totalDays % 365;

    weeks = remainingDays / 7;
    days = remainingDays % 7;

    cout << totalDays << " days is equivalent to:" << endl;
    cout << years << " Year(s)" << endl;
    cout << weeks << " Week(s)" << endl;
    cout << days << " Day(s)" << endl;

    return 0;
}
