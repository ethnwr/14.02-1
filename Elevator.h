#pragma once
#include <iostream>


using namespace std;

class Elevator
{
private:
    int lowerFloor;      
    int upperFloor;      
    int currentFloor;    
    bool isRunning;      

public:
    // Êîíñòðóêòîð
    Elevator(int lower, int upper) : lowerFloor(lower), upperFloor(upper), currentFloor(lower), isRunning(false) {}

    // Âêëþ÷åíèå ëèôòà
    void turnOn() {
        isRunning = true;
        cout << "Ëèôò çàïóùåí." <<endl;
    }

    // Âûêëþ÷åíèå ëèôòà
    void turnOff() {
        isRunning = false;
        cout << "Ëèôò îñòàíîâëåí." << endl;
    }

    // Ïîëó÷åíèå ñîñòîÿíèÿ ëèôòà
    bool isElevatorRunning() const {
        return isRunning;
    }

    // Ïîëó÷åíèå òåêóùåãî ïîëîæåíèÿ ëèôòà
    int getCurrentFloor() const {
        return currentFloor;
    }

    // Îáðàáîòêà âûçîâà ëèôòà
    void callElevator(int floor) {
        if (floor < lowerFloor || floor > upperFloor) {
            cout << "Òàêîãî ýòàæà íåòó, âîîäèòå êîððåêòíåé." << endl;
            return;
        }
        if (isRunning) {
            currentFloor = floor;
            cout << "Ëèôò äâèæåòñÿ íà ýòàæ ¹: " << currentFloor << endl;
        }
        else {
            cout << "Ëèôò íóæíî çàïóñòèòü." << endl;
        }
    }
};
