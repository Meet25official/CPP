#include <iostream>
#include <string>

class CalendarEvent {
private:
    std::string eventName;
    std::string date;
    std::string time;

public:
    // Constructor with parameters
    CalendarEvent(const std::string& name, const std::string& eventDate, const std::string& eventTime)
        : eventName(name), date(eventDate), time(eventTime) {}

    // Method to display event information
    void displayEvent() {
        std::cout << "Event Name: " << eventName << std::endl;
        std::cout << "Date: " << date << std::endl;
        std::cout << "Time: " << time << std::endl;
    }
};

int main() {
    // Creating a calendar event object
    CalendarEvent event1("Meeting", "2024-03-19", "15:00");

    // Displaying event information
    std::cout << "Event Information:" << std::endl;
    event1.displayEvent();

    return 0;
}
