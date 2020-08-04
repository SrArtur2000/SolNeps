#include <iostream>

using namespace std;

string title(string F){
	if(F[0] >= 'a' and F[0] <= 'z'){
		F[0] = char(F[0] - 'a' + 'A');
	}// Muda a primeira letra de minúscula para maiuscula sempre
	for(int i = 1 ; i < F.size() ; i++){
		if(F[i] == ' '){
			if(F[i+1] >= 'a' and F[i+1] <= 'z'){
			F[i+1] = char(F[i +1] - 'a' + 'A');
			}// Analise a letra depois de um espaço e a torna maiuscula
		} else if(F[i] != ' ' and F[i - 1] != ' '){
			if(F[i] >= 'A' and F[i] <= 'Z'){
				F[i] = char(F[i] - 'A' + 'a');
			}
		}// torna as letras entre os espaços, sem ser a primeira, em minusculas
	}

return F;
} 

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
