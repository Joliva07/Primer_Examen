#include <iostream>

using namespace std;

class Notas{
	protected : int nota1,nota2,nota3,nota4;
	
	protected :
		Notas(int n1, int n2, int n3, int n4){
			nota1=n1;
			nota2=n2;
			nota3=n3;
			nota4=n4;
			
		}
	
	void mostrar();	
};