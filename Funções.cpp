#include <iostream>


using namespace std;




void texto();

void soma(int n1, int n2);

int soma2(int n1, int n2);

void elemento(string ele[4]);

int main (){
	int res; // usado em void soma2()
	string element[4]={"agua","fogo","ar","terra"}; // usado em void elemento()


	texto();


	soma(2,5);


	
	res=soma2(177,5);
	cout << "\n" << res <<"\n";


	 elemento(element);

return 0;
	
}






void texto(){
	cout  << "\n" << "teste";
}






void soma (int n1, int n2){
	
	cout <<"\n" << n1+n2;
	
}






int soma2(int n1, int n2){
	return n1+n2;
}








void elemento(string ele[4]){
	
	for(int i=0; i<4; i++){
		
		cout << ele[i] <<"\n";
	}
}
	
	












