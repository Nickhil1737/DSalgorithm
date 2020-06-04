
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
	Node(int it, Node *nn){
		item = it;
		next = nn;
	}
}*top;

class stac
{
	public:
		void push(int item){
			Node *x = new Node(item,top);
			top = x;
		}

		int pop(){
			if(top == NULL){
				cout<<"underflow\n";
				return -1;
			}
			int n = top->item;
			top = top->next;
			return n;
		}
};


int main()
{

	int n;	cin>>n;
	
	stac s;
	for(int i = 0; i < n; ++i){
		int k;	cin>>k;
		s.push(k);
	}
	for(int i = 0; i <= n; ++i)
		cout<<s.pop()<<' ';

	return 0;

}
