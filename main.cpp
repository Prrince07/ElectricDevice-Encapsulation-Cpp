#include <iostream>
using namespace std;

class ElectricDevice {
private:
    string deviceName;
    bool isOn;
    int powerWatts;

public:
    void setDeviceName(string name) {
        deviceName = name;
    }

    void setPowerWatts(int watts) {
        if (watts > 0)
            powerWatts = watts;
        else
            cout << "Invalid power value!" << endl;
    }

    void turnOn() {
        isOn = true;
    }

    void turnOff() {
        isOn = false;
    }

    string getDeviceName() {
        return deviceName;
    }

    int getPowerWatts() {
        return powerWatts;
    }

    bool getStatus() {
        return isOn;
    }

    void displayStatus() {
        cout << "Device: " << deviceName << endl;
        cout << "Power: " << powerWatts << "W" << endl;
        cout << "Status: " << (isOn ? "ON" : "OFF") << endl;
    }
};

int main() {
    ElectricDevice fan;
    fan.setDeviceName("Ceiling Fan");
    fan.setPowerWatts(75);
    fan.turnOn();

    fan.displayStatus();

    return 0;
}
