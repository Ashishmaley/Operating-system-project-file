#include<iostream>
using namespace std;

class queue {
	private:
		int que[20],front=-1,rear=-1;
	public:
		void display() {
			if(qempty()) cout<<"Queue is empty";
			for(int i=front+1; i<=rear; i++) {
				cout<<que[i]<<" ";
			}
		}
		void enqueue(int number) {
			if(qfull()) {
				cout<<"Queue is full."<<endl;
			} else {
				rear++;
				que[rear]=number;
				cout<<"Element inserted"<<endl;
			}

		}
		int dequeue() {
			if(qempty()) {
				cout<<"Queue is already empty."<<endl;
				return -1;
			} else {
				front++;
				cout<<"Element removed"<<endl;
				return front;
			}

		}
		bool qfull() {
			if(front==0 && rear==19)
				return true;
			else
				return false;
		}
		bool qempty() {
			if(front>=rear)
				return true;
			else
				return false;
		}
};

int main() {
	int choice,number;
	queue q;
	cout<<"THIS IS THE DEMO OF QUEUE"<<endl;
	do {
		cout<<endl<<"Enter your choice"<<endl;
		cout<<"1.Enqueue"<<"          ";
		cout<<"2.Dequeue"<<"		";
		cout<<"3.Display"<<"		";
		cout<<"4.Exit"<<endl;
		cin>>choice;

		switch(choice) {
			case 1 : {
				cout<<"Enter number for Enqueue -->  ";
				cin>>number;
				q.enqueue(number);
				cout<<endl;
				break;
			}
			case 2 : {
				q.dequeue();
				break;
			}
			case 3 : {
				cout<<"queue is -->  ";
				q.display();
				cout<<endl;
				break;
			}
		}
	} while(choice!=4);
	cout<<"Thank you";
	return 0;
}


