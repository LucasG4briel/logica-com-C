#include <iostream>

using namespace std;


int main(){
	
	//TIPO NOME;
	//TIPO NOME = VALOR;
	
	int vidas=0; //10, 20, 35
	char letra='B'; //'B'
	double decimal=5.2; //2.4999, 3,5 
	float decimal2=5.2;//tem uma precisão menor, ou seja, de 1,49999 ele arrendondaria para 1,5
	bool vivo=true; //verdadeiro ou falso 
	string nome="lucas"; //"lucas","texto"
	
	cout<<"digite o numeros de vidas: ";
	cin>>vidas;
	cout<<"digite uma letra: ";
	cin>>letra;
	cout<<"dinheiro: ";
	cin>>decimal;
	cout<<"digite seu nome: ";
	cin>>nome;
	
	//vidas=100;
	
	//
	/* */
	
	
	cout << vidas << "\n";
	cout << letra << "\n";
	cout << decimal << "\n";
	cout << decimal2 << "\n";
	cout << vivo << "\n";
	cout << nome << "\n";
	
	
	
	
	return 0;
	
}


