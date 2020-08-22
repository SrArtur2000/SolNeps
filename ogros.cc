#include <bits/stdc++.h>

using namespace std;

	int n,m;
	int faixa[10010];
	int pont[10010];
	int F[10010];


int bb(int x){

	int ini = 0, fim = n-1, meio;
	if(x >= faixa[fim]){
		return fim;
	} // Caso a força seja maior que o maior valor possivel, retorne a posição maior
	while(ini <= fim){
		meio = (ini + fim)/2;
		if(meio == fim){
			return fim; // Caso tenha chegado ao final
		}else if(meio == ini){
			return ini; // caso tenha chegado ao inicio
		}else{
			if((x < faixa[meio] and x > faixa[meio - 1]) or x == faixa[meio -1]){ 
				return meio-1;
			} // Se estiver em um intervalo, retorne a posição do menor valor do intervalo
     		if(x < faixa[meio] and x < faixa[meio - 1]){ 
    	 		fim=meio; // Caso seja menor, aproxime o fim do inicio
    	 	}
   	  		if(x > faixa[meio] and x > faixa[meio - 1]){ 
     			ini=meio; // caso sejam maior, aproxime o inicio do fim
     		}
     		if(x == faixa[meio]){
     			return meio; //Se for igual ao valor, ele estará no intervalo referente a posiço do valor
     		}
     	}

	}
}

int main(){
	cin>>n>>m; // Insere quantos intervalos e quantos participantes
	faixa[0] = 0;

	for(int i = 1 ; i < n ; i++){
		cin>>faixa[i];
	} // Insere os valores dos intervalos
	for(int j = 0 ; j < n ; j++){
		cin>>pont[j];
	} // Insere a pontuaçao referente a cada intervalo
	for(int k = 0 ; k < m ; k++){
		cin>>F[k];
	} // Insere as forças de cada participante
	for(int a = 0 ; a < m ; a++){
		cout<<pont[bb(F[a])]<<" ";	
	}// Imprime a pontuaçao de cada participante

	return 0;
}
