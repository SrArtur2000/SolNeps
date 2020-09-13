	#include <bits/stdc++.h>

	using namespace std;

	int n;

	struct caixa{
		int P;
		int R;
	};

	caixa C[1010];
	int dp[1010];

	bool comparacaixa(caixa a, caixa b){
			return a.R < b.R;
		}
	} // ordena pela resistencia



	int main(){
		cin>>n;
		for(int a = 0 ; a <= n ; a++){
			pd[a] = 0x3f3f3f3f;
		}

		for(int i = 0 ; i < n ; i++){
			cin>>C[i].P;
			cin>>C[i].R;
		}

		sort(C, C + n, comparacaixa);
		pd[0] = 0;
		int maximo = 0;
		
		for(int j = 0 ; j < n ; j++){
			for(int k = n ; k >= 0 ; k--){
				if( (pd[k]+C[j].P) <= C[j].R){ // Ver se é possível colocar a caixa embaixo da torre de k caixas
					if((pd[k] + C[j].P) < pd[k+1]){ // Vê se é vantajoso colocar essa caixa em relação à torre já existente com k+1 caixas
					pd[q+1] = (pd[k] + C[j].P);
					maximo = max(maximo, q+1);
					}
				}
			}	
		}
		cout<<maximo;
		return 0;
	}
