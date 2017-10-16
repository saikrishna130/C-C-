#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* reverse(char* a)
{
	int i,j,n=0;
	char temp;
	while(a[n]!='\0')
	{
		n++;
	}
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	a[n]='\0';
	return a;

}
int word(char* l,char* m,int p,int q)
{
	if(q==p)
	{
		return 0;
	}
	int i=p,j,k=0,count=0;
	while(m[k]!='\0')
	{
		k++;
	}
		for(j=0;j<=k;j++)
		{
			if(m[i]==l[j] && count<q-p+1)
			{
				count++;
				i++;
			}
			else if(count==q-p+1 && l[j]==' ')
			{
				return 1;
			}
			else if(count==q-p+1 && j==k)
			{
				return 1;
			}
			else
			{
								
				i=p;
				count=0;
				
			}
				

		}
		return 0;
	
		
}

int check(char* l,char* m)
{
	int res=0,i=0,j=0,k=0;
	while(m[k]!='\0')
	{
		k++;
	}	

	while(i<=k && j<=k)
	{
		while(m[j]!=' ' && j<k )
		{
			j++;
			
		}

		res=res+word(l,m,i,j-1);
		i=j+1;
		j++;
	}
	return res;
}

int main()
{
	char* str=(char*)calloc(sizeof(char),100);
	scanf("%[^\n]s",str);
	char* s=(char*)calloc(sizeof(char),100);
	int i;
	for(i = 0; str[i] != '\0'; ++i)
    {
        s[i] = str[i];
    }
	    s[i] = '\0';

	char* str1=(char*)calloc(sizeof(char),100);
	str1=reverse(str);
	int result=check(s,str1);
	printf("%d\n",result);
	return 0;
}