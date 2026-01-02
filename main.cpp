#include <iostream>
#include <string>
const int MAX = 100;
const float CMIMI_PER_ORE = 1.5;

// Struct për veturën
struct Vetur {
    string targa;
    string modeli;
    int ore;
};
// Shto veturë në parking
void shtoVeture(Vetur v[], int &n) {
    if (n >= MAX) {
        cout << "Parking i mbushur!\n";
        return;
    }

    cout << "Targa: ";
    cin >> v[n].targa;
    cout << "Modeli: ";
    cin >> v[n].modeli;
    cout << "Oret e parkimit: ";
    cin >> v[n].ore;

    n++;
    cout << "Vetura u regjistrua me sukses.\n";
}

// Shfaq veturat në parking
void shfaqVeturat(Vetur v[], int n) {
    if (n == 0) {
        cout << "Nuk ka vetura ne parking.\n";
        return;
    }

    cout << "\n--- Veturat ne Parking ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Targa: " << v[i].targa
             << ", Modeli: " << v[i].modeli
             << ", Ore: " << v[i].ore << endl;
    }
}

// Llogarit pagesën
void llogaritPagesen(Vetur v[], int n) {
    string targa;
    cout << "Shkruaj targen: ";
    cin >> targa;

    for (int i = 0; i < n; i++) {
        if (v[i].targa == targa) {
            float pagesa = v[i].ore * CMIMI_PER_ORE;
            cout << "Pagesa per veturen " << targa
                 << " eshte: " << pagesa << " EUR\n";
            return;
        }
    }

    cout << "Vetura nuk u gjet.\n";
}

// Kërko veturë sipas targës
void kerkoVeture(Vetur v[], int n) {
    string targa;
    cout << "Shkruaj targen: ";
    cin >> targa;

    for (int i = 0; i < n; i++) {
        if (v[i].targa == targa) {
            cout << "Vetura u gjet:\n";
            cout << "Modeli: " << v[i].modeli
                 << ", Ore: " << v[i].ore << endl;
            return;
        }
    }

    cout << "Vetura nuk u gjet.\n";
}

// Llogarit pagesën
void llogaritPagesen(Vetur v[], int n) {
    string targa;
    cout << "Shkruaj targen: ";
    cin >> targa;

    for (int i = 0; i < n; i++) {
        if (v[i].targa == targa) {
            float pagesa = v[i].ore * CMIMI_PER_ORE;
            cout << "Pagesa per veturen " << targa
                 << " eshte: " << pagesa << " EUR\n";
            return;
        }
    }

    cout << "Vetura nuk u gjet.\n";
}

int main() {   
    Vetur parking[MAX];
    int n = 0;
    int zgjedhja;
    do { 
        cout << "\n=== MENAXHIMI I PARKIMIT ===\n";
        cout << "1. Regjistro veture\n";
        cout << "2. Shfaq veturat\n";
        cout << "3. Llogarit pagesen\n";
        cout << "4. Kerko veture\n";
        cout << "0. Dalje\n";
        cout << "Zgjedhja: ";
        cin >> zgjedhja;   
    } while (zgjedhja != 0);
    return 0;
}
