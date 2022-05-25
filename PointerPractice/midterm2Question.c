#include <stdio.h>

int foo(int x){
   printf("%d", x++);
   printf("%d", x+1);
   printf("%d", ++x);
   return x;
}

int main() {
   int x = 2;
   foo(x);
   foo(x);
   printf("\n");
   return 0;
}

