#include <bits/stdc++.h>

using namespace std;

int main(){
int N;
int P;
char op;
int Q;
cin>>N; // Maximo que o computador consegue expressar
cin>>P; // primeiro número a ser operacionado
cin>>op; // OPeração a ser usada
cin>>Q; // segundo numero a ser operacionado

if(op == '*'){
	if(P*Q > N){
		cout<<"OVERFLOW"<<endl;
	}else{
	cout<<"OK"<<endl;
	}
} // Caso a operação seja multiplicação, checar se P vezes Q é maior que N para ver se da overflow ou se é OK
if(op == '+'){
	if(P+Q > N){
		cout<<"OVERFLOW"<<endl;
	}else{
	cout<<"OK"<<endl;
	}
} // Caso a operação seja soma, checar se P mais Q é maior que N para ver se da overflow ou se é OK


return 0;
}
