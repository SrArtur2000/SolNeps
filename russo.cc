#include <bits/stdc++.h>

using namespace std;
// Essa eu fiquei orgulhoso :D
int main(){
	int n;
	cin>>n;
	int comp = 0;
	int ordem[100100];
	int v[100100];
	int A[100100];
	int resposta;
	int contagem = 0;

	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
		A[i] = v[i];
		ordem[i] = 0;
	}// Entra com o vetor que define as alturas das bonecas na ordem que elas estão
	// Cria um vetor auxiliar A[i] para salvar a condição inicial
	sort(v, v + n); // ordena os vetores na ordem da menor para a maior

	for(int j = 0 ; j < n ; j++){
		comp = A[j] - v[j];
		if(comp != 0){
			ordem[j] = A[j];
			contagem += 1;
		}
	}// Usando o valor comp, aqui salvamos a diferença da altura da boneca na posição j depois de colocar em ordem crescente e antes
	// Caso o valor seja diferente de 0, a boneca dessa posição mudou de lugar. Logo, salva-se a altura dessa boneca no vetor ordem e aumenta a contagem em 1.

	sort(ordem, ordem + 100100); // Ordena as alturas das bonecas que tiveram que ser mudadas

	cout<<contagem<<endl; // imprime quantas mudanças tiveram que ser feitas

	for(int k = 0 ; k < 100100 ; k++){
		if(ordem[k] != 0){
			cout<<ordem[k]<<" ";
		}
	}// imprime a altura das bonecas em ordem crescente.



return 0;
}
