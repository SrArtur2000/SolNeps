#include <bits/stdc++.h>

using namespace std;


int soma_vetor(int n, int v[]){
	int contagem = 0;
	for(int i = 0 ; i < n ; i++){
		contagem += v[i];
	}
return contagem;
} // soma os valores do vetor

int main(){
	int n,m;
	cin>>n>>m;
	int v[1000000];
	int comp[1000000];
	int contagem = 0;

	for(int i  = 0 ; i < n ; i++){
		cin>>v[i];
		comp[i] = v[i];
	} // Recebe os metros percorridos em cada exploração
	
	if(2*v[0] > m){
		v[0] = m - v[0];
		comp[0] = v[0];
	} // Caso o primeiro valor não seja o menor possível, torne-o o menor possível

	for(int j = 1 ; j < n ; j++){

		if( (m - v[j]) >= v[j-1] and 2*v[j] >= m){
			v[j] = m - v[j];
			comp[j] = v[j];
		}else if(v[j] < v[j-1] and m - v[j] >= v[j-1]){
			v[j] = m - v[j];
			comp[j] = v[j];
		}
	} // Verifica se o valor seguinte se o menor possivel, de tal forma que n seja menor que o anterior.

	sort(comp, comp + n); // Ordena o vetor comparação

	//for(int a = 0 ; a < n ; a++){
	//	cout<<v[a]<<" "<<comp[a]<<endl;
	//}

	for(int k = 0 ; k < n ; k++){
		if(comp[k] == v[k]){
			contagem += 1;
		}
	} // Caso o vetor comparação seja igual ao vetor com as viagens, as viagens são possíveis de serem recuperadas


	if(contagem == n){
		cout<<soma_vetor(n, v)<<endl;
	}else{
		cout<<"-1"<<endl;
	}

	return 0;
}
