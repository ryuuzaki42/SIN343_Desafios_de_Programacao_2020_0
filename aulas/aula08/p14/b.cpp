#include <iostream>

using namespace std;

int main () {
    int N;
    cin >> N;

    int cont = 0;
    while (N != 0) {
        int c = 2;
        int temp = 1;
        int aux = 0;

        while (temp <= N) {
            aux = temp;
            temp = temp * c;
            c++;
        }

        cont++;
        N = N - aux;
    }
    cout << cont << endl;
    return 0;
}
