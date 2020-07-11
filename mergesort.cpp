#include<bits/stdc++.h>
using namespace std;
typedef vector <int> vi;
typedef long long ll;

void merge(int arr[], int aux[], int lo, int mid, int hi){
	for(int k = lo; k <= hi; ++k)
		aux[k] = arr[k];

	int i = lo, j = mid +1;
	for(int k = lo; k <= hi; ++k){
		if(i > mid)	arr[k] = aux[j++];
		else if(j > hi)	arr[k] = aux[i++];
		else if(aux[j] < aux[i])	arr[k] = aux[j++];
		else	arr[k] = aux[i++];
	}
	
}

void mergesort(int arr[], int aux[], int lo, int hi){
	if(hi <= lo)	return;
	int mid = lo + (hi -lo)/2;
	mergesort(arr,aux,lo,mid);
	mergesort(arr,aux,mid+1,hi);
	merge(arr,aux,lo, mid, hi);
}


int main()
{

	int n;
	cin>>n;
	int arr[10000];
	int aux[10000];
	for(int i = 0; i < n; ++i)	cin>>arr[i];

	mergesort(arr,aux,0,n-1);

	for(int i = 0; i < n; ++i)	cout<<arr[i]<<' ';
	cout<<'\n';
}
