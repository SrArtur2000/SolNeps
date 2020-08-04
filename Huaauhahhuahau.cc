#include <bits/stdc++.h>

using namespace std;

int main(){
string risada;
int contagem;
int tamanho = 0;
contagem = 0;

\\ Começando as strings vazias. VD são as vogais na ordem direta e VI na ordem inversa
	
string vi = "";
string vd = "";


cin>>risada;


for(int i = 0 ; i < risada.size() ; i++){
	if(risada[i] == 'a' or risada[i] == 'e' or risada[i] == 'i' or risada[i] == 'o' or risada[i] == 'u'){
		tamanho = tamanho + 1;
		vd += risada[i];
	}
} \\ Isso é pra adicionar as vogais de risada na ordem direta, isto é, da esquerda para a direita. Salva o tamanho da string vi e vd, que é o mesmo.

for (int j = tamanho-1 ; j >= 0 ; j--){
	vi += vd[j];
} \\ Aqui para adicionar as vogais para vi, porém na ordem inversa. Lendo a risada da direita para a esquerda,

for (int k = 0 ; k < tamanho ; k++){
	if (vi[k] == vd[k]){
		contagem = contagem + 1;
	}
} \\ percorre as strings no seu tamanho e conta quantas vezes os elementos em seus respectivos espaços são iguais.


if(contagem == tamanho){
	cout<<"S"<<endl;
}else{
	cout<<"N"<<endl;
} \\ Se a contagem do passo passado for igual ao tamanho, isto é, os vetores forem iguais, imprime S

return 0;
}
