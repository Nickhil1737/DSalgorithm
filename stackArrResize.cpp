
#include<bits/stdc++.h>
using namespace std;

/***************************************ORIGINAL aUTHOR*******************************
 *************************************************************************************
 *************************************************************************************
 *************astrainL3gi0N**********************************************************/

class stackarr
{
	int N;
	int *S;
	int top = -1;

	public:
	stackarr(int n){
		this->N = n;
		S = new int[n];
	}

	void push(int item){
		if(top >= N-1)	resize(2*N);
		S[++top] = item;
	}
	int pop(){
		if(top == -1){
			cout<<"underflow\n";
			return -1;
		}
		if(top < N/2)	resize(N/2);

		return S[top--];
	}
	void resize(int l){
		int *arr = new int [N];
		for(int i = 0; i < N; ++i)
			arr[i] = S[i];
		S = new int[l];
		for(int i = 0; i < l; ++i)
			S[i] = arr[i];
		this->N = l;
	}
};

int main()
{

	int n;	cin>>n;
	stackarr st(n);
	for(int i = 0; i <= n; ++i){
		int k;	cin>>k;
		st.push(k);
	}
	for(int i = 0; i <= n; ++i)
		cout<<st.pop()<<' ';


	return 0;

}
