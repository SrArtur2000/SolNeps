#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int soma_vetor(int n, int v[]){
	int contagem = 0;
	for(int i = 0 ; i < n ; i++){
		contagem += v[i];
	}
return contagem;
}/ Função que pega a soma dos valores adicionados em um vetor;

int main(){
	
	int n, v[100100];
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	cout << soma_vetor(n,v) << "\n";
}// imprime a soma do vetor.
