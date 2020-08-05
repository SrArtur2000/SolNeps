#include <bits/stdc++.h>

using namespace std;

int main(){
int N;
cin>>N;
int v[N][N];
int l[N];
int c[N];
int smax = 0;
int comp = 0;

for(int a = 0 ; a < N ; a++){
	l[a] = 0;
	c[a] = 0;
}// Zera as somas das linhas e colunas da tabela

for(int i = 0 ; i < N ; i++){
	for(int j = 0 ; j < N ; j++){
	cin>>v[i][j];
	}	
}// coloca os valores na tabela


for(int x = 0 ; x < N ; x++){
	for(int y = 0 ; y < N ; y++){
	l[x] = l[x] + v[x][y];
	}
}// pega a soma de todas as linhas

for(int b = 0 ; b < N ; b++){
	for(int d = 0 ; d < N ; d++){
	c[b] = c[b] + v[d][b];
	}
}// pega a soma de todas as colunas


for(int q = 0 ; q < N ; q++){
	for(int w = 0 ; w < N ; w++){
	comp = l[q] + c[w] - 2*v[q][w];// Usa a variavel comp para verificar qual soma é máxima
		if(comp > smax){
			smax = comp;
		}
	}	
}

cout<<smax<<endl; // imprime o valor máximo


return 0;
}
