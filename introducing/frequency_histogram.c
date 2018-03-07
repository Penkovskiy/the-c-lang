// frequency_histogram.c - Печатает гистограмму частот встречающихся символов
#include <stdio.h>

#define CHARECTER_LEN 12 // 0-9, spaces, other
int main()
{
    int lengths[CHARECTER_LEN];
    int i;
    int c;

   for (i = 0; i < CHARECTER_LEN; i++)
       lengths[i] = 0;

   // get frequency
   while ((c = getchar()) != EOF) {
       if (c >= '0' && c <= '9')
           ++lengths[c - '0'];
       else if (c == ' ' || c == '\t' || c == '\n')
           ++lengths[10];
       else
           ++lengths[11];
   }

   for (i = 0; i < CHARECTER_LEN; i++) {
       printf("\n%3d[%d]: ", i, lengths[i]);
       while (lengths[i]--) 
           putchar('-');
   }
   return 0;
}
   



