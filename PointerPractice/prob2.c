#include <stdio.h>

int main(void) {
    char *names[] = {"Carl", "David", "Gibson", "Long", "Paul"};
    char student[] = "Xydes";
    char **chPtrPtr = names + 1;
    char *chPtr = names[2] + 2;

    printf("%c %c%c", student[3] + 4, chPtr[5], *(chPtrPtr[3] + 2));
    chPtr = chPtrPtr[0];
    printf("%c %c", chPtr[2], *(*((++chPtrPtr) + 2) + 3));
    printf("%c%c", *(*names+1) + 2, *(names[1] + 1) - '4');
    printf("%c\n", (*(chPtrPtr+1))[0] - 25);

    return 0;
}
