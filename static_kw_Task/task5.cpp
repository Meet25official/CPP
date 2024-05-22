// 5. "Create a 'Logger' class to maintain a log of system events. Use a static member function 'logEvent(string message)' to add entries to the log without creating an instance of the class. The log should be accessible and shared across all instances of the 'Logger' class."

#include<iostream>
using namespace std;

class Logger{
    static string log;
    public:
    static void logEvent(string message){
        log += message + "\n";
        }
        static string getLog(){
            return log;
            }
};
string Logger::log = "";
int main(){
    Logger::logEvent("System started");
    Logger::logEvent("User logged in");
    Logger::logEvent("File uploaded");
    
}