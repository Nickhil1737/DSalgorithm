
#include<bits/stdc++.h>
using namespace std;

/***************************************ORIGINAL aUTHOR*******************************
 *************************************************************************************
 *************************************************************************************
 *************astrainL3gi0N**********************************************************/

int main()
{

	int n;	cin>>n;
	int arr[100];

	for(int i = 0; i < n; ++i)	cin>>arr[i];
	int h = 0;
	while(h < n){
		h = 3*h + 1;
	}
	h = h/3;
	cout<<h<<'\n';
	while(h > 0){
		for(int i = h; i < n; ++i){
			for(int j = i; j-h >= 0 && arr[j] < arr[j-h]; j-=h){
				int temp = arr[j];
				arr[j] = arr[j-h];
				arr[j-h] = temp;
			}
		}
		h = h/3;
	}

	for(int i = 0;i < n; ++i)
		cout<<arr[i]<<' ';

	return 0;

}
