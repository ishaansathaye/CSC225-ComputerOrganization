#include <stdio.h>

int main(void)
{
   char *names[] = {"Dane", "Bailey", "Destin", "Archie", "Nestor"};
   char student[] = "yogi";
   char **chPtrPtr = names+2;
   char *chPtr = *(names+3);

   /**** Draw Here ****/

   printf("%c%c %c", *student-'=', chPtrPtr[2][-1]+'3', *(chPtr-5)-3);
   printf("%c%c%c", (*(names+2))[3]+1, *(chPtr+9), **names+4);
   printf(" %c %c", *(*(names+1)+3)+2, names[3][1]+student[4]-2);
   chPtr = *(--chPtrPtr)+7;
   printf("%c%c\n", (*(chPtr+3))/2-10, (chPtrPtr-1)[0][0]+12);
}

