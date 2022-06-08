#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int id;
} Student;

char *names[] = {"Ryan", "NaKul", "Jacob"};

int main() {
    
    char *more[] = {"Baylor", "Leo", "Megan"};
    Student *class;
    Student *stdPtr;
    char *curName;
    int i = 0;
    int *curID;
    char message[] = "crazy!";

    class = (Student *)malloc(sizeof(Student) * 3);
    class[i].name = names[i];
    class[i++].id = 99;
    class[i].name = names[i+1];
    class[i++].id = 10;
    class[i].name = more[i]+1;
    class[i++].id = '0';

    stdPtr = class+2;
    curName = more[1]+1;
    curID = &(class[2].id);

    message[0] = class[1].name[2];
    message[1] = curName[-4];
    message[2] = *(class[2].name-5) + class[1].id;
    message[3] = (stdPtr->name[-1]+13)/2;
    stdPtr--;
    message[4] = (*class).name[9];
    message[5] = *curID + (stdPtr[0].name[-4] - **more);

    printf("%s\n", message); /* coV-l9 */

    return 0;
}
