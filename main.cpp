#include <iostream>
using namespace std;

int main() {
  int veiksmas;

    do {
        cout << "\n-- Valiutos Keitykla---\n";
        cout << "1. Valiutos kurso palyginimas\n";
        cout << "2. Valiutos pirkimas\n";
        cout << "3. Valiutos pardavimas\n";
        cout << "4. Iseiti\n";
        cout << "Pasirinkite veiksma: ";
        cin >> veiksmas;

    if (!cin) {
        cout << "Klaida: Iveskite skaiciu nuo 1 iki 4.\n";
        return 1;
    }
        if (veiksmas == 1) {
            cout << "Pasirinkote valiutos kurso palyginima.\n";
        } else if (veiksmas == 2) {
            cout << "Pasirinkote valiutos pirkima.\n";
        } else if (veiksmas == 3) {
            cout << "Pasirinkote valiutos pardavima.\n";
        } else if (veiksmas == 4) {
            cout << "Programa uzdaroma.\n";
        } else {
            cout << "Klaida: Iveskite skaiciu nuo 1 iki 4.\n";
        }
    } while (veiksmas != 4);

    return 0;
}
