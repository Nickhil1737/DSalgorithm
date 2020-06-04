
#include<bits/stdc++.h>
using namespace std;

/***************************************ORIGINAL aUTHOR*******************************
 *************************************************************************************
 *************************************************************************************
 *************astrainL3gi0N**********************************************************/

class queueArr
{
	int *Q;
	int N;
	int front = -1, rear = -1;
	public:
	queueArr(int max_size){
		Q = new int[max_size];
		N = max_size;
	}

	void enqueue(int item){
		if(front  == -1){
			Q[++front] = item;
			rear = front;
		}
		else if(rear >= N-1){
			//resize
			resize(N*2);
			Q[++rear] = item;
				
		}
		else Q[++rear] = item;
	}
	int dequeue(){
		int m;
		if(front == -1){
			cout<<"underflow\n";
			m = -1;
		}
		else if(front == rear){
			m = Q[front];
			front = rear = -1;
		}
		else
			m = Q[front++];
		return m;
	}
	void resize(int n){
		int *arr = new int[N];
		for(int i = 0; i < N; ++i)	arr[i] = Q[i];
		Q = new int[2*N];
		for(int i = 0; i < N; ++i)	Q[i] = arr[i];

		this->N = n;
	}
	void printArr(){
		cout<<'\n';
		for(int i = 0; i < N; ++i)
			cout<<Q[i]<<' ';
		cout<<'\n';
	}
};

int main()
{

	int n;	cin>>n;
	queueArr que(n);

	for(int i = 0; i <= n; ++i){
		int k;	cin>>k;
		que.enqueue(k);
	}
	for(int i = 0; i <= n; ++i){
		cout<<que.dequeue()<<' ';
	}

	return 0;

}
