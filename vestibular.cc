#include <bits/stdc++.h>

using namespace std;

int main(){
int N;
int nota = 0;
string gabarito;
string resposta;

cin>>N;
cin>>gabarito>>resposta;

for(int i = 0 ; i < gabarito.size() ; i++){
	if(gabarito[i] == resposta[i]){
		nota = nota + 1;
	}
}
cout<<nota<<endl;

return 0;
}