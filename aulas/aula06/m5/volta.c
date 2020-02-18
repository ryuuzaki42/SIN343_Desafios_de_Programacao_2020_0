#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int diff = y-x;
    int result = y/diff;

    if((y%diff) != 0)
        printf("%d\n", result+1);
    else
        printf("%d\n", result);

    return 0;
}
