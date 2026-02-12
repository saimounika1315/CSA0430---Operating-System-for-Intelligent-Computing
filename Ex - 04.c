#include <stdio.h>
int main() {
    int n, i, j, bt[10], temp;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter execution time of process %d: ", i + 1);
        scanf("%d", &bt[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (bt[i] > bt[j]) {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }
    printf("\nExecution order:\n");
    for (i = 0; i < n; i++) {
        printf("Process with execution time %d\n", bt[i]);
    }
    return 0;
}

