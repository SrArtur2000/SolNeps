#include <bits/stdc++.h>

using namespace std;

struct Competidor{
	int Numero;
	int GP[110];
	int Pontuacao;
};

bool comparacompetidor(Competidor x, Competidor y){
	if(x.Pontuacao != y.Pontuacao){
		return x.Pontuacao > y.Pontuacao;
	}else{
		return x.Numero < y.Numero;
	}
}


int main(){

	int G, P, S;
	Competidor competidor[110];
	int nTestes = 0;
	int ultimo = 0;
	int pont;
	G = 1;
	P = 1;

	while(G != 0 and P != 0){
		cin>>G>>P;
		for(int k = 1 ; k <= P ; k++){
			competidor[k].Numero = k;
		}
		if(G != 0 and P != 0){
			for(int i = 1 ; i <= G ; i++){
				for(int j = 1 ; j <= P ; j++){
					cin>>competidor[j].GP[i];
				}
			}
		

			cin>>nTestes;

			for(int a = 0 ; a < nTestes ; a++){
				for(int v = 1 ; v <= P ; v++){
					competidor[v].Pontuacao = 0;
				}

				cin>>ultimo;
				for(int b = 1 ; b <= ultimo ; b++){

					cin>>pont;
					for(int c = 1 ; c <= G ; c++){

						for(int d = 1 ; d <= P ; d++){

							if(competidor[d].GP[c] == b){

							competidor[d].Pontuacao += pont;
							}
						}
					}
				}

				sort(competidor + 1 , competidor + P + 1 , comparacompetidor);

				for(int n = 1 ; n <= P ; n++){

					if(n == 1){

					cout<<competidor[1].Numero<<" ";
					}else if(competidor[n].Pontuacao == competidor[1].Pontuacao and n != 1){

					cout<<competidor[n].Numero<<" ";
					}
				}
				cout<<endl;
			}
		}
	}


	return 0;
}