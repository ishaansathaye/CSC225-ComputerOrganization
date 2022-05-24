#include <stdio.h>

int main(void)
{
   char *names[] = {"Terry", "Eric", "Joulien", "Justin", "Yusuf"};
   char student[] = "Ryan";
   char **chPtrPtr = names+2;
   char *chPtr = *(names+3);

   /**** Draw Here ****/

   printf("%c%c%c", *(student+1)-'2', (*(names+2))[4], chPtrPtr[2][-4]);
   printf(" %c%c", *(chPtr-7)+1, **(names+4)-4);
   printf("%c%c ", *(chPtr-5), *(*(names+2)+3));
   chPtr = *(--chPtrPtr)+7;
   printf("%c%c %c\n", names[0][5]+student[2], *(chPtr+4), 
                      (chPtrPtr+1)[0][0]-9);
}



