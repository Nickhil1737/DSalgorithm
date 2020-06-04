
#include<bits/stdc++.h>
using namespace std;

/***************************************ORIGINAL aUTHOR*******************************
 *************************************************************************************
 *************************************************************************************
 *************astrainL3gi0N**********************************************************/

void merge(int *arr, int *aux, int lo , int hi, int mid){
	int i = lo;
	int j = mid +1;
	for(int k = lo ; k <= hi; ++k)	aux[k] = arr[k];
	for(int k = lo; k <= hi; ++k){
		if(i > mid)	arr[k] = aux[j++];
		else if(j > hi)	arr[k] = aux[i++];
		else if(aux[i] < aux[j]){
			arr[k] = aux[i++];
		}
		else  {
			arr[k] = aux[j++];
		}
	}
}
	
void sort(int arr[], int aux[], int lo, int hi){
	if(hi <= lo)	return;
	int mid = (hi+lo)/2;
	sort(arr,aux,lo,mid);
	sort(arr,aux,mid+1,hi);
	merge(arr,aux,lo,hi,mid);
}


int main()
{

	int n;	cin>>n;
	int arr[1000], aux[100];
	for(int i = 0; i < n; ++i)	cin>>arr[i];
	sort(arr,aux,0,n-1);

	for(int i = 0; i < n; ++i)	cout<<arr[i]<<' ';


	return 0;

}
