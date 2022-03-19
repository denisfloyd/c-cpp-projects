#include<iostream>
#include<conio2.h>
#include<funcao.h> 
using namespace std;
main()
{
      float nota, s=0;
      int i;
      for(i=1; i<5; i++)
      {
               cout<<"\nNota["<<i<<"]: ";
               cin>>nota;
               s += nota; 
      }
      cout<<"\n\nA m\202dia \202: "<<s/5;
      cout<<"\n\n";
      linha();
      autor();
      linha();
      getch();
}
      
