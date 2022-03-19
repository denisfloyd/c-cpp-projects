/*  Com função de parêmetro */ 

#include<iostream>
#include<conio2.h>
using namespace std;
#define t 4
int verifica(int, int);
void imprime (float);
main()
{
      int i, j, r;
      float a[t][t], s=0;
      for(i=0; i<t; i++)
      {
               for(j=0; j<t; j++)
               {
                        cout<<"\n["<<i+1<<"]["<<j+1<<"]: ";
                        cin>>a[i][j];
                        r = verifica(i,j);
                        if (r==1)
                        {
                                  s += a[i][j];
                        }
               }
      }
      imprime(s);
      getch();
}

int verifica(int x, int y)
{
    if(x+y==t-1)
    {
                return 1;
    }
    else
    {
        return 0;
    }
}

void imprime(float k)
{
     cout<<"\n\nO somatorio \202: "<<k;
}
