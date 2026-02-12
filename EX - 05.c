#include <stdio.h>
struct process {
    int pid;
    int bt;
    int priority;
};
int main() {
    struct process p[10];
    int n, i, j;
    float wt = 0, tat = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter Burst Time and Priority for P%d: ", p[i].pid);
        scanf("%d %d", &p[i].bt, &p[i].priority);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (p[i].priority > p[j].priority) {
                struct process temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    int wait = 0;
    printf("\nPID\tBT\tPR\tWT\tTAT\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\n",
               p[i].pid, p[i].bt, p[i].priority, wait, wait + p[i].bt);
        wt += wait;
        tat += wait + p[i].bt;
        wait += p[i].bt;
    }
    printf("\nAverage Waiting Time = %.2f", wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", tat / n);
    return 0;
}

