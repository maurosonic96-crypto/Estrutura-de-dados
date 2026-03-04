# include <iostream>
# include <locale.h>




using namespace std;

int main(){
	int nota;
	cout << "Digite a sua nota: ";
	cin >> nota;
	
	if(nota >=6 ){
		cout << "Você está aprovado." << endl;
	} else {
		cout << "Você está reprovado." << endl;	
	}
	
	return 0;
}


//	int main(){
//		float nota;
//		cout << "Digite o valor da nota: "<<endl;
//		cin >> nota;
	
//		string checar_nota = (nota>=6)? "aprovada":"reprovada";
//		cout<<"A pessoa está "<<checar_nota<<endl;
	
//		return 0;
//}
