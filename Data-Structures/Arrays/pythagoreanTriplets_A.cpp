#include<iostream>

using namespace std;

void printPythagoreanTriplets(int N)
{
	int a,b,c=0;
	int m=2;
	while(c<N)
	{
		for(int i=1 ; i<m ; ++i)
		{
			a=m*m - i*i;
			b=2*m*i;
			c=m*m + i*i;

			if(c>N)
			    break;

			cout<<"Pythagorean triplet : "<<a<<" "<<b<<" "<<c<<endl;
		}
		++m;
	}
}

int main()
{
	int N;
	cout<<"Enter limit :- ";
	cin>>N;
	printPythagoreanTriplets(N);
	return 0;
}
