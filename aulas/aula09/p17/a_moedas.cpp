#include <stdio.h>

int main() {
    int x,i = 0;
    long long int soma = 1;
    scanf("%d", &x);

    for(i = 0; i < x; i++)
        soma*=2;

    printf("%lld\n",(soma + soma) - 2);
}
