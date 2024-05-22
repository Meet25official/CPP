// 5. Electronic Devices:
//    Design a system to represent electronic devices such as smartphones, tablets, and laptops. Devices can be categorized based on their type (e.g., mobile, computer) and their power source (e.g., battery, electricity). Implement the system using hybrid inheritance to manage the complexity of the hierarchy.


#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
    string type;
public:
    Device(string _type) : type(_type) {}
    virtual void display() = 0; 
};

class PowerSource {
protected:
    string powerType;
public:
    PowerSource(string _powerType) : powerType(_powerType) {}
    virtual void displayPowerSource() = 0; 
};

class MobileDevice : public Device {
public:
    MobileDevice(string _type) : Device(_type) {}
    void display() override {
        cout << "Device Type: " << type << endl;
    }
};

class Smartphone : public MobileDevice, public PowerSource {
public:
    Smartphone(string _type, string _powerType) : MobileDevice(_type), PowerSource(_powerType) {}
    void displayPowerSource() override {
        cout << "Power Source: " << powerType << endl;
    }
};

int main() {
    Smartphone smartphone("Smartphone", "Battery");
    smartphone.display();
    smartphone.displayPowerSource();
    
    return 0;
}
