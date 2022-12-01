#include <iostream>
using namespace std;

int main(){
	
	int x, y, z;

//para adicionar mais condições, basta coloca os simbolos operadores lógicos (and or not)
	for (x=0, y=1, z=3; x<15; x++, y+=2, z*=3){
		
		cout << x << " - "<<  y <<" - " << z << "\n";		
		
		
	}	
			return 0;
}

/*

for(valor; condição de parada; como vai ser adicionado ou subtraido){

comandos;
cout;, cin;, etc.

}
*/
