
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='1')
            break;
            else count++; 
        }
        cout<<count<<endl;
    }
    return 0;
}