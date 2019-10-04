//
// Created by Daniel Lukish on 10/4/19.
//

#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    double mileage = ((rand() % 5 + 1) / 10) * time;
    if (time > 25 && time < 250) {
        // need an int value for rand
        int time3 = time/3;
        // add random amount of mileage from 1 to 1/3 of time
        mileage = mileage + (rand() % time3 + 1);
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}