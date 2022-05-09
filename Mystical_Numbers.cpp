/*Mystical Numbers Problem Code: XORGAND
Add problem to Todo list
Submit
A number M is said to be a Mystical Number with respect to a number X if (M⊕X)>(M&X).

You are given an array A of size N. You are also given Q queries. Each query consists of three integers L, R, and X.

For each query, find the count of Mystical Numbers in the subarray A[L:R] with respect to the number X.

Notes:

⊕ represents the Bitwise XOR operation and & represents the Bitwise AND operation.
A[L:R] denotes the subarray A[L],A[L+1],…,A[R].
Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N - the size of the array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN denoting the array A.
The third line of each test case contains an integer Q - denoting the number of queries.
The ith of the next Q lines contains three space-separated integers L , R and X.
Output Format
For each testcase,

For each query, print in a new line, the count of Mystical Numbers among A[L],A[L+1],…,A[R] with respect to the number X.
Constraints
1≤T≤100
1≤N≤2⋅105
0≤Ai<231
1≤Q≤2⋅105
1≤L≤R≤N
0≤X<231
Sum of N over all test cases does not exceed 2⋅105.
Sum of Q over all test cases does not exceed 2⋅105.
Sample Input 1 
1
5
1 2 3 4 5
2
1 5 4
2 5 2
Sample Output 1 
3
2
Explanation
Test case 1:

Query 1: L=1,R=5,X=4.
A1⊕X=5,A1&X=0.
A2⊕X=6,A2&X=0.
A3⊕X=7,A3&X=0.
A4⊕X=0,A4&X=4.
A5⊕X=1,A5&X=4.
Mystical numbers are A1,A2, and A3 with respect to 4. Therefore, the answer to this query is 3.

Query 2: L=2,R=5,X=2.
A2⊕X=0,A2&X=2.
A3⊕X=1,A3&X=2.
A4⊕X=6,A4&X=0.
A5⊕X=7,A5&X=0.
Mystical numbers are A4 and A5 with respect to 2. Therefore , the answer to this query is 2.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int d[n+1][33];
	    for(int i=1;i<=n;i++)
	    {
	        int temp=a[i-1];
	        for(int j=0;j<33;j++)
	        {
	            d[i][j]=d[i-1][j];
	        }
	        int p=32;
	        if(temp!=0)
	        {
	            p=int(log(temp)/log(2));
	        }
	        d[i][p]++;
	    }
	    int q;
	    cin>>q;
	    for(int i=0;i<q;i++)
	    {
	        int s,e,x,cn,sc,pw;
	        cin>>s>>e>>x;
	       
	        pw=32;
	        cn=0;
	        if(x!=0)
	        {
	            pw=int(log(x)/log(2));
	        }
	        cn=d[e][pw]-d[s-1][pw];
	        int ans=(e-s+1)-cn;
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
