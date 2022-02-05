#include<iostream>
#include<conio2.h>
using namespace std;
void funcao (char *);

main()
{
      char x[20] = "DENIS LADEIRA";
      funcao (x);
      getch();
}

void funcao (char *a)
{
       while (*a)
             printf("%c\n", *a++);
}
