# include <iostream>
# include <locale.h>

using namespace std;

//int main(){
//	int numero;
//	cout << "Digite um número: ";
//	cin >> numero;
	
//	string valor = (numero%2==0)? "par":"ímpar";
//	cout<<"O número "<<numero<<"é"<<paridade<<endl;
	
//	return 0;
//}

int main(){
	int idade;
	cout << "Digite a idade de uma pessoa: "<<endl;
	cin >> idade;
	
	string checar_idade = (idade>=18)? "maior de idade":"menor de idade";
	cout<<"A pessoa é "<<checar_idade<<endl;
	
	return 0;
}
