#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int rating = 0;
	int opinion;
	for(int i=0; i<n; i++)
	{	
	    cin>>opinion; 
		rating |= opinion;
	}
	if(rating) cout<<"HARD";
	else cout<<"EASY";
 
	}
