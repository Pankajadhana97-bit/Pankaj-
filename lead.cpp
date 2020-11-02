#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int *pla1=new int[t];
	int *pla2=new int[t];
	for(int i=0;i<t;i++)
	{
	    cin>>pla1[i]>>pla2[i];
	}
	vector<int>player1;
	vector<int>player2;
	int sum1=0,sum2=0;
	for(int i=0;i<t;i++)
	{
	    sum1+=pla1[i];
	    sum2+=pla2[i];
	    if((sum1-sum2)<0)
	        player2.push_back(sum1-sum2);
	    else
	        player1.push_back(sum1-sum2);
	}
	delete[] pla1;
	delete[] pla2;
	
    int max1=0,max2=INT_MAX;
    for(int i=0;i<player1.size();i++)
    {
        if(player1[i]>max1)
            max1=player1[i];
    }
	for(int i=0;i<player2.size();i++)
    {
        if(player2[i]<max2)
            max2=player2[i];
    }
    max2=max2*(-1);
	if(max1>max2)
	    cout<<"1 "<<max1<<endl;
	else
	    cout<<"2 "<<max2<<endl;
	return 0;
}