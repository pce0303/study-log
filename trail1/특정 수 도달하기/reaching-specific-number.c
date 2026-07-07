#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int sum = 0;
    double avg = 0;

    for (int i = 0; i < 10; i++) {
        scanf(" %d", &arr[i]);
        if (arr[i] >= 250) {
            for (int j = 0; j <i; j++) {
                sum += arr[j];
            }
            avg = (double)sum/i;
            break;
        }
    }

    printf("%d %.1lf", sum, avg);

    return 0;
}