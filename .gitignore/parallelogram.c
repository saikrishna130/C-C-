//http://ide.geeksforgeeks.org/FRkA1i

#include<stdio.h>
#include<stdlib.h>

typedef struct vetices{
    int x;
    int y;
}ver;

int main()
{
    int i,j,k=0;
    ver v[4];
    for(i=0;i<4;i++)
    {
        scanf("%d %d",&v[i].x,&v[i].y);
    }
    float sl[6];
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            sl[k]=(float)(v[j].y-v[i].y)/(v[j].x-v[i].x);k++;
        }
    }
    int p=2;
    for(i=0;i<6;i++)
    {
        int count=1;
        for(j=i+1;j<6;j++)
        {
            if(sl[i]==sl[j])
            {
                count++;
            }
        }
        if(count>2)
        {
            p=-1;
        }
        else if(count==2)
        {
            p--;
        }
    }
    if(p==0)
    {
        printf(" parallelogram\n");
    }
    else
    {
        printf(" not a parallelogram\n");
    }
}