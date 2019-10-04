//
// Created by Daniel Lukish on 10/4/19.
//

#include "Jet.h"
#include <random>

Jet::Jet() {
    numEngines = 1;
    setBrand("Custom");
    setModel("F-18");
}

Jet::Jet(string brand, string model, string fuelType, int mynumEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumEngines(mynumEngines);
}

Jet::~Jet() = default;

int Jet::getNumEngines() {
    return numEngines;
}

void Jet::setNumEngines(int mynumEngines) {
    numEngines = mynumEngines;
}

double Jet::mileageEstimate(double time) {
    //Base mileage set to rand num between 40 and 100 per minute
    double mileage = (rand() % 60 + 40) * time;
    if (numEngines >= 2) {
        mileage = mileage * (1.055 * numEngines);
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " + to_string(getNumEngines());
}