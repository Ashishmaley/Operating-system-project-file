#include<bits/stdc++.h>
using namespace std;
struct data{
	int id;
	int bt;
	int at;
	int wt;
	int tt;
};
bool cmp(data x,data y)
{
	return (x.bt<y.bt);
}
int main()
{
	data row[20];
	int n;
	float wtavg,tatavg;
	
	cout<<"Enter the number of processes"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		row[i].id=i;
		cout<<"enter arrival time"<<endl;
		cin>>row[i].at;
		cout<<"enter burst time "<<endl;
		cin>>row[i].bt;
	}
	
	sort(row,row+n,cmp);
	
	row[0].wt=0;
	row[0].tt=row[0].bt;
	for(int i=1;i<n;i++)
	{
		
		row[i].wt=row[i-1].wt+row[i-1].bt;
		row[i].tt=row[i-1].tt+row[i].bt;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<row[i].id<<" "<<row[i].bt<<" "<<row[i].wt<<" "<<row[i].tt<<endl;
	}
	return 0;
	
}
