
#include <iostream>

using namespace std;

int n1,n2,res=0,i;

int main(){
	cout << "Digite n1: ";
	cin >> n1;
	cout << "Digite n2: ";
	cin >> n2;
	
	
	for(i=0;i<n1;i++){
		res+=n2;
	}
	cout << res;
	
	return 0;
}