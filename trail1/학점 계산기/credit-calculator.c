#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    double score[5];
    double sum = 0;
    double avg = 0;
    int count = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf(" %lf", &score[i]);
        sum += score[i];
        count++;
    }

    avg = sum/count;

    if (avg >= 4.0) printf("%.1lf\nPerfect", avg);
    else if (avg >= 3.0) printf("%.1lf\nGood", avg);
    else if (avg < 3.0) printf("%.1lf\nPoor", avg);

    return 0;
}