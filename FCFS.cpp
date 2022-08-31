#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class FCFS{
	public:
	
	void FunCompetionTime(int completiontime[],int bursttime[],int NoOfProcess){
		completiontime[0]=bursttime[0];
		for(int i=1; i<NoOfProcess; i++){
			completiontime[i]=completiontime[i-1]+bursttime[i];
		}
		
	}
	
	void FunTurnAroundTime(int completiontime[], int arrivaltime[], int turnaroundtime[], int NoOfProcess){
		for(int i=0; i<NoOfProcess; i++){
			turnaroundtime[i]=completiontime[i]-arrivaltime[i];
		}
	}
	
	void FunWaitingTime(int bursttime[], int turnaroundtime[], int waitingtime[], int NoOfProcess){
		
		for(int i=0; i<NoOfProcess; i++){
			waitingtime[i]=turnaroundtime[i] - bursttime[i];
		}
	
	}
	
};


int main(){
int NoOfProcess=5;
float avgwaiting=0.0;
int bursttime[]={4,3,1,2,5}, completiontime[NoOfProcess], turnaroundtime[NoOfProcess], waitingtime[NoOfProcess], arrivaltime[NoOfProcess]={0,1,2,3,4};
	
	FCFS table1;
	table1.FunCompetionTime(completiontime, bursttime, NoOfProcess);
	table1.FunTurnAroundTime(completiontime, arrivaltime, turnaroundtime, NoOfProcess);
	table1.FunWaitingTime(bursttime, turnaroundtime, waitingtime, NoOfProcess);

	cout<<"ID"<<"|"<<"Arrival"<<"|"<<"Burst"<<"|"<<"completion"<<"|"<<"turnaround"<<"|"<<"waiting"<<endl;

	for(int i=0; i<NoOfProcess; i++){
		cout<<i<<" |";
		cout<<setw(2)<<setfill('0')<<arrivaltime[i]<<"     |";
		cout<<setw(2)<<setfill('0')<<bursttime[i]<<"   |";
		cout<<setw(2)<<setfill('0')<<completiontime[i]<<"        |";
		cout<<setw(2)<<setfill('0')<<turnaroundtime[i]<<"        |";
		cout<<setw(2)<<setfill('0')<<waitingtime[i]<<endl;
	}


	for(int i=0; i<NoOfProcess; i++){
		avgwaiting = avgwaiting + waitingtime[i];
	}

	cout<<endl<<"average waiting time = "<<avgwaiting/NoOfProcess;	
		


return 0;	
}
