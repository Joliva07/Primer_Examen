#include <iostream>
#include "Notas.cpp"

using namespace std;

class Estudiante : Notas{
	int prom;
	private : string codigo,nombres,apellidos,cursos;
				
	
	public : 
	Estudiante(string cod, string nom, string ape, string cur, int n1, int n2, int n3, int n4) : Notas(n1,n2,n3,n4){
		codigo=cod;
		nombres=nom;
		apellidos=ape;
		cursos=cur;
		
	}
	
	void mostra(){	
		cout<<"\n------------Datos de "<<nombres<<" "<<apellidos<<"------------\n";
		cout<<"Codigo: "<<codigo<<"\nNombres: "<<nombres<<"\nApellidos: "<<apellidos<<"\nCurso: "<<cursos<<"\nPrimera nota: "<<nota1<<"\nSegunda nota: "<<nota2<<"\nTercera nota: "<<nota3<<"\nCuarta nota: "<<nota4;
		
	}
};



