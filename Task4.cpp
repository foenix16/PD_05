#include<iostream>
using namespace std;

void projectTimeCalculation(int hours, int days, int workers) 
{
    int effectiveDays = days * 0.9;
    double totalWorkingHours = effectiveDays * (8 + 2) * workers;


    if (totalWorkingHours >= neededHours) 
    {
        int hoursLeft = totalWorkingHours - hours;
        cout << "Yes! " << hoursLeft << " hours left." << endl;
    } 
    else 
    {
        int additionalHours = hours - totalWorkingHours;
        cout << "Not enough time! " << additionalHours << " hours needed." << endl;
    }
}

int main()
{
    int days,hours,workers;
    cout << "Enter the needed hours : " ;
    cin >> hours;
    cout << "Enter the days that the firm has :" ;
    cin >> days;
    cout << "Enter the number of all workers : " ;
    cin >> workers;
    projectTimeCalculation(hours,days,workers);
    return 0;
}