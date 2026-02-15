#include <stdio.h>
int main() {
    int users, files[10];
    char uname[10][20], fname[10][10][20];
    int i, j;
    printf("Enter number of users: ");
    scanf("%d", &users);
    for(i = 0; i < users; i++) {
        printf("Enter user name: ");
        scanf("%s", uname[i]);
        printf("Enter number of files for %s: ", uname[i]);
        scanf("%d", &files[i]);
        for(j = 0; j < files[i]; j++) {
            scanf("%s", fname[i][j]);
        }
    }
    printf("\nDirectory Structure:\n");

    for(i = 0; i < users; i++) {
        printf("User: %s\n", uname[i]);

        for(j = 0; j < files[i]; j++) {
            printf("  %s\n", fname[i][j]);
        }
    }

    return 0;
}

