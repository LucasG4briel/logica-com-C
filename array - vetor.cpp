#include <iostream>
using namespace std;


int main(){

	int x;
	int vet[4];
	
/*1º indice*/	vet[0]=9;
/*2º indice*/	vet[1]=18;
/*3º indice*/	vet[2]=27;
/*4º indice*/	vet[3]=36;
//o temanho  dele é 4. não significa que ele vai eté o indice 4, pois também sempre começa pelo 0(zero)
	
	
	for(x=0; x<4; x++){//a var "x" recebe o valor do primeiro vetor, depois vais adicionando os valores dos outros vetores até a condição ser satisfeita !!
	
	cout << vet[x] << "\n";
}
	return 0;
	
// lá falou a respeito do "sizeof", porém não entendi direito (por mais de ter visto muitas vezes, provavelmente por ele falar termos que eu não entendia) ,então resolvi não colocar. 

} 
