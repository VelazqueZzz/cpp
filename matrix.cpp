#include <iostream>
using namespace std;

int main()
{
const int n=3;
const int m=3;
//int s = 0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
for (int i=0 ;i < n ;i++){
    for (int j=0 ; j < m ; j++){
       
    
    }
}	
     for (int i=0; i<n; i++){
       for (int j=0; j<m; j++){
             cin >> a [i][j]; 
			 if(a[i][j] % 2 != 0){
                a[i][j]=0;}
        } 
	  } 

for (int i=0; i<n; i++){
       for (int j=0; j<m; j++){
       	cout << a[i][j]<< " ";
       	
}
cout << endl;
}
cout << endl;
       
    return 0;
}
