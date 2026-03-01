#include <iostream>
using namespace std;

int sumaDigitosPares(int n) {
    // Caso base
    if (n == 0) {
        return 0;
    }

    int ultimo = n % 10;
    if (ultimo % 2 == 0) {
        return ultimo + sumaDigitosPares (n/10);
    } else {
        return sumaDigitosPares (n/10);
    }
}

int main() {
    int n = 12336871;
    cout << "Resultado: " << sumaDigitosPares(n) << endl;
    return 0;
}