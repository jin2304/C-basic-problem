#include <stdio.h>

int main(void)
{
	int a[11][11]={};
	int i,j;
	int x=2,y=2;
	
	
	for(i=1;i<=10;i++)
	{
	 for(j=1; j<=10;j++)
	 {
	 	scanf("%d",&a[i][j]);	
	 }	
	 
	}	

	while(a[x][y] != 2)
	{	
		a[x][y] = 9;
		
		if(a[x][y+1] != 1) y++;		
	    else if(a[x+1][y] != 1) x++;
		else break;	
	}
	a[x][y] = 9;
	
		
	for(i=1;i<=10;i++)
	{
	 for(j=1; j<=10;j++)
	 {
	 	printf("%d ",a[i][j]);	
	 }	
	 printf("\n");	
	}	
	
	
	return 0;
}
