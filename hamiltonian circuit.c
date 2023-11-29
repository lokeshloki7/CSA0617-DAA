#include<stdio.h>
#define MAX_VERTICES 10
int graph[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];
int i,j,n;
void initialiseGraph()
{
for(i=0;i<MAX_VERTICES;i++)
{
for(j=0;j<MAX_VERTICES;j++)
{
graph[i][j]=0;
}
visited[i]=0;
}
}
void addEdge(int u,int v)
{
graph[u][v]=1;
graph[v][u]=1;
}
int isSafe(int v,int pos,int path[])
{
if(!graph[path[pos-1]][v])
return 0;
int i;
for( i=0;i<pos;i++)
if(path[i]==v)
return 0;
return 1;
}
int hamiltonianutil(int path[],int pos)
{
if(pos==n)
{
if(graph[path[pos-1]][path[0]]==1)
return 1;
return 0;
}
int v;
for(v=1;v<n;v++)
{
if(isSafe(v,pos,path))
{
path[pos]=v;
if(hamiltonianutil(path,pos+1)==1)
return 1;
path[pos]==-1;
}
}
return 0;
}
int hamiltoniancycle()
{
int i,path[MAX_VERTICES];
for(i=0;i<MAX_VERTICES;i++)
path[i]==-1;
path[0]=0;
if(hamiltonianutil(path,1)==0)
{
printf("no hamilton cycle exists.\n");
return 0;
}
printf("hamiltonian cycle exists:");
for(i=0;i<n;i++)
printf("%d",path[i]);
printf("%d\n",path[0]);
return 1;
}
int main()
{
initialiseGraph();
int i,j;
printf("enter no of vertices:");
scanf("%d",&n);
printf("enter adjacency matrix:\n");
for( i=0;i<n;i++)
{
for( j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
if(hamiltoniancycle())
printf("hamiltonian cycle found.\n");
else
printf("no hamiltonian cycle found.\n");
return 0;
}
