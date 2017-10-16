
//http://ide.geeksforgeeks.org/twNevf

#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    
  
  queue <int> st;
  queue <int> pt;
  queue <int> temp;
  int ch;
  int A[]={7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1,2};
  int n=sizeof(A)/sizeof(A[0]);
  int Q;
  cin>>Q;
  for(int i=0;i<n;i++)
  {
      if(st.size()<Q)
      {
          st.push(A[i]);
          temp=st;
          cout<<A[i]<<": ";
          while(!temp.empty())
          {
       
             cout<<temp.front()<<" ";
             temp.pop();
          }cout<<endl;
          continue;
      }
      else
      {
          while(!st.empty())
          {
              if(st.front()==A[i])
              {
                  st.pop();
              }
              else
              {
                  ch=st.front();
                  pt.push(ch);
                  st.pop();
              }
          }
      }
      
      if(pt.size()<Q )
      {
          pt.push(A[i]);
          swap(st,pt);
      }
      else
      {
          pt.pop();
          pt.push(A[i]);
          swap(st,pt);
      }
      temp=st;
      cout<<A[i]<<": ";
      while(!temp.empty())
      {
        
        cout<<temp.front()<<" ";
        temp.pop();
      }
     cout<<endl;
    
  }

 return 0;
}