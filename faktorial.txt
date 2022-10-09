#include<iostream>
using namespace std;
int main()
{
int num, i, fact_num = 1;
cin >> num;
cout << fact_num <<endl;
for(i = 1; i <= num; ++i){
fact_num*= i;  

cout << fact_num << endl;
}
return 0;
}
