#include <bits/stdc++.h>

using namespace std;

int main(){
int N;
cin>>N;
string A;
int contagem[9];

for(int a = 0 ; a < 10 ; a++){
	contagem[a] = 0;
}// começa a contagem em 0

for (int i = 0 ; i < N ; i++){
	cin>>A;
	for(int j = 0 ; j < A.size() ; j++){
		contagem[A[j] - '0']++;
	}	
}// Como A[j] é uma string, subtraí-la de um valor decimal da tabela ASCII faz a contagem trata-la como um inteiro.
// Subtraindo por 0, A[j] - '0' vai ter valores entre 0 e 9. 
//Sendo assim, essa linha soma 1 para a contagem[(Insira numero entre 0 e 9 aqui)] baseado no valor que A[j] tem na string

for(int l = 0 ; l < 10 ; l++){
	if(l != 9){
	cout<<l<<" - "<<contagem[l]<<endl;
}else if(l == 9){
	cout<<"9"<<" - "<<contagem[9];
}
}// imprime tudo, deixando o ultimo sem dar end line;



return 0;
}
