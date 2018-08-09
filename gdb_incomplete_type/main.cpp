#include <iostream>
#include <string>

#include "reco.h"

using namespace std;


int main() {
    reco* s = new reco(5.0);
    cout << s->getWeight() << endl;

    delete s;

    return 0;
}
