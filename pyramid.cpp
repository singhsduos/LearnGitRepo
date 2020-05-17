#include <iostream>
using namespace std;


int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;//the number upto which we will find composite numbers
		for(int i=4;i<=n;i++)//1,2,3 is not composite so starting loop from 4
		{
			for(int j=2;j<i;j++)//another loop for divisiblity test.
			{
				if(i%j==0)//if the number is divisible completely by any numbers between 2 and N-1 it is composite
				{
					cout<<i;
					break;//exit loop once the number is found composite else it will print same number twice or more
				}
			}
			
		}
	cout<<"\n";
	}
	return 0;
}




