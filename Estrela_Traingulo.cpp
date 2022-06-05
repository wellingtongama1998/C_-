#include <iostream>

using namespace std;

int num,linha,coluna,x=1;
main(){
	cout << "Digite um número: ";
	cin >> num;
	for(linha=1;coluna<=num;linha++){
		cout << "*";
		for(coluna=1;coluna<=linha;coluna++){
			cout << "*" ;
		}
		cout << endl;
	}
}