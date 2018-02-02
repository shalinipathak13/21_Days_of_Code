#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,fr=0,rear=0;
int g[10000][10000],visited[10000],q[10000];
void push(int x)
{
    q[rear]=x;
    rear++;
}
int pop()
{
    fr++;
    return q[fr-1];
}

void BFS(int x){
    push(x);
    int p,j;
    visited[x]=1;
    while(fr<rear)
    {
        p=pop();
        cout<<p<<" ";
        for(j=0;j<n;j++)
        {
            if(g[p][j]==1 && visited[j]==0)
            {
                push(j);
                visited[j]=1;
            }
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
    memset(visited,0,sizeof(visited));
    cout<<"The Breadth First Representation of graph is: ";
    BFS(source);
}
