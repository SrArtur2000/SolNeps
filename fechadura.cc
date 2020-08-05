#include <bits/stdc++.h>

using namespace std;



int main(){
	int altura[1010];
	int n, m;
	int total = 0;
	cin>>n>>m;

	for(int i = 1 ; i <= n ; i++){
		cin>>altura[i];
	} // coloca os valores das alturas



	for(int j = 1 ; j < n ; j++){
		if(altura[j] != m){
			if(altura[j] > m){
				total += altura[j] - m;
				altura[j+1] += m - altura[j];
				altura[j] = m;
			// caso a altura seja maior que o valor desejado, adiciona a diferença pro total, abaixa a seguinte e ajusta a altura
			}if(altura[j] < m){
				total += m - altura[j];
				altura[j+1] += m - altura[j];
				altura[j] = m;
			}// similar, porém caso altura seja menor
		}
	}

	cout<<total<<endl;

	return 0;
}
