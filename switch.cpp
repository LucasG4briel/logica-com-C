#include <iostream>

using namespace std;


int main(){	
  
	int val;
	
	cout << "[1]: CARRO, [2]: MOTO, [3]: AVIAO, [4]: HELICOPTERO\n";
	cout << "\n selecione uma VEICULO: ";
	
	cin >> val;
	
	switch(val){
		
		case 1:
		case 2:
			cout << "\n transporte terrestre! \n";	
			
			switch(val){
					
					case 1:
						cout << "\n carro selecionado \n";
							break;
					case 2:
						cout << "\n moto selecionada \n";
							break;
				}
			break;
			
		case 3:
		case 4:	
			cout << "\n transporte aereo! \n";
				switch(val){
				
				
					case 3:
						cout << "\n aviao selecionado \n";
							break;
					case 4: 
						cout << "\n helicoptero selecionado! \n";	
							break;
				}
					break; 
		default:	
			cout << "\n veiculo selecionado: INVALIDO \n";	
					}
								
	
	
	cout << "\nprograma finalizado!!\n";





return 0;
	
}

//somente teste de igualdade

/*switch(expressão){
	case constante 1:
	comandos;
	break;

case constate 2;
	comando 2;
	break;
default:
comandos;

}*/
