# include <iostream>





using namespace std;

int main(){
	int idade;
	cout << "Digite a sua idade: ";
	cin >> idade;
	
	if(idade < 18 ){
		cout << "Você é menor de idade." << endl;
	} else {
		cout << "Você é maior de idade." << endl;	
	}
	
	return 0;
}
