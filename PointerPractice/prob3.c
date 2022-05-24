#include <stdio.h>

int main(void) {
    char *names[] = {"Kevin", "Jan", "Robin", "Karl", "Steve"};
    char student[] = "Ben!";
    char **chPtrPtr = &names[1];
    char *chPtr = names[2] + 2;

    printf("%c%c%c ", names[0][4] - **chPtrPtr, chPtr[4] - 22,
                      names[(int)student[4]][5] + 48);
    chPtr = chPtrPtr[0];

    printf("%c%c", *(chPtr - 3) - 3, **(++chPtrPtr + 1) + 4);
    printf("%c %c%c ", names[2][0] + student[3] - 1, *(*(names + 2) + 2) - 1,
                       *(chPtrPtr[0] + 4) - 0x20);
    printf("%c%c\n", (*(chPtrPtr + 2))[2] - 4, student[2] - 'C');

    return 0;
}


