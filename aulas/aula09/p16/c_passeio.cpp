#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N;
    int aux = 0;
    int soma = 0;
    vector <int> velocidades;
    cin >> N;

    for(int j = 0; j < 2; j++) {
        for(int i = 0; i < N; i++) {
            cin >> aux;
            velocidades.push_back(aux);
        }
    }

    sort(velocidades.begin(), velocidades.end());
    reverse(velocidades.begin(), velocidades.end());

    for(int i = 0; i< N; i++)
        soma += velocidades[i];

    cout << soma << endl;
}
