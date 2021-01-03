/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int array[10];
	int sum, n, best=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>array[i];
	}
	
	for(int i=0; i<n; i++){
		sum=0;
		for(int j=i; j<n; j++){
			sum=sum+array[j];
			best=max(best, sum);
		}
	}
	cout<<best<<endl;
	return 0;
}
