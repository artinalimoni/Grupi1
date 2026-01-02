#include <iostream>
#include <string>

using namespace std;

const int MAX_VETURA = 100;
const double CMIMI_PER_ORE = 1.5;

struct Vetura {
    string targa;
    int oreParkimi;
};

Vetura parking[MAX_VETURA];
int nrVeturave = 0;

// Funksioni për regjistrimin e veturës
void regjistroVeturen() {
    if (nrVeturave >= MAX_VETURA) {
        cout << "Parking është plot!\n";
        return;
    }

    cout << "Shkruani targën e veturës: ";
    cin >> parking[nrVeturave].targa;

    cout << "Shkruani numrin e orëve të parkimit: ";
    cin >> parking[nrVeturave].oreParkimi;

    nrVeturave++;
    cout << "Vetura u regjistrua me sukses.\n";
}
