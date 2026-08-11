#include <stdio.h>

int main() {
    int A, B, C;
    if (scanf("%d %d %d", &A, &B, &C) != 3) {
        return 0;
    }
    if (A == B || A == C || B == C) {
        printf("S\n");
    }
    else if (A + B == C || A + C == B || B + C == A) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}