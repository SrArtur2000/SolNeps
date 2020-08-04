#include <bits/stdc++.h>

using namespace std;

int main(){
int N;
cin>>N;
string A;
int contagem[9];

for(int a = 0 ; a < 10 ; a++){
	contagem[a] = 0;
} // Coloca os valores da contagem dos números de 0 até 9 em 0.

for (int i = 0 ; i < N ; i++){
	cin>>A;
	for(int j = 0 ; j < A.size() ; j++){
		if(A[j] == '0'){

			contagem[0] = contagem[0] + 1;

		}else if(A[j] == '1'){

			contagem[1] = contagem[1] + 1;

		}else if(A[j] == '2'){

			contagem[2] = contagem[2] + 1;

		}else if(A[j] == '3'){

			contagem[3] = contagem[3] + 1;

		}else if(A[j] == '4'){

			contagem[4] = contagem[4] + 1;

		}else if(A[j] == '5'){

			contagem[5] = contagem[5] + 1;

		}else if(A[j] == '6'){

			contagem[6] = contagem[6] + 1;

		}else if(A[j] == '7'){

			contagem[7] = contagem[7] + 1;

		}else if(A[j] == '8'){

			contagem[8] = contagem[8] + 1;

		}else if(A[j] == '9'){
			contagem[9] = contagem[9] + 1;
		}
	}
}// cada um desses else if ou if servem para aumentar em 1 a contagem de cada número da string 
//ao ver que a string possui esse numero em dada posição

for(int k = 0 ; k < 10 ; k++){
	if(k != 9){
	cout<<k<<" - "<<contagem[k]<<endl;
}else if(k == 9){
	cout<<"9"<<" - "<<contagem[9];
}
}



return 0;
}
