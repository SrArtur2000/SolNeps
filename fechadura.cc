#include <bits/stdc++.h>

using namespace std;



int main(){
	int altura[1010];
	int n, m;
	int total = 0;
	cin>>n>>m;

	for(int i = 1 ; i <= n ; i++){
		cin>>altura[i];
	}



	for(int j = 1 ; j < n ; j++){
		if(altura[j] != m){
			if(altura[j] > m){
				total += altura[j] - m;
				altura[j+1] += m - altura[j];
				altura[j] = m;

			}if(altura[j] < m){
				total += m - altura[j];
				altura[j+1] += m - altura[j];
				altura[j] = m;
			}
		}
	}

	cout<<total<<endl;

	return 0;
}