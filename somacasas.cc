	#include <bits/stdc++.h>

	using namespace std;

		int n,m;
		int num[100100];
		int soma;

	int bb(int x){
		int ini = 0, fim = (n-1), meio;
		while(x != num[ini] + num[fim]){
		if(num[ini] + num[fim] > x){
			fim -= 1; 
		}else if(num[ini] + num[fim] < x){
			ini += 1;
		}if(num[ini] + num[fim] == x){
			return (num[ini] - num[fim]);
		}
		}
	} //Analisa a soma do maior e menor valor das casas. Caso maior que o número desejado, aproxime o fim do inicio. 
  // Caso contrario, aproxime o final. Retorne a subtraçao dos valores


	int main(){
		cin>>n; // Diga quantas casas são
		for(int i = 0 ; i < n ; i++){
			cin>>num[i];// Diga a numeração das casas
		}
		cin>>soma;// diga a soma desejada

		cout<<(soma + bb(soma))/2<<" "<<(soma - bb(soma))/2; // Imprima o menor e o maior valor respectivamente

		return 0;
	}
