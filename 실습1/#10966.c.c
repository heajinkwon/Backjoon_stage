#include <stdio.h>
#include <stdbool.h>

/*
�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.
���
ù° �ٺ��� ���ʴ�� ���� ����Ѵ�.
���� �Է� 1 
1
���� ��� 1 
*
���� �Է� 2 
2
���� ��� 2 
*
 *
*
 *
���� �Է� 3 
3
���� ��� 3 
* *
 *
* *
 *
* *
 *
���� �Է� 4 
4
���� ��� 4 
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


