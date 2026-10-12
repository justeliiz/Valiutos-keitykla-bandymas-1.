#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double GBP_Bendras = 0.8729;
    const double USD_Bendras = 1.1793;
    const double INR_Bendras = 104.6918;

    const double GBP_Pirkti = 0.8600;
    const double USD_Pirkti = 1.1460;
    const double INR_Pirkti = 101.3862;

    const double GBP_Parduoti = 0.9220;
    const double USD_Parduoti = 1.2340;
    const double INR_Parduoti = 107.8546;

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
            int valiuta;

            cout << "\n--- VALIUTOS ---\n";
            cout << "1. GBP\n";
            cout << "2. USD\n";
            cout << "3. INR\n";
            cout << "Pasirinkite valiuta: ";
            cin >> valiuta;

            if (!cin || valiuta < 1 || valiuta > 3) {
                cout << "Klaida: reikia pasirinkti valiuta nuo 1 iki 3.\n";
                return 1;
            }

            double suma;

            cout << "Iveskite euru suma: ";
            cin >> suma;

            if (!cin || suma <= 0) {
                cout << "Klaida: reikia ivesti teigiama suma.\n";
                return 1;
            }

            if (valiuta == 1) {
                cout << suma << " EUR = " << suma * GBP_Pirkti << " GBP\n";
            } else if (valiuta == 2) {
                cout << suma << " EUR = " << suma * USD_Pirkti << " USD\n";
            } else if (valiuta == 3) {
                cout << suma << " EUR = " << suma * INR_Pirkti << " INR\n";
            }
        } else if (veiksmas == 3) {
            int valiuta;

            cout << "\n--- VALIUTOS ---\n";
            cout << "1. GBP\n";
            cout << "2. USD\n";
            cout << "3. INR\n";
            cout << "Pasirinkite valiuta: ";
            cin >> valiuta;

            if (!cin || valiuta < 1 || valiuta > 3) {
                cout << "Klaida: reikia pasirinkti valiuta nuo 1 iki 3.\n";
                return 1;
            }

            double suma;

            cout << "Iveskite parduodamos valiutos suma: ";
            cin >> suma;

            if (!cin || suma <= 0) {
                cout << "Klaida: reikia ivesti teigiama suma.\n";
                return 1;
            }

            if (valiuta == 1) {
                cout << suma << " GBP = " << suma / GBP_Parduoti << " EUR\n";
            } else if (valiuta == 2) {
                cout << suma << " USD = " << suma / USD_Parduoti << " EUR\n";
            } else if (valiuta == 3) {
                cout << suma << " INR = " << suma / INR_Parduoti << " EUR\n";
            }
        } else if (veiksmas == 4) {
            cout << "Programa uzdaroma.\n";
        } else {
            cout << "Klaida: Iveskite skaiciu nuo 1 iki 4.\n";
        }
    } while (veiksmas != 4);

    return 0;
}
