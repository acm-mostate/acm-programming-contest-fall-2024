/*
Problem B: I've Been Everywhere Man
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc,n,ptr=0;
    cin>>tc;
    string s;
    for(int i=0;i<tc;i++)
    {
        cin>>n;
        vector<string> hash;
        for(int j=0;j<n;j++)
        {
            cin>>s;
            bool stat=false;
            int a=0;
            while(a<hash.size()&&!stat)
            {
                if(hash[a]==s)
                {stat=true;}
                a++;
            }
            if(!stat)
            {hash.push_back(s);}
        }
        cout<<hash.size()<<"\n";
    }
    return 0;
}