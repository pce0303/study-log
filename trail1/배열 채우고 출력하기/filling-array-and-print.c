#include <stdio.h>

int main() {
    // Please write your code here.
    char letters[10];

    for (int i = 0; i < 10; i++) {
        scanf(" %c", &letters[i]);
    }

    for (int i = 0; i < 10; i ++) {
        printf("%c", letters[9-i]);
    }

    return 0;
}