#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {
    int e[61], d[61];
    int i, n, tam;
    char pe;

    while(cin >> n) {
        int soma = 0;

        for(i = 0; i < 61; ++i) {
            e[i] = 0;
            d[i] = 0;
        }

        for(i = 0; i < n; ++i) {
            scanf("%d %c", &tam, &pe);

            if(pe == 'E')
                e[tam]++;
            else
                d[tam]++;
        }

        for(i = 0; i < 61; ++i) {
            //printf("%d ", e[i]);
            if(e[i] < d[i])
                soma += e[i];
            else
                soma += d[i];

            //soma = e[i] > d[i] ? soma + e[i] : soma +  d[i];
        }

        printf("%d\n", soma);
    }
    return 0;
}

