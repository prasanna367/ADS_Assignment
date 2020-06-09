#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;
    cin>>a>>b;
    char ar[a][b];
    int len=0,brd=0;
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            cin>>ar[i][j];
    for(int i=0;i<a;i++)
    {for(int j=0;j<b;j++)
          if(ar[i][j]=='*')
          {int l=0;
              while(j<b)
              {
                  j++;
                  l++;
                  if(ar[i][j]=='*')
                     { len=l;
                      break;}
              }
              
          }}
      for(int i=0;i<a;i++)
      {for(int j=0;j<b;j++)
          if(ar[i][j]=='*')
          {int l=0;
              while(i<a)
              {
                  i++;
                  l++;
                  if(ar[i][j]=='*')
                     { brd=l;
                      break;}
              }
              
          }}
    int flag=0;
    
     for(int i=0;i<a;i++)
      {for(int j=0;j<b;j++)
          if(flag==0)
          {if(ar[i][j]=='*')
          {
              if(j+len<=b)
              { if(ar[i][j+len]!='*')
               { cout<<i+1<<" "<<j+len+1;
                flag=1;
                break;
               }}
              else
                   if(ar[i][j-len]!='*')
                   {cout<<i+1<<" "<<j-len+1;
                    flag=1;
                    break;}
          }}
      }
       
       if(flag==0)
       {
           for(int i=0;i<a;i++)
      {for(int j=0;j<b;j++)
          if(ar[i][j]=='*')
          {
              if(i+brd<=a)
              {if(ar[i+brd][j]!='*')
               { cout<<i+1+brd<<" "<<j+1;
                flag=1;
                break;
               }}
              else
                   if(ar[i-brd][j]!='*')
                   {cout<<i+1-brd<<" "<<j+1;
                    flag=1;
                    break;}
          }
      }  
           
       }
    
    return 0;
}
