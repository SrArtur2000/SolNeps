#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int v[100010];

	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
	}
	sort(v, v+n);

	for(int j = 0 ; j < n ; j++){
		if(j != n-1){
		cout<<v[j]<<" ";
		}else if(j == n-1){
			cout<<v[j];
		}
	}



return 0;
}