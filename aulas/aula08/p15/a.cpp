#include <iostream>
#include <string>

using namespace std;

int main(){
    string numero;
    cin >> numero;

    int ans = 0;
    for(int i = 0; i < numero.size(); i++){
        ans += numero[i];
        ans %= 3;
    }
    cout << ans << endl;
}
