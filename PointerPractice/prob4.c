#include <stdio.h>

int main(void) {
    char *names[] = {"Sasi", "Daniel", "Russell", "Travis"};
    char student[] = "Alex!";
    char **chPtrPtr = &names[1];
    char *chPtr = names[2]+2;

    printf("%c %c%c", names[0][4] + 49, chPtr[2] + 3,
                      *(chPtrPtr[2] + 2) - 0x20);
    chPtr = chPtrPtr[0];
    printf("%c%c ", names[2][0] + student[5], **(++chPtrPtr - 1));
    printf("%c%c%c", *(chPtr - 3) - 3, *(*(names + 1) + 2) + 4,
                     **(chPtrPtr - 2) - 4);
    printf("%c%c\n", (*(chPtrPtr + 1))[2] + 1, student[3] - 'J');

    return 0;
}
