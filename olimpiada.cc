#include <bits/stdc++.h>

using namespace std;

struct Pais{
	int N;
	int O;
	int P;
	int B;
};

bool comparapais(Pais a, Pais b){
	if(a.O != b.O){
  return a.O > b.O;
}else{
  	if(a.P != b.P){
  		return a.P > b.P;
  	}else if(a.B != b.B){
  		return a.B > b.B;
  	}else{
  		return a.N < b.N;
  	}
  }
 }


int main(){
	int m;
	int p;
	int medalha = 0;
	cin>>p>>m;
	Pais pais[1000];
	for(int k = 1 ; k <= p ; k++){
		pais[k].N = k;
		pais[k].P = 0;
		pais[k].O = 0;
		pais[k].B = 0;
	}


for(int j = 0 ; j < m ; j++){	

	for(int i = 1 ; i <= 3 ; i++){
		cin>>medalha;
		if(i == 1){
		pais[medalha].O += 1;
		}if(i == 2){
			pais[medalha].P += 1;		
		}if(i == 3){
			pais[medalha].B += 1;
		}
	}
}


sort(pais+1, pais + p + 1, comparapais);



for(int x = 1 ; x <= p ; x++){
	if(x != p){
		cout<<pais[x].N<<" ";
	}else{
		cout<<pais[p].N;
	}
}



return 0;
}
