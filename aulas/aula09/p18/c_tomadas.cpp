#include <iostream>

using namespace std;

int main() {
    int reguas[4];
    int soma = 0;

    for(int i = 0; i < 4; i++) {
        cin >> reguas[i];
        soma += reguas[i];
    }

    soma -= 3;
    cout << soma << endl;
}
