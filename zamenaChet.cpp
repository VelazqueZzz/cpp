#include <iostream>
using namespace std;

int main()
{      int n, i,N=10;
	int *arr = new int[N];
	for(int i = 0; i<N; i++)
		cin >> arr[i];
	for(int i = 0; i<N; i++) {
	
		if(arr[i]%2==0) {
			arr[i]= arr[N-1];
		}
		cout << arr[i]<<" ";
	
}
	return 0;
}
