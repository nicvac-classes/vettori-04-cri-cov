#include <iostream>
using namespace std;

int main() {
    srand(time(0));   //Seed random number generator
    
    int n;

    cout << "quanto vale n?" << endl;
    cin >> n;
    int v[n];
    int i;

    i = 0;
    while (i < n) {
        cout << "quale è il numero?" << endl;
        v[i] = rand() % 1001;
        cout << "V[i]" << endl;
        i = i + 1;
    }
    int contPari;

    i = 0;
    contPari = 0;
    while (i < n) {
        if (v[i] % 2 == 0) {
            contPari = contPari + 1;
        }
        i = i + 1;
    }
    cout << "i numeri pari sono" << contPari << endl;
    int imax;
    int max;

    i = 0;
    max = v[i];
    imax = 0;
    while (i < n) {
        if (v[i] > max) {
            max = v[i];
            imax = 1;
        }
        i = i + 1;
    }
    cout << "il voto più alto è" << max << endl;
    cout << "la casella in cui è contenuto è" << imax << endl;
    int min;
    int imin;

    i = 0;
    min = v[i];
    imin = 0;
    while (i < n) {
        if (v[i] < min) {
            min = v[i];
            imin = i;
        }
        i = i + 1;
    }
    cout << "il numero più piccolo è" << min << endl;
    cout << "ed è contenuto nella casella" << imin << endl;
    return 0;
}

