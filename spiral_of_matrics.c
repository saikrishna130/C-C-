#include <stdio.h>

int main() {
    int m,n;
	printf("enter m n: \n");
scanf("%d %d",&m,&n);
	int i=0,j=0;
	int A[m][n];
	printf("enter the numbers:");
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	        scanf("%d",&A[i][j]);
	    }
	}
	int p=n-1;
	int a=0;
	if(m>n){
		p=m-1;
	}
	while(p){
	
	        i=a;
	        for(j=a;j<n-a;j++){
	            printf("%d ",A[i][j]);
	            
	        }
	        j=n-1-a;
	        for(i=a+1;i<m-a;i++){
	            printf("%d ",A[i][j]);
	           
	        }
	        i=m-1-a;
	        for(j=n-2-a;j>=a;j--){
                printf("%d ",A[i][j]);
                
	        }
	        j=a;
	        for(i=m-2-a;i>a;i--){
	            printf("%d ",A[i][j]);
	            
	        }
	        a++;
			p--;
	}
	return 0;
}