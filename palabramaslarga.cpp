#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

#define max 500

int main(){
int i,f,c,j,mayor,cambio, v ;
char frase[max], frasemayor[max/2][max];
char *p;

cout<<"introduzca una frase: " ; gets(frase) ;

for(i=0,f=0,c=0,mayor=0;frase[i]!=NULL;)
 if(frase[i]!=32)
 {while(frase[i]!=32 && frase[i]!=NULL)
  frasemayor[f][c++]=frase[i++];

  if(c>mayor){mayor=c;p=frasemayor[f];}

  frasemayor[f][c]=NULL;
  f++;c=0;
  }
 else i++;



 cout<<"la palabra mas larga es \'";
 printf("%s",p);
 cout<<"\' y tiene "<<mayor<<" letras"<<endl;

}
