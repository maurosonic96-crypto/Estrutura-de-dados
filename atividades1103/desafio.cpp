#include <iostream>

using namespace std;

int main(){
	
	int num[6],menor,maior;
	
	
	cout<<"Insira seis valores"<<endl;
	
	for(int i=0;i < 6 ;i++){
		
		cin>>num[i];
		
		if(i==0){
			menor=num[i];
			maior=num[i];
		}
		if(num[i]<menor){
			menor=num[i];
			
		}
		if(num[i]>maior){
			maior=num[i];
		}	
	
	}
	
	cout<<"Maior valor: "<<maior<<endl;
	cout<<"Menor valor: "<<menor<<endl;

	return 0;		
}
