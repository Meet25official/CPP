// 9. Design a class representing a calendar event with member variables for event name, date, and time. Write a constructor that takes these details as parameters.

#include<iostream>
using namespace std;

class Calender{
    private:
    string eventName;
    string date;
    string time;

    public:
    Calender(string name, string d, string t){
        eventName = name;
        date = d;
        time = t;
    }
    void displayCalenderInfo(){
        cout << "Event Name: " << eventName << endl;
        cout << "Date: " << date << endl;
        cout << "Time: " << time << endl;
    }
};
int main(){
    Calender event1("Birthday Party", "2022-12-25", "10:00 AM");
    Calender event2("New Year Party", "2023-01-01", "11:00 PM");
    event1.displayCalenderInfo();
    event2.displayCalenderInfo();
    return 0;
}