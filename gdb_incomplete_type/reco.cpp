#include <iostream>
#include <string>

#include "reco.h"

using namespace std;

reco::reco(float weight) {
        this->weight = weight;
}

reco::~reco(void) {
        cout << "destructor reco" << endl;
}

float reco::getWeight() {
        return weight;
}
