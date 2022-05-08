/*                                                  Sugarcane Juice Business                                             Problem Code: SUGARCANE

While Alice was drinking sugarcane juice, she started wondering about the following facts:

The juicer sells each glass of sugarcane juice for 50 coins.
He spends 20% of his total income on buying sugarcane.
He spends 20% of his total income on buying salt and mint leaves.
He spends 30% of his total income on shop rent.
Alice wonders, what is the juicer's profit (in coins) when he sells N glasses of sugarcane juice?

Input Format
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains an integer N, as described in the problem statement.
Output Format
For each test case, output on a new line the juicer's profit when he sells N glasses of juice.

Constraints
1≤T≤1000
1≤N≤106
Sample Input 1 
4
2
4
5
10
Sample Output 1 
30
60
75
150
Explanation
Test case 1: The total income is 50×2=100 coins. The juicer spends 20 coins on sugarcane, 20 coins on salt and mint leaves and 30 coins on rent. Thus, the profit is 100−(20+20+30)=30 coins.

Test case 2: The total income is 50×4=200 coins. The juicer spends 40 coins on sugarcane, 40 coins on salt and mint leaves and 60 coins on rent. Thus, the profit is 200−(40+40+60)=60 coins.

Test case 3: The total income is 50×5=250 coins. The juicer spends 50 coins on sugarcane, 50 coins on salt and mint leaves and 75 coins on rent. Thus, the profit is 250−(50+50+75)=75 coins.

Test case 4: The total income is 50×10=500 coins. The juicer spends 100 coins on sugarcane, 100 coins on salt and mint leaves and 150 coins on rent. Thus, the profit is 500−(100+100+150)=150 coins.
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<n*15<<endl;
    }
	return 0;
}
