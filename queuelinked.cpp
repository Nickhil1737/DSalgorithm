
#include<bits/stdc++.h>
using namespace std;

/***************************************ORIGINAL aUTHOR*******************************
 *************************************************************************************
 *************************************************************************************
 *************astrainL3gi0N**********************************************************/

struct Node
{
	int item;
	Node *next;
	Node(int n){
		item = n;
		next = NULL;
	}
}*front,*rear;

class queueLinked
{
	public:

	void push(int item){
		Node *x = new Node(item);
		if(front == NULL){
			front = rear = x;
			return;
		}

		rear->next = x;
		rear = x;
	}
	int pop()
	{
		if(front == NULL){
			cout<<"underflow\n";
			return -1;
		}
		int m = front -> item;
		front = front->next;
		return m;
	}
};

int main()
{

	int n;	cin>>n;
	queueLinked Q;
	for(int i = 0; i < n; ++i){
		int k;	cin>>k;
		Q.push(k);
	}
	for(int i = 00; i <= n; ++i){
		cout<<Q.pop()<<' ';
	}

	return 0;

}
