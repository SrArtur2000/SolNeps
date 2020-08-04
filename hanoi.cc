#include <bits/stdc++.h>

using namespace std;

int hanoi(int N){
	if(N == 1){
		return 1;
	}else if(N == 2){
		return 3;
	}else{
		return 2*hanoi(N-1) + 1;
	}	
}// define os casos iniciais da função recursiva da solução matematica das torres de hanoi

int main(){
int n;
int v[100];
int teste = 0;
cin>>n;
while(n != 0){
	teste += 1;
	v[teste] = n;
	cin>>n;
}// adiciona, para o teste 1, quantos cilindros terão para resolver a torre de hanoi

for(int i = 1 ; i <= teste ; i++){
	cout<<"Teste "<<i<<endl<<hanoi(v[i])<<endl;
}// imprime todas as linhas de teste de uma vez

return 0;
}
