
#include<bits/stdc++.h>
using namespace std;

/***************************************ORIGINAL aUTHOR*******************************
 *************************************************************************************
 *************************************************************************************
 *************astrainL3gi0N**********************************************************/

int main()
{

	int n;	cin>>n;
	int arr[1000];
	for(int i = 0; i < n;++i)	cin>>arr[i];
	for(int i = 1; i < n ;++i){
		srand(time(0));
		int randm = rand()%(i+1);
		int temp = arr[i];arr[i] = arr[randm];arr[randm] = temp;
	}

	for(int i = 0; i < n; ++i)	cout<<arr[i]<<' ';
	return 0;

}
