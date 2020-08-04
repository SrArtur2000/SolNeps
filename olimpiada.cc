#include <bits/stdc++.h>

using namespace std;

struct Pais{
	int N; // Numeração do país
	int O; // Medalhas de ouro do país
	int P; // Medalhas de Prata do país
	int B; // Medalhas de Bronze do país
};

bool comparapais(Pais a, Pais b){
	if(a.O != b.O){
  return a.O > b.O;
}else{
  	if(a.P != b.P){
  		return a.P > b.P;
  	}else if(a.B != b.B){
  		return a.B > b.B;
  	}else{
  		return a.N < b.N;
  	}
  }
 }//Ordena o vetor, priorizando medalhas de ouro, depois medalhas de prata, depois medalhas de bronze, depois a ordem crescente da numeração


int main(){
	int m;
	int p;
	int medalha = 0;
	cin>>p>>m; // Entra com o número de países e de modalidades
	Pais pais[1000];
	for(int k = 1 ; k <= p ; k++){
		pais[k].N = k;
		pais[k].P = 0;
		pais[k].O = 0;
		pais[k].B = 0;
	} // Inicia cada país sem medalhas


for(int j = 0 ; j < m ; j++){	

	for(int i = 1 ; i <= 3 ; i++){
		cin>>medalha;
		if(i == 1){
		pais[medalha].O += 1;
		}if(i == 2){
			pais[medalha].P += 1;		
		}if(i == 3){
			pais[medalha].B += 1;
		}
	}// Entra com os países que receberam as medalhas. Sempre a primeira é a de ouro, depois prata, depois bronze. 
}


sort(pais+1, pais + p + 1, comparapais); // ordena o vetor



for(int x = 1 ; x <= p ; x++){
	if(x != p){
		cout<<pais[x].N<<" ";
	}else{
		cout<<pais[p].N;
	}
}// imprime as numerações dos países ganhadores



return 0;
}
