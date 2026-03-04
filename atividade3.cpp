# include <iostream>
# include <locale.h>




using namespace std;

int main(){
	int numero;
	cout << "Digite um número: ";
	cin >> numero;
	
	if (numero > 0 ){
		cout << "O número é positivo." << endl; // endl = \n
	} else if (numero < 0) {
		cout << "O número é negativo." << endl;	// endl = \n
	}else{
		cout<< "O número é zero." << endl;
		
	}
	
	return 0;
}
