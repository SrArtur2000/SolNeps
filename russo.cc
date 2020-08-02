#include <bits/stdc++.h>

using namespace std;

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
	}
	sort(v, v + n);

	for(int j = 0 ; j < n ; j++){
		comp = A[j] - v[j];
		if(comp != 0){
			ordem[j] = A[j];
			contagem += 1;
		}
	}

	sort(ordem, ordem + 100100);

	cout<<contagem<<endl;

	for(int k = 0 ; k < 100100 ; k++){
		if(ordem[k] != 0){
			cout<<ordem[k]<<" ";
		}
	}



return 0;
}