#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool eh_primo(int x){
	int contagem = 0;
	for(int i = 1 ; i < ceil(sqrt(x)) ; i++){
		if(x%i == 0){
			contagem += 1;
		}
	}
	if(contagem == 1){
		return true;
	}else{
		return false;
	}
}// Criar uma condição para averiguar se tal numero é primo. Usei a regra pegando pela raiz quadrada para cortar o tempo

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}// averigua se tal nmr é primo
