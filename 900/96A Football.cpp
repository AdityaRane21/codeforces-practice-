#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string a; cin>>a;
	int zero=0, one=0;
	
	for(int i=0; i<size(a); i++){
	    
		cin>>a[i];
		if(a[i] == '0') {zero++; one=0;}
		else {one++; zero=0;}
		if(one==7 || zero==7) {break;}
	}
	
	if(one==7 || zero==7) {cout<<"YES";}
	else {cout<<"NO";}
}