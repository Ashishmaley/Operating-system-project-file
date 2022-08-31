#include<iostream>
using namespace std;

class stack{
	private:
		int stk[100],top=-1;
	public:
	
	void display(){
		cout<<"Your stack is ->  ";
		for (int i=0; i<=top; i++){
			cout<<stk[i]<<"  ";
		}
	cout<<endl;
	}	
	
	bool stkfull(){
		if(top==99){
			return true;
		}
		else
			return false;
	}
	
	bool stkempty(){
		if(top==-1)
			return true;
		else
			return false;
	}
	
	void push(int num){
		if(stkfull()){
			cout<<"=====Stack is full====="<<endl;
		}
		else{
			top++;
			stk[top]=num;
		}
	}
	
	int pop(){
		if(stkempty()){
			cout<<"-----Stack is empty------"<<endl;
		}
		else{
			return top--;
		}
	return -1;	
	}
	
};

int main(){
	int choice, number;
	stack s;
	cout<<"THIS IS STACK"<<endl;
	do{
	cout<<endl<<endl<<endl;
	cout<<"1.PUSH"<<endl;
	cout<<"2.POP"<<endl;
	cout<<"3.DISPLAY STACK"<<endl;
	cout<<"4.EXIT"<<endl;
	cin>>choice;
	
	switch(choice){
	
	case 1 : {cout<<"enter the number for push ";
				cin>>number;
			  s.push(number);
		break;
	}
	case 2 : {
		s.pop();
		break;
	}
	case 3 :{
		s.display();
		break;
	}

	default : {cout<<"wrong choice"<<endl;
		break;
	}
	}
}

while(choice!=4);
}