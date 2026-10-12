#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double GBP_Bendras = 0.8729;
    const double USD_Bendras = 1.1793;
    const double INR_Bendras = 104.6918;
    cout << fixed << setprecision(2);
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
            int valiuta;

            cout << "\n--- VALIUTOS ---\n";
            cout << "1. GBP\n";
            cout << "2. USD\n";
            cout << "3. INR\n";
            cout << "Pasirinkite valiuta: ";
            cin >> valiuta;

            if (!cin) {
                cout << "Klaida: reikia ivesti valiutos numeri.\n";
                return 1;
            }
            if (valiuta == 1) {
                cout << "1.00 EUR = " << GBP_Bendras << " GBP\n";
                cout << "1.00 GBP = " << 1.0 / GBP_Bendras << " EUR\n";
            } else if (valiuta == 2) {
                cout << "1.00 EUR = " << USD_Bendras << " USD\n";
                cout << "1.00 USD = " << 1.0 / USD_Bendras << " EUR\n";
            } else if (valiuta == 3) {
                cout << "1.00 EUR = " << INR_Bendras << " INR\n";
                cout << "1.00 INR = " << 1.0 / INR_Bendras << " EUR\n";
            } else {
                cout << "Klaida: pasirinkite valiuta nuo 1 iki 3.\n";
            }
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
