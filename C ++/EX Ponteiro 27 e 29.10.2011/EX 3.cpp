#include<iostream> 
#include<conio2.h> 
#define t 5
using namespace std;
main()
{
      int i;
      float *pvetor, a[t];
      for(i=0; i<t; i++)
      {
               cout<<"\n["<<i+1<<"]: ";
               cin>>a[i];
      }
      cout<<"\n\nOs Valores digitados e seus endere\207os de memoria: ";
      cout<<"\n\n";
      for(i=0; i<t; i++)
      {
               pvetor = &a[i];
               cout<<*pvetor<<"   -   "<<pvetor<<endl;
      }
      getch();
}

      
