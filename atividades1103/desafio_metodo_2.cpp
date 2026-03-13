#include <iostream>

using namespace std;

int main(){
	
	int num[6],menor,maior;
	
	
	cout<<"Insira seis valores"<<endl;
	
	for(int i=0;i < 6 ;i++){
		
		cin>>num[i];
	}
		
	for(int i=0;i < 1 ;i++){
		
		menor=num[i];
		maior=num[i];
	}
	
	for(int i=0;i < 6 ;i++){

		if(num[i]>maior){
			maior=num[i];
		}
		if(num[i]<menor){
			menor=num[i];
			
		}		
	
	}
	
	cout<<"Maior valor: "<<maior<<endl;
	cout<<"Menor valor: "<<menor<<endl;

	return 0;		
}
