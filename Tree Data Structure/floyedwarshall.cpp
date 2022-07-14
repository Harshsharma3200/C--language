#include<bits/stdc++.h>
using namespace std;
#define nv 4
#define inf 999
void printmartix(int martix[][nv]);
void floydwarshall(int graph[][nv])
{
	int martix[nv][nv],i,j,k;
	for(i=0;i<nv;i++)
		for (j = 0; j<nv; j++)
			martix[i][j]=graph[i][j];

	for(k=0;k<nv;k++)
	{
		for(i=0;i<nv;i++)
		{
			for(j=0;j<nv;j++)
				if(martix[i][k]+martix[k][j]<martix[i][j])
					martix[i][j]=martix[i][k]+martix[k][j];
		}
	}
printmartix(martix);
}

int main() 

{
	return 0;
}