#include<iostream>
using namespace std;

int main()
{
     int num=1;
     for(int i=1;i<=4;i++)
     {
         for(int j=1;j<=4;j++)
         {
             if(j<=i)
             {
             cout<<num;
             num++;
             }
             else
             cout<<" ";
         }
         cout<<endl;
     }
    return 0;
}
