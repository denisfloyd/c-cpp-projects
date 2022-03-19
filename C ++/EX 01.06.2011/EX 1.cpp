/* Uma empresa guarda em seus registros o volume de venda por ela exucutado nos
   ultimos 12 meses. O indice do vetor representa o mês, pede-se: 
   a) Em que mês a empresa obteve o pior desempenho. E qual foi a qtd vendida.
   b) Exixte um outro vetor que armazena a quantidade vendida por cada um dos
      dos vendedores da empresa, do mesmo ano, verifique se o volume vendido
      pela empresa é igual ao volume vendido pelos vendedores. Em caso afirmati-
      vo mostre: FECHAMENTO ENCERRADO COM SUCESSO, caso contrário, TOTAL EMPRESA
      NÃO CONFERE COM TOTAL VENDEDORES. 
   c) Existe um vetor nome que guarda o nome dos vendedores da empresa. Mostre
   o(s) nome(s) do(s) vendedor(es) que vendeu(ram) acima da média da empresa/
*/ 

#include<iostream> 
#include<conio2.h>
#define t 12
#define u 5
using namespace std;
main()
{
      float v[t], valor [u], s=0, s1=0, piord;
      char n[u][20];
      int i, c;
      for (i=0; i<t;i++)
      {
          cout<<"\nDigite o faturamento do m\210s\ "<<i+1<<": ";
          cin>>v[i];
          s += v[i];
      }
      clrscr();
      for(i=0; i<u; i++)
      {
               cout<<"\nDigite o nome do vendedor: ";
               cin>>n[i];
               cout<<"\nDigite o lucro do vendedor "<<n[i]<<": ";
               cin>>valor[i];
               s1 += valor[i];
               cout<<"\n\n";
      }
      i=0; c = 1; 
      piord = v[i];
      for (i=1; i<t; i++)
      {
          if(v[i]<piord)
          {
                        piord = v[i];
                        c = i+1;
          }
      }
      clrscr();
      if (s==s1)
      {
                cout<<"\nFechamento encerrado com sucesso !!";
      }
      else 
      {
           cout<<"\nTotal empresa n\306o confere com total venderores !";
      }
      for(i=0 ; i<u; i++)
      {
              if(valor[i] > s/5)
              {
                       cout<<"\n\n"<<n[i]<<" vendeu acima da m\202dia !!";
              }
      }
      cout<<"\n\nO pior desempenho foi do m\210s "<<c<<" com lucro R$ "<<piord;
      getch();
}
 
