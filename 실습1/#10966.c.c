#include <stdio.h>
#include <stdbool.h>

/*
입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
출력
첫째 줄부터 차례대로 별을 출력한다.
예제 입력 1 
1
예제 출력 1 
*
예제 입력 2 
2
예제 출력 2 
*
 *
*
 *
예제 입력 3 
3
예제 출력 3 
* *
 *
* *
 *
* *
 *
예제 입력 4 
4
예제 출력 4 
* *
 * *
* *
 * *
* *
 * *
* *
 * *

*/

int main(){
	
	int n,i,row,star,j,odd,even;
	scanf("%d",&n);
	
	if( n%2 == 0) star = n/2; 
	else star = n/2 + 1;
	
	for(i=0 ; i<n*2 ; i++)
	{ 
	    if( i%2 != 0 )
	    {   
		
		     printf(" ");  
		   
		    if(n%2 == 0)
		    {
		        for(j=0 ; j<star ; j++)
		        {
	 	        	printf("* ");
		        }	
			}
			 
			else
			{
				for(j=0 ; j<star-1 ; j++)
		        {
	 	        	printf("* ");
		        }	
		    }
				    	
	 	}
		
		else 
		{
	    	for(j=0 ; j<star ; j++)
		    {
	 		printf("* ");
		    }	
		}
		
		printf("\n");
	}
	
}


