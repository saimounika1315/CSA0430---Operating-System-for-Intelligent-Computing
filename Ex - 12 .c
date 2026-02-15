#include <stdio.h>
#define N 5
int forks[5] = {1,1,1,1,1};
void philosopher(int i) {
    if (forks[i] == 1 && forks[(i+1)%N] == 1) {
        forks[i] = 0;
        forks[(i+1)%N] = 0;
        printf("Philosopher %d is Eating\n", i);
        forks[i] = 1;
        forks[(i+1)%N] = 1;
    } else {
        printf("Philosopher %d is Waiting\n", i);
    }
}
int main() {
    int i;
    for(i = 0; i < N; i++) {
        philosopher(i);
    }
    return 0;
}

