#include <iostream>
using namespace std;


int main(){

	int x;
	int vet[4];
	
/*1� indice*/	vet[0]=9;
/*2� indice*/	vet[1]=18;
/*3� indice*/	vet[2]=27;
/*4� indice*/	vet[3]=36;
//o temanho  dele � 4. n�o significa que ele vai et� o indice 4, pois tamb�m sempre come�a pelo 0(zero)
	
	
	for(x=0; x<4; x++){//a var "x" recebe o valor do primeiro vetor, depois vais adicionando os valores dos outros vetores at� a condi��o ser satisfeita !!
	
	cout << vet[x] << "\n";
}
	return 0;
	
// l� falou a respeito do "sizeof", por�m n�o entendi direito (por mais de ter visto muitas vezes, provavelmente por ele falar termos que eu n�o entendia) ,ent�o resolvi n�o colocar. 

} 
