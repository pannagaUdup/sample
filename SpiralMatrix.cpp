//SpiralMatrix
#include <iostream>
#include<vector>
using namespace std;

int main()
{
     int a[5][5];
     cout<<"enter no of rows and cols"<<endl;
     int i,j,p,q;
     cin>>p>>q;
     for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            cin>>a[i][j];
     for(i=0;i<p;i++){
        for(j=0;j<q;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
     }
     cout<<"spiral output is"<<endl;
     int t=0,b=p-1,l=0,r=q-1;
      while(t<=b&&l<=r)
      {
          for(i=l;i<=r;i++)
            cout<<a[t][i]<<" ";
          t++;
          for(i=t;i<=b;i++)
            cout<<a[i][r]<<" ";
          r--;
          if(t<=b)
          {
                for(i=r;i>=l;i--)
            cout<<a[b][i]<<" ";
          b--;
          }
          if(l<=r)
          {
                for(i=b;i>=t;i--)
            cout<<a[i][l]<<" ";
          l++;
          }
      }

     return 0;
}
//updated version