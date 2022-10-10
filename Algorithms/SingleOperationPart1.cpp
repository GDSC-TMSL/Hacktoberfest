#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    long long int si;
	    cin >> si;
	    string string1;
	    cin >> string1;
	    int solution = 0;
	    
	    for(int i=0;i<string1.length();i++)
	    {
	        if(string1[i] == '0')
	        {
	            solution = i;
	            break;
	        }
	        solution = solution + 1;
	    }
	    
	    cout << solution << endl;
	}
	return 0;
}
