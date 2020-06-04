
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
	for(int i = 0; i < n; ++i)
		cin>>arr[i];

	for(int j = 1; j < n; ++j){
		for(int i = j; i > 0; --i){
			if(arr[i] < arr[i-1]){
				int temp = arr[i];
				arr[i] = arr[i-1];
				arr[i-1] = temp;
			}
			else	break;
		}
	}

	for(int i = 0; i < n; ++i)
		cout<<arr[i]<<' ';


	return 0;

}
