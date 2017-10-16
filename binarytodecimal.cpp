#include<iostream>
#include<string>
#include <stdio.h>      /* printf */
#include <math.h>  
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t)
    {
        string A;;
        cin>>A;
        int n=A.size(),num=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]=='1')
            num=num+ pow(2,n-1-i);
        }
        cout<<num<<endl;
        t--;
    }
	//code
	return 0;
}