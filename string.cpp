#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t>0){
long n;
long long int minx,maxx,w[n],b[n],ns=0,is=0,y;

cin>>n>>minx>>maxx;
for(int i=0;i<n;i++){
	cin>>w[i];
	cin>>b[i];
}
for(int i=minx;i<=maxx;i++){
		y=i;
		for(int j=0;j<n;j++){
			y=(w[j]*y)+b[j];
		}
	
		if(y%2==0){
			ns++;
		}
		else{
			is++;
		}
}
	t--;
cout<<ns<<" "<<is<<endl;
}
return 0;
}