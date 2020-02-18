#include <iostream>
#include <stdio.h>

using namespace std;

int fib(int n, int &i) {
    i++;
    if(n<2)
        return n;

    return fib(n-1, i) + fib(n-2, i);
}

int main() {
    int n, a, i;
    int vetor[40] = {0};
    int chamadas[40] = {0};
    vetor[0] = 0;
    vetor[1] = 1;
    int ini = 2;
    chamadas[0] = 0;
    chamadas[1] = 0;
    scanf("%d", &n);

    for(int j=0; j<n; j++) {
        scanf("%d", &a);

        if(!vetor[a]) {
            for(int k = ini; k<=a; k++) {
                vetor[k] = vetor[k-1] + vetor[k-2];
                chamadas[k] = chamadas[k-1] + chamadas[k-2] + 2;
            }
            ini = a;
        }
        printf("fib(%d) = %d calls = %d\n", a, chamadas[a], vetor[a]);
    }
    return 0;
}
