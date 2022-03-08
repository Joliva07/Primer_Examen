#include "Estudiante.cpp"
#include <iostream>

using namespace std;

main(){
	string codigo, nombres, apellidos, curso;
	int n1=0, n2=0, n3=0, n4=0, prom=0, nEst=0;
	cout<<"Ingrese la cantidad de estudiantes que desea ingresar: ";
	cin>>nEst;
	system("cls");
	
	for(int i=nEst;i>0;i--){
		cout<<"------------INGRESO DE DATOS------------\n";
		cout<<"Ingrese codigo: ";
		cin>>codigo;
		cin.ignore();
		cout<<"Ingrese nombres: ";
		getline(cin,nombres);
		//cin.ignore();
		cout<<"Ingrese apellidos: ";
		getline(cin,apellidos);
		cout<<"Curso: ";
		cin>>curso;
		cout<<"Ingrese primera nota: ";
		cin>>n1;
		cout<<"Ingrese segunda nota: ";
		cin>>n2;
		cout<<"Ingrese tercera nota: ";
		cin>>n3;
		cout<<"Ingrese cuarta nota: ";
		cin>>n4;
		Estudiante obj=Estudiante(codigo,nombres,apellidos,curso,n1,n2,n3,n4);
		obj.mostra();
		
		prom=(n1+n2+n3+n4)/4;
		if(prom>60){
			cout<<"\nEl estudiante "<<nombres<<" "<<apellidos<<" ha aprobado, promedio de: "<<prom;
		}else{
			cout<<"\nEl estudiante "<<nombres<<" "<<apellidos<<" no ha aprobado, promedio de: "<<prom;
		}
		cout<<"\n____________________________________________\n\n";
	}
	
	system("pause");
	
	
}