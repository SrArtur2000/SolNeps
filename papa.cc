	#include <bits/stdc++.h>

	using namespace std;

	int n;

	struct caixa{
		int P;
		int R;
		int c[1010];
	};

	caixa C[1010];
	int contagem[1010];

	bool comparacaixa(caixa a, caixa b){
		if(a.R - a.P != b.R - b.P){
			return a.R - a.P < b.R - b.P;
		}else if(a.R - a.P == b.R - a.P){
			return a.R < b.R;
		}
	} // ordena pela capacidade - peso, depois pela resistencia. Caso empate nos dois, os pesos são consequentemente iguais

	int dp(int n){
		int peso = 0;
		for(int x = 0 ; x < n ; x++){ // Analisa a torre x partindo da caixa x
			contagem[x] = 0;
			for(int i = x ; i < n; i++){
				if(C[i].c[x] >= 0){// Caso a caixa i suporte seu peso + a do resto da torre x
				peso += C[i].P;
				contagem[x] += 1;
					for(int j = i + 1 ; j < n ; j++){ // Remova de cada caixa seguinte no vetor o peso da caixa recem adicionada
						C[j].c[x] -= C[i].P;
					}
				}
			}
		}
			sort(contagem, contagem + n); // ordena contagem
		return contagem[n-1]; // pega a maior contagem
	}



	int main(){
		cin>>n;

		for(int i = 0 ; i < n ; i++){
			cin>>C[i].P;
			cin>>C[i].R;
			for(int j = 0 ; j < n ; j++){
				C[i].c[j] = C[i].R - C[i].P;
			}
			
		}

		sort(C, C + n, comparacaixa);

		cout<<dp(n);


		return 0;
	}
