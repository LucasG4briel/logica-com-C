#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

char palavra [30], letra [1], secreta[30];
int tam, i, chances, acertos;
bool acerto;

chances=7;
i=0;
tam=0;
acertos=0;
acertos=false;

cout << "digite a palavra secreta:";
cin >> palavra;
system("cls");


while (palavra[i] != '\0') // determina o tamanho da palavra
{
    i++;
    tam++;
}

for ( i=0;i<30;i++)
{
   secreta [i] = '-';
}
//loop principal
while ((chances>0)&&(acertos<tam))
{
    cout << "\n chances restantes:" << chances;
    cout << "\n palavra secreta:";
	for(i=0; i<tam; i++){
		cout << secreta[i];
	}

cout << "\ndigite uma letra: ";
cin >> letra[0];
	for(i=0; i<tam; i++){
		if(palavra[i]==letra[0]){
			acerto=true;
			secreta[i]=palavra[i];
			acertos++;
		}
		
		
	}

	if(!acerto)//acertos=false
	{
    chances--;
	
	}
acerto=false;
system("cls");

 
}

if(acertos>=tam){
	cout << "Parabens!\n";
}else{
	cout << "vc perdeu!";
}




return 0;
}


