#include <iostream>

using namespace std;



int main(){
	int n1,n2,nota;
	string res;
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	nota=n1+n2;
	
	// >=60 Aprovado
	// <60  Reprovado
	
	//(express�o) ? True : False;
	(nota >= 60) ? res="Aprovado" : res="Reprovado";
	
	cout << "\n Situa��o do aluno: "<< res << "\n";
	
	return 0;
}