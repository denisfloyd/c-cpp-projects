#include<iostream> 
#include<conio2.h> 
#include<iomanip> 
#include<math.h> 
using namespace std;
#define pi 3.14
main() 
{      
       char senha[]="1234";
       char opcao, resp[10];
       int sair=1;
       cout<<"\tDigite a senha: ";
       gets(resp);
       while (strcmp(resp,senha)!=0)
       {
             cout<<"\nSenha Invalida, tente novamente.";
             cout<<"\n\nDigite a senha: ";
             gets(resp);
       }
       system("cls");
       textbackground(4);
       system("CLS");
       textcolor(WHITE);
       while (sair!=0)
       {
             cout<<"\n\003\004\005\006 \003\004\005\006";
             cout<<" ANALISE E DESENVOLVIMENTO DE SISTEMAS \003\004\005\006 \003\004\005\006";
             cout<<"\n\n\nEscolha uma op\207\306o\n\n";
             cout<<"0 - Sair\n\n";
             cout<<"1 - Medidas de um c\241lindro de revolu\207\306o: \n\n";
             cout<<"2 - Medidas de um cone de revolu\207\306o: \n\n";
             cout<<"3 - Medidas de uma esfera: \n\n";
             cout<<"4 - Multiplica\207\306o de n\243meros: \n\n";
             cout<<"5 - Equa\207\306o de 2o. grau: \n\n";
             cout<<"Op\207\306o: ";
             opcao=getche();
             system("cls");
             switch (opcao)
             {
                    case'0':
                    {
                            sair=0;
                            break;
                    }
                    default:{ 
                              gotoxy(10,20); 
                              cout<<"Opcao Invalida"; 
                              opcao; break; 
                    }
                    case'1':{
                             double ab, al, at, v, c, sc;
                             float r, h;
                             cout<<"\nDigite o raio da base: ";
                             cin>>r;
                             cout<<"\n\nDigite a altura: ";
                             cin>>h;
                             c = 2*pi*r;
                             ab= pi*pow(r,2);
                             al=2*pi*r*h;
                             v=pi*pow(r,2)*h;
                             at=2*ab+al;
                             sc=2*r*h;
                             cout<<"\n\n\n\n\nA circunf\210rencia da base \202: "<<c<<" cm.";
                             cout<<"\n\265rea da base \202: "<<ab<<" cm2.";
                             cout<<"\n\265rea lateral \202: "<<al<<" cm2.";
                             cout<<"\n\265rea total \202: "<<at<<" cm2.";
                             cout<<"\nVolume \202: "<<v<<" cm3.";
                             cout<<"\nSec\207\306o meridiana \202: "<<sc<<" cm2.";
                             break;
                             } 
                    case'2':{
                             double ab, al, c, at, g, v;
                             float r, h, sc;
                             cout<<"\nDigite o raio da base: ";
                             cin>>r;
                             cout<<"\nDigite a altura: ";
                             cin>>h;
                             g=sqrt(pow(h,2)+pow(r,2));
                             c=2*pi*r;
                             ab= pi*pow(r,2);
                             al=r*g*pi;
                             at=ab+al;
                             sc=r*h;
                             v=(ab*h)/3;
                             cout<<"\n\n\n\nA circunf\210rencia da base \202: "<<c<<" cm";
                             cout<<"\nA \265rea da base \202: "<<ab<<" cm2.";
                             cout<<"\nA \265rea lateral \202: "<<al<<" cm2.";
                             cout<<"\nA \265rea total \202: "<<at<<" cm2.";
                             cout<<"\nA sec\207\306o meridiana \202: "<<sc<<" cm2.";
                             cout<<"\nO Volume \202: "<<v<<" cm3.";
                             break;
                             }
                    case'3':{
                             char x;
                             double ae, v, sce;
                             float r, R, d;
                             cout<<"\nDigite o raio do esfera(R): ";
                             cin>>R;
                             ae=4*pi*pow(R,2);
                             v=(4*pi*pow(R,3))/3;
                             cout<<"\nInforme se voc\210 conhe\207e r ou d da sec\207\306o meridiana ";
                             cout<<"esf\202rica\n\nDigite 'd' para d ou 'r' para r: ";
                             x=getche();
                             if (x=='r')
                             { 
                                     cout<<"\n\nDigite o valor de r: ";
                                     cin>>r;
                                     sce = pi*pow(r,2);
                             } 
                             if (x=='d')
                             {
                                     cout<<"\n\nInforme o valor de d: ";
                                     cin>>d;
                                     r=sqrt(pow(R,2)-pow(d,2));
                                     sce = pi*pow(r,2);
                             }
                             cout<<"\n\n\n\nA \265rea da superf\241cie esf\202rica \202: "<<ae<<" cm2.";
                             cout<<"\nO Volume da esfera \202: "<<v<<" cm3.";
                             cout<<"\nSec\207\306o meridiana esf\202rica: "<<sce<<" cm2.";
                             break;
                             }
                    case'4':{
                             int n, mult=1;
                             int cont=1;
                             cout<<"\nDigite (0) para exibir o resultado.";
                             cout<<"\nInforme o "<<cont<<" n\243mero: ";
                             cin>>n;
                             while (n!=0)
                             {
                                   mult *=n;
                                   cont++;
                                   cout<<"\nInforme o "<<cont<<" n\243mero: ";
                                   cin>>n;
                             }
                             cout<<"\n\n\nA valor da multiplica\207\306o \202: "<<mult;
                             break;
                             }
                    case'5':{
                             double x1, delta, x2;
                             float a,b,c;
                             cout<<"\nDigite o valor de a: ";
                             cin>>a;
                             cout<<"\nDigite o valor de b: ";
                             cin>>b;
                             cout<<"\nDigite o valor de c: ";
                             cin>>c;
                             delta = (pow(b,2))-4*a*c;
                             x1= (-(b) + sqrt(delta))/2*a;
                             x2= (-(b) - sqrt(delta))/2*a;
                             cout<<"\n\n\n\nO valor de x1 \202: "<<x1;
                             cout<<"\nO valor de x2 \202: "<<x2;
                    }    //FIM CASE 5
             } //FIM SWITCH
       getch();
       system("cls");
       } //FIM WHILE
} //FIM MAIN                                             
