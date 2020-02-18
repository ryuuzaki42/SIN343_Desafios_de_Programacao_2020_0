#include <stdio.h>

#define SIZE 1000000

int main() {
    int i = 0;
    char w1[SIZE], w2[SIZE];
    int cl[30];
    scanf("%s %s", w1, w2);

    for(i = 0; i < 30; i++)
        cl[i] = 0;

    //Conta tam. w1
    for(i = 0; i < SIZE; i++) {
        if(w1[i] == '\0') {
            if(w2[i] == '\0')
                break;
            else {
                printf("%c\n", 'N');
                return 0;
            }
        } else if(w2[i] == '\0') {
            printf("%c\n", 'N');
            return 0;
        }

        cl[((int)w1[i] % 30)] += 1;
        cl[((int)w2[i] % 30)] -= 1;
    }

    for(i = 0; i < 30; i++) {
        if(i == 12)
            continue;

        if(cl[i] != 0) {
            if(-1*cl[12] >= cl[i]) {
                cl[12] -= cl[i];
                cl[i] = 0;
            } else {
                printf("%c\n", 'N');
                return 0;
            }
        }
    }

    for(i = 0; i < 30; i++)
        if(cl[i] != 0) {
            printf("%c\n", 'N');
            return 0;
        }

    printf("%c\n", 'S');
    return 0;
}
