#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int g[1000][1000],vis[10000],n,st[10000];
void dfs(int x)
{
    if(vis[x]==1)
        return;
    else
    {
        int i;
        vis[x]=1;
        cout<<x<<" ";
        for(i=0;i<n;i++)
        {
            if(g[x][i]==1 && vis[i]==0 )
                dfs(i);
        }
    }
}
int main()
{
    int i,j,source;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter adjacency matrix:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>g[i][j];
    }

    cout<<"Enter the source node: ";
    cin>>source;
    memset(g,0,n);
    cout<<"Graph representation is: ";
    dfs(source);

}
