#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    char face = 'N';
    char mov;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> mov;

        if(mov == 'E') {
            if(face == 'N')
                face = 'O';
            else if(face == 'O')
                face = 'S';
            else if(face == 'S')
                face = 'L';
            else if(face == 'L')
                face = 'N';
        }

        if(mov == 'D') {
            if(face == 'N')
                face = 'L';
            else if(face == 'L')
                face = 'S';
            else if(face == 'S')
                face = 'O';
            else if(face == 'O')
                face = 'N';
        }
    }

    printf("%c\n", face);
    return 0;
}
