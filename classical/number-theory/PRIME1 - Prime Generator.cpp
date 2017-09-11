Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime numbers between two given numbers!

Input

The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

Output

For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by an empty line.

Example

Input:
2
1 10
3 5

Output:
2
3
5
7

3
5


#include <iostream>
#include<cmath>
using namespace std;

void isPrime(int n)
{
    if(n>=2)
    {
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return;
	cout<<n<<endl;
    }
    return;
}


int main() {
	int t,n,m;
	cin>>t;
	
	while(t--)
	{
	    cin>>n>>m;
		for(int i=n;i<=m;i++)
	    isPrime(i);	
	}
	return 0;
}
