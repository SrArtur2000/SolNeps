#include <bits/stdc++.h>

using namespace std;

struct Competidor{
	int Numero;
	int GP[110];
	int Pontuacao;
}; // Numero é a numeração de cada competidor, GP[i] é a posição de tal competidor em dado GP. 
	//Pontuação é quanto tal posição vale de ponto pra cada conjunto de regras

bool comparacompetidor(Competidor x, Competidor y){
	if(x.Pontuacao != y.Pontuacao){
		return x.Pontuacao > y.Pontuacao;
	}else{
		return x.Numero < y.Numero;
	}
} //Ordenando os vetores primeiro por ordem de pontuação e depois por ordem na numeração


int main(){

	int G, P, S;
	Competidor competidor[110];
	int nTestes = 0;
	int ultimo = 0;
	int pont;
	G = 1;
	P = 1; // só para entrar no while sem problema

	while(G != 0 and P != 0){
		cin>>G>>P;
		for(int k = 1 ; k <= P ; k++){
			competidor[k].Numero = k;
		} // define a numeração de cada competidor
		if(G != 0 and P != 0){
			for(int i = 1 ; i <= G ; i++){
				for(int j = 1 ; j <= P ; j++){
					cin>>competidor[j].GP[i];
				}
			} // define a posição de cada competidor para cada GP.
		

			cin>>nTestes; // define quantos sistemas de pontuação existirão para dado conjunto teste

			for(int a = 0 ; a < nTestes ; a++){
				for(int v = 1 ; v <= P ; v++){
					competidor[v].Pontuacao = 0;
				} // Inicia a pontuação de cada competidor no 0 para cada sistema de regras

				cin>>ultimo; // Coloca o valor do ultimo colocado a receber ponto
				for(int b = 1 ; b <= ultimo ; b++){

					cin>>pont; 
					for(int c = 1 ; c <= G ; c++){

						for(int d = 1 ; d <= P ; d++){

							if(competidor[d].GP[c] == b){

							competidor[d].Pontuacao += pont;
							}
						}// averigua qual competidor ficou na posição b
					}
				}

				sort(competidor + 1 , competidor + P + 1 , comparacompetidor); // ordena o vetor

				for(int n = 1 ; n <= P ; n++){

					if(n == 1){

					cout<<competidor[1].Numero<<" ";
					}else if(competidor[n].Pontuacao == competidor[1].Pontuacao and n != 1){

					cout<<competidor[n].Numero<<" ";
					}
				} // imprime sempre o primeiro colocado. Caso tenha algum outro competidor empatado com o primeiro, imprime eles em ordem
				cout<<endl;
			}
		}
	}


	return 0;
}
