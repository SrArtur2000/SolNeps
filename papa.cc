	#include <bits/stdc++.h>

	using namespace std;

	int n;

	struct caixa{
		int P;
		int R;
		int c;
	};

	caixa C[1010];

	bool comparacaixa(caixa a, caixa b){
		if(a.R != b.R){
			return a.R < b.R;
		}else if(a.R == b.R){
			return a.P < b.P;
		}
	} // ordena pelas menores resistencias. Caso empate, pelas menores massas

	int dp(int n){
		int contagem = 0;
		int peso = 0;

		for(int i = 0 ; i < n; i++){
			sort(C + i, C + n, comparacaixa);
			if(C[i].c >= 0){ // Se a capacidade atual é maior q 0, a caixa entra no topo da torre
			peso += C[i].P; // O peso da torre recebe o valor da caixa que entrou
			contagem += 1; // aumenta a contagem da torre
			for(int j = i + 1 ; j < n ; j++){
				C[j].c -= C[i].P; // todas as possiveis caixas para irem embaixo da caixa do topo perdem capacidade igual ao peso da caixa
			}
			}
		}

		return contagem;
	}



	int main(){
		cin>>n;

		for(int i = 0 ; i < n ; i++){
			cin>>C[i].P;
			cin>>C[i].R;
			C[i].c = C[i].R - C[i].P;
		}

		//for(int b = 0 ; b < n ; b++){
		//	cout<<C[b].P<<" "<<C[b].R<<"\n";
		//}

		//for(int a = 0 ; a < n ; a++){
		//	cout<<C[a].P<<" "<<C[a].R<<"\n";
		//}

		cout<<dp(n)<<"\n";


		return 0;
	}
