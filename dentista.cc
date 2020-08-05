#include <bits/stdc++.h>

using namespace std;

struct cliente{
	int inicio;
	int final;
};

bool comparacliente(cliente x, cliente y){
	return x.final < y.final;
}

int main(){
	cliente pessoa[10010];
	int n;
	int total = 1;
	cin>>n;

	for(int i = 0 ; i < n ; i++){
		cin>>pessoa[i].inicio;
		cin>>pessoa[i].final;
	}

	sort(pessoa, pessoa + n, comparacliente);

	for(int j = 1; j < n ; j++){
		if(pessoa[j].inicio >= pessoa[j-1].final){
			total = total + 1;
		}else if(pessoa[j].inicio < pessoa[j-1].final){
			pessoa[j].inicio = pessoa[j-1].inicio;
			pessoa[j].final = pessoa[j-1].final;
		}
	}

	cout<<total;

	return 0;
}