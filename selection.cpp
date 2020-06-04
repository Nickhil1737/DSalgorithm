
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
	for(int  i = 0; i < n; ++i){
		cin>>arr[i];
	}

	for(int i = 0; i < n; ++i){
		int min = i;
		for(int j = i+1; j < n; ++j){
			if(arr[i] > arr[j])	min = j;
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}

	for(int i = 0; i < n; ++i)
		cout<<arr[i]<<' ';


	return 0;

}
