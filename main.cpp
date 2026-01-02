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
