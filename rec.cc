	#include <bits/stdc++.h>

	using namespace std;

		int n, k, m;
		int a[1010];
		int f[1010];


	int rec(int k){
		for(int i = n; i < k ; i++){
			for(int j = 0; j < n; j++){
				f[i] += (a[j]*f[i-j-1]);
			}
			if(f[i] >= m){
				f[i] = f[i]%m;
			}
		}
		return f[k-1];
	} // Faz a soma da recursão genérica


	int main(){
		cin>>n>>k>>m; // insere quantos valores base e quantos coeficientes, o valor que vc quer da recursao e qual a base

		for(int i = 0 ; i < n ; i++){
			cin>>a[i];
		} // coeficientes

		for(int j = 0 ; j < n ; j++){
			cin>>f[j];
		} // valores base

		cout<<rec(k); // valor k da recursão

		return 0;
	}
