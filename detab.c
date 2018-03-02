// detab.c - Заменяет символы табуляции необходимым числом пробелов
#include <stdio.h>

#define TAB_SIZE 4 // Размер табуляции в пробелах
#define MAXSIZE 1000 // Максимальный размер строки


// replace all tabs, reurn 1 if all good
// if to have size big then maxsize - return 0
int tab2space(char from[], char to[], int maxsize);


int getline(char line[], int maxlen);

int main()
{
    char current_line[MAXSIZE];
    char eddited_line[MAXSIZE];

    int len;


    while ((len = getline(current_line, MAXSIZE)) > 0) {
        tab2space(current_line, eddited_line, MAXSIZE);
        printf("%s", eddited_line);
        
    }

   return 0; 

}

int getline(char line[], int maxlen)
{
    int len;
    int c;

    for(len= 0; (c = getchar()) != EOF && c != '\n'; len++)
        line[len] = c;
    if (c == '\n') {
        line[len] = c;
        len++;
    }
    line[len] = '\0';
    
    return len;
}

int add_spaces(char str[], int idx);

int tab2space(char from[], char to[], int maxsize)
{
   char c;

   int i = 0;
   int j = 0;

   while ((c = from[j]) != '\0' && i < maxsize) {
       if (c == '\t') {
           i = add_spaces(to, i);
           j++;
           c = from[j];
       }
       to[i] = c;
       j++;
       i++;
   }
   to[i++] = '\n';
   to[i] = '\0';
   if (i < maxsize)
       return 1;
   return 0;
}


// return -1 if failed
// else return new empty index
int add_spaces(char str[], int idx)
{
   int i;
   
   i = 0;

   if (idx + TAB_SIZE >= MAXSIZE) 
        return 0;
   while (i < TAB_SIZE) {
        str[idx + i] = ' ';
        i++;
   }

   return idx + i;
}

