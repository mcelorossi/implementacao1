#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){
	cout<<"=== AFD ==="; 
	cout<<endl<<endl;
	
	int i,j,achou = 0;
	string fita; //Cadeia de entrada
	int atual,final;     
	
	//Matriz est�tica
	char m[3][3]={{'a', 'b', 'v'},
			      {'a', 'v', 'b'},
				  {'v', 'b', 'a'}};
						
	atual = 0; //Estado inicial
	final = 1; //Estado final
	
	//Cadeia de entrada  
	cout<<"Informe a entrada (a ou b): " ;
	cin>>fita;
	
	for (int p=0; p<fita.length(); p++){ // La�o para percorrer a cadeia e ver se tem algum elemento que n�o perten�a a linguagem (a ou b)
		if (fita[p]!='a' && fita[p]!='b'){
			cout<<"CADEIA NAO RECONHECIDA"<<endl;
			return 0;
		}
	}
	
	cout<<endl<<"Entrada: "<<fita; //Exibir cadeia
 
  i=0;//Contador
  while(fita[i] != '\0')
  {
                   achou = 0;
                   for(j=0;j<3;j++) //Percorrendo a matriz
                   {
                     if( m[atual][j]==fita [i]) //Se o elemento da matriz for igual ao da entrada
                     {
                       atual=j; //Atual recebe a posi��o da matriz
                       i++; //Incrementa 1 ao �ndice da entrada(passa para o valor seguinte) 
                       j=3; 
                       achou =1;
                     }
                            
                   }
                   if(achou == 0  )
                   {
                         i='\0'; //Se a vari�vel "achou" for igual a zero � pq a entrada � nula.
                   } 
  }
  if(atual==final) //Condicional para determinar se o �ltimo elemento � igual ao estado final
  {
    cout<<endl<<"A CADEIA FOI RECONHECIDA!\n";
                   
  }
  else
  {
      cout<<endl<<"\nA CADEIA NAO FOI RECONHECIDA!\n";
  }
}
