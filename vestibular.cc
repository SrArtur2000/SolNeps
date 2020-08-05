#include <bits/stdc++.h>

using namespace std;

int main(){
int N;
int nota = 0;
string gabarito;
string resposta;

cin>>N;
cin>>gabarito>>resposta;// adiciona o gabarito da prova e as notas

for(int i = 0 ; i < gabarito.size() ; i++){
	if(gabarito[i] == resposta[i]){
		nota = nota + 1;
	}
}// adiciona 1 para a nota cada vez que o gabarito e a resposta forem iguais
cout<<nota<<endl;// imprime nota

return 0;
}
