#include <bits/stdc++.h>

using namespace std;

struct cliente{
	int inicio;
	int final;
}; // struct guardando começo e fim das consultas

bool comparacliente(cliente x, cliente y){
	return x.final < y.final;
} //ordena por ordem crescente dos finais das consultas

int main(){
	cliente pessoa[10010];
	int n;
	int total = 1;
	cin>>n;

	for(int i = 0 ; i < n ; i++){
		cin>>pessoa[i].inicio;
		cin>>pessoa[i].final;
	} // recebe os valores do vetor

	sort(pessoa, pessoa + n, comparacliente); // ordena o vetor

	for(int j = 1; j < n ; j++){
		if(pessoa[j].inicio >= pessoa[j-1].final){
			total = total + 1; // Adiciona 1 ao total caso a pessoa j seja valida para ser atendida
		}else if(pessoa[j].inicio < pessoa[j-1].final){
			pessoa[j].inicio = pessoa[j-1].inicio;
			pessoa[j].final = pessoa[j-1].final; // caso não, substitui a pessoa j no vetor pela que está sendo atendida
		}
	}

	cout<<total;

	return 0;
}
