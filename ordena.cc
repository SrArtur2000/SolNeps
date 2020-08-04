#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int v[100010];

	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
	}// entra com os valores do vetor
	sort(v, v+n); // ordena o vetor

	for(int j = 0 ; j < n ; j++){
		if(j != n-1){
		cout<<v[j]<<" ";
		}else if(j == n-1){
			cout<<v[j];
		}
	}// imprime o vetor. Deixando o ultimo número sem espaço no final



return 0;
}
