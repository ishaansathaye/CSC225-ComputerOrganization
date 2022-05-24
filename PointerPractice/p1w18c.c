#include <stdio.h>

int main(void)
{
   char *names[] = {"Zach", "Arman", "Camden", "Ziyi", "Jackson"};
   char student[] = "Mya";
   char **chPtrPtr = names+2;
   char *chPtr = *(names+3);

   /**** Draw Here ****/

   printf("%c%c%c", *student+'%', chPtrPtr[2][-3]-4, *(chPtr-7)+1);
   printf("%c %c", (*(names+2))[4], (*(chPtr-4))/2);
   printf(" %c%c", **(names+4)+6, *(*(names+2)+1)-'1');
   chPtr = *(--chPtrPtr)+7;
   printf("%c%c%c\n", names[3][1]+student[3], *(chPtr+4), 
                      (chPtrPtr-1)[0][0]-6);
}

