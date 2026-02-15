#include <stdio.h>
#include <string.h>

int main() {

    char files[10][20];
    int n;
    int i;   // Declare variable at top (C90 compatible)

    printf("Enter number of files: ");
    scanf("%d", &n);

    printf("Enter file names:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", files[i]);
    }

    printf("\nFiles in Directory:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", files[i]);
    }

    return 0;
}

