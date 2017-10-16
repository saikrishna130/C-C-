//http://ide.geeksforgeeks.org/ignwg5

#include<stdio.h>
#include<stdlib.h>
int eggdroping(int eggs,int floors)
{
    if(eggs==1)
    {
        return floors;
    }
    int j=1,m,k=0,l,a,i;
    int dp[eggs+1][floors+1];
    for(i=0;i<=floors;i++)
        dp[0][i]=0,dp[1][i]=i;
    for(i=0;i<=eggs;i++)
        dp[i][0]=0;
    j=1;
    while(j<=floors)
    {
        for(i=0;i<k && j<=floors;i++)
        {
            dp[2][j]=k;
            j++;
        }
        k++;
    }
    for(i=3;i<=eggs;i++)
    {
        a=1;
        j=1;
        k=0;
        while(j<=floors)
        {
            l=1;
            while(dp[i-1][l]!=a)
            {
                l++;
            }
            for(k=0;k<dp[1][l] && (j+k)<=floors;k++)
            {
                dp[i][j+k]=a;
            }
            j=j+k;
            a=a+1;
        }
    }
//uncomment the below to see the dp table
    /*for(i=0;i<=eggs;i++){
        for( j=0;j<=floors;j++){
            if(j>9 && dp[i][j]<10)
            {printf(" ");}
            
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }  printf("\n");  printf("\n");*/
    return dp[eggs][floors];
}
int main(){
    int t,n;
    scanf("%d",&t);
    n=t;
    int res[t],i=0;
    while(t--){
        int eggs,floors;
        scanf("%d %d",&eggs,&floors);
        int t=0;
        res[i]=eggdroping(eggs,floors);i++;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",res[i]);
    }
    return 0;
}