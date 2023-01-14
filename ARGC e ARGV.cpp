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
		cout << "não identificado";
		
	}
}
	
	
//	strstring() -> serve para retornar valores de string de acordo com a comparação entre elas.
	
	
	
	return 0;
}
