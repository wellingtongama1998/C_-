#include <iostream>

using namespace std;

int num,linha,coluna;
main(){
	num=4;
	for(linha=0;coluna<=num;linha++){
		cout << "*";
		for(coluna=1;coluna<=linha;coluna++){
			cout << "*" ;
		}
		if (linha==3){
			break;
		}
		cout << endl;
	}
}