#include <iostream>
#include <string.h>

using namespace std;
								
int main(int argc, char *argv[]){ //argc -> armazena a quantidade de argumemtos. Argv -> armazena os argumentos
				
if(argc > 1){
	if(!strcmp(argv[1],"gato"	)){
		cout << "miau!";
		
	}else if(!strcmp(argv[1], "cachorro")){
		cout << "auau!";
		
	} else{
		cout << "n�o identificado";
		
	}
}
	
	
//	strstring() -> serve para retornar valores de string de acordo com a compara��o entre elas.
	
	
	
	return 0;
}
