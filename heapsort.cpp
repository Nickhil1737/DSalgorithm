

#include<bits/stdc++.h>
using namespace std;

/***************************************ORIGINAL aUTHOR*******************************
 *************************************************************************************
 *************************************************************************************
 *************astrainL3gi0N**********************************************************/

int n;
void swim(int arr[], int k){
	while(k > 0){
		if(arr[k] > arr[k/2]){
			int temp = arr[k];arr[k] = arr[k/2]; arr[k/2] =  temp;
		}
		else	break;
		k = k/2;
	}
}
void sink(int arr[],int k = 1){
	while(k <= n/2){
		int j = 2*k;
		j = arr[j] > arr[j+1]? j:j+1;
		if(arr[k] < arr[j]){
		int temp = arr[k];arr[k] = arr[j];arr[j] = temp;
		}
		else	break;

		k = j;
	}
}
void delheap(int arr[]){
	int val = arr[1];
	arr[1] = arr[n--];
	sink(arr);
	arr[n+1] = val;
}

int main()
{

	cin>>n;
	int arr[1000];
	for(int i = 1; i <= n; ++i){
		cin>>arr[i];
		swim(arr,i);//insertion in heap
	}
	int N = n;
	for(int i = 1; i <= N; ++i){
		delheap(arr);
	}
	for(int i = 1; i <= N; ++i)
		cout<<arr[i]<<' ';

	return 0;

}
