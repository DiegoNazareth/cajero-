#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;


int main(){
	char opc[4] , resp[4];
	opc[4]='s','i';
	int monto, cajero=35000,i,cincu=50,cien=100,dosc=200,retiro=0,b1,b2,b3,z,x,y;
	
	do{
		if(cajero>50){
		cout<<"\nBienvenido a hsbc";
		cout<<"\ndesea retirar"<<endl;
		cin.getline(resp,4);
		if (resp[0]=='s'){
			cout<<"\ncuanto desea retirar\n";
			cin>>retiro;
			if(retiro<=4000){
				
				if(retiro%50==0 && z<=100){
					cout<<"retiro\n";
					b3=retiro/50;
					cout<<"BILLETES DE 50 "<<b3;
					z=z+b3;	
					
				}else{
					cout<<"\nya no hay billetes de 50\n";
					cout<<"su retiro debe ser multiplo de 50 o menor de 4000 ";
					if(retiro%50==0 && x<=100){
						cout<<"BILLETES DE 50";
					}
				} 
				
				
				//cout<<"retiro\n";
				
				//cajero=cajero-cajero;
			}else {
				cout<<"su retiro debe ser multiplo de 50 o menor de 4000 ";
			}
		
		}else {
			//cout<<"\n Nose pudo concretar la operacion\n";
			cout<<"\n¡vuelve pronto!\n";
			system("pause");
			//system("cls");
		//system("pause");
		}
		//system("pause");
		//system("cls");
	}else{
		cout<<"\n No hay suficientes fondos, vuelva mas tarde\n";
		cajero=0;
	}
	}while(cajero!=0);
	
	return 0;
}
