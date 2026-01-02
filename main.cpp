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

// Funksioni për shfaqjen e veturave
void shfaqVeturat() {
    if (nrVeturave == 0) {
        cout << "Nuk ka vetura të parkuara.\n";
        return;
    }

    cout << "\nVeturat e parkuara:\n";
    for (int i = 0; i < nrVeturave; i++) {
        cout << i + 1 << ". Targa: " << parking[i].targa
             << " | Orë: " << parking[i].oreParkimi << endl;
    }
}

// Funksioni për llogaritjen e pagesës
void llogaritPagesen() {
    string targa;
    cout << "Shkruani targën e veturës: ";
    cin >> targa;

    for (int i = 0; i < nrVeturave; i++) {
        if (parking[i].targa == targa) {
            double pagesa = parking[i].oreParkimi * CMIMI_PER_ORE;
            cout << "Pagesa për veturën me targa " << targa
                 << " është: " << pagesa << " €\n";
            return;
        }
    }

    cout << "Vetura nuk u gjet.\n";
}

// Funksioni për kërkimin e veturës
void kerkoVeturen() {
    string targa;
    cout << "Shkruani targën për kërkim: ";
    cin >> targa;

    for (int i = 0; i < nrVeturave; i++) {
        if (parking[i].targa == targa) {
            cout << "Vetura u gjet.\n";
            cout << "Targa: " << parking[i].targa
                 << " | Orë parkimi: " << parking[i].oreParkimi << endl;
            return;
        }
    }

    cout << "Vetura nuk u gjet.\n";
}
