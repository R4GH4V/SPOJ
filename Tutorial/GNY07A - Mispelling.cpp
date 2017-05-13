/*
Misspelling is an art form that students seem to excel at. Write a program that removes the nth character from an input string.

Input

The first line of input contains a single integer N, (1 ≤ N ≤ 1000) which is the number of datasets that follow.

Each dataset consists of a single line of input containing M, a space, and a single word made up of uppercase letters only. M will be less than or equal to the length of the word. The length of the word is guaranteed to be less than or equal to 80.

Output

For each dataset, you should generate one line of output with the following values: The dataset number as a decimal integer (start counting at one), a space, and the misspelled word. The misspelled word is the input word with the indicated character deleted.

Example

Input:
4
4 MISSPELL
1 PROGRAMMING
7 CONTEST
3 BALLOON

Output:
1 MISPELL
2 ROGRAMMING
3 CONTES
4 BALOON

*/

#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
	// your code goes here
 
	int t,m,n,count=1;
	char s[81];
	cin>>t;
	while(t--)
	{
			cin>>m;
			cin>>s;
			cout<<count<<" ";
			n=strlen(s);
			for(int i=0;i<n;i++)
			{
				if(i!=m-1)
				cout<<s[i];
			}
			cout<<endl;
			count++;
	}
	return 0;
}
