#include <bits/stdc++.h>

using namespace std;

int main(){
int N;
cin>>N;
string A;
int contagem[9];

for(int a = 0 ; a < 10 ; a++){
	contagem[a] = 0;
}

for (int i = 0 ; i < N ; i++){
	cin>>A;
	for(int j = 0 ; j < A.size() ; j++){
		contagem[A[j] - '0']++;
	}	
}

for(int l = 0 ; l < 10 ; l++){
	if(l != 9){
	cout<<l<<" - "<<contagem[l]<<endl;
}else if(l == 9){
	cout<<"9"<<" - "<<contagem[9];
}
}



return 0;
}