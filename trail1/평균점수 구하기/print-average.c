#include <stdio.h>

int main() {
    // Please write your code here.
    double score[8];
    double sum = 0;
    double avg = 0;

    for (int i = 0; i < 8; i++) {
        scanf(" %lf", &score[i]);
        sum += score[i];
    }

    avg = sum/8;

    printf("%.1lf", avg);

    return 0;
}