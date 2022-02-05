#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      int i, k, j;
      cout<<"\nSinal interno direito: ";
      char sd = getche();
      cout<<"\nSinal interno esquerdo: ";
      char se = getche();
      cout<<"\n\n";
      
      textcolor(GREEN);
      for(i=0; i<4; i++)
      {
           for(k=1; k<5; k++)
           {       
                for(j=1; j<=40-(2*i+k); j++)
                     cout<<" ";
                     cout<<"/";
                     for(j=1; j<(2*i+k); j++)cout<<se;
                     for(j=1; j<(2*i+k); j++)cout<<sd;
                     cout<<"\\\n";
           }
      }
      
      for(i=0; i<2; i++)
      {
               for(j=0; j<38; j++) cout<<" ";
               cout<<"| |\n";
      }
      
      textcolor(WHITE);
      cout<<"\n";
      for(j=0; j < 35; j++)
      cout<<" ";
      cout<<"FELIZ NATAL\n";
      for(j=0; j < 31; j++)
      cout<<" ";
      cout<<"E UM PROSPERO 2016!";;
      
      getch();
}
