
#include<bits/stdc++.h>
using namespace std;

/***************************************ORIGINAL aUTHOR*******************************
 *************************************************************************************
 *************************************************************************************
 *************astrainL3gi0N**********************************************************/

class stac
{
	int *S;
	int n;
	int top = -1;
	public:

	stac(int n){
		S = new int[n];
		this->n = n;
	}

	void push(int item){
		if( top >= n-1){
			cout<<"overflow\n";
			return;
		}
		S[++top] = item;
	}
	int pop(){
		if(top == -1){
			cout<<"underflow\n";
			return -1;
		}
		return S[top--];
	}
};

int main()
{

	int n;	cin>>n;
	stac S(n); 

	for(int i = 0; i <= n; ++i){
		int k;	cin>>k;
		S.push(k);
	}
	for(int i = 0; i <= n; ++i)
		cout<<S.pop()<<' ' ;


	return 0;

}
