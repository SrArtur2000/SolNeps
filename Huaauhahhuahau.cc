#include <bits/stdc++.h>

using namespace std;

int main(){
string risada;
int contagem;
int tamanho = 0;
contagem = 0;

string vi = "";
string vd = "";


cin>>risada;


for(int i = 0 ; i < risada.size() ; i++){
	if(risada[i] == 'a' or risada[i] == 'e' or risada[i] == 'i' or risada[i] == 'o' or risada[i] == 'u'){
		tamanho = tamanho + 1;
		vd += risada[i];
	}
}

for (int j = tamanho-1 ; j >= 0 ; j--){
	vi += vd[j];
}

for (int k = 0 ; k < tamanho ; k++){
	if (vi[k] == vd[k]){
		contagem = contagem + 1;
	}
}


if(contagem == tamanho){
	cout<<"S"<<endl;
}else{
	cout<<"N"<<endl;
}

return 0;
}