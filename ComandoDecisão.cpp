#include <iostream>
#include <cstdlib>
using namespace std;
 
 int main() {
 	
int x, y, z;
char opc;

	inicio:

	system("cls");


cout << "digite o valor da nota 1: " ;
	cin >> x;
	
cout << "digite o valor da nota 2: ";
 	cin >> y;
 	
	z=x+y;
 	
 	/* 
	 >= 60   	  Aprovado
	 >= 40 e <60  recuperação
	 < 40    	  reprovado
	 */
 	
	if(z >= 60) {
		cout << "\n Aluno aprovado\n";
	}else if(z >= 40){
		cout << "\n Aluno em recuperaçao \n";
	}else{
		cout <<"\n Aluno reprovado \n";
	}
 	
 	cout << "\nDigitar outra notas?[s/n]: ";
 	cin >> opc;
 	
 	if(opc =='s' or opc== 'S'){
 		goto inicio;
	 }
	 
	 
	 
return 0;
 }

