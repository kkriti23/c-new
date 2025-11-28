#include <stdio.h>

int main() {
    int a[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };
    int n = 3;
    int sumReference = 0;
    int isMagic = 1;  // 1 = true, 0 = false

    // Calculate sum of first row for reference
    for (int j = 0; j < n; j++) {
        sumReference += a[0][j];
    }

    // Check sums of rows
    for (int i = 1; i < n; i++) {
        int sumR = 0;
        for (int j = 0; j < n; j++) {
            sumR += a[i][j];
        }
        if (sumR != sumReference) {
            isMagic = 0;
            break;
        }
    }

    // Check sums of columns
    if (isMagic) {
        for (int j = 0; j < n; j++) {
            int sumC = 0;
            for (int i = 0; i < n; i++) {
                sumC += a[i][j];
            }
            if (sumC != sumReference) {
                isMagic = 0;
                break;
            }
        }
    }

    // Check diagonals
    if (isMagic) {
        int sumD1 = 0, sumD2 = 0;
        for (int i = 0; i < n; i++) {
            sumD1 += a[i][i];
            sumD2 += a[i][n - 1 - i];
        }
        if (sumD1 != sumReference || sumD2 != sumReference) {
            isMagic = 0;
        }
    }

    if (isMagic) {
        printf("Magic Square\n");
    } else {
        printf("Not Magic Square\n");
    }

    return 0;
}
