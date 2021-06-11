#include<iostream>
using namespace std;

int main()
{
     for(int i=1;i<=3;i++)
     {   int k=1;
         for(int j=1;j<=5;j++)
         {
             if(j>= 4-i && j<=2+i && k)
             {
             cout<<"*";
             k=0;
             }
             else
             {
             cout<<" ";
             k=1;
             }
         }
         cout<<endl;
     }
     
     for(int i=1;i<=2;i++)
     {   int k=1;
         for(int j=1;j<=5;j++)
         {
             if(j>= i+1 && j<=5-i && k)
             {
             cout<<"*";
             k=0;
             }
             else
             {
             cout<<" ";
             k=1;
             }
         }
         cout<<endl;
     }
    return 0;
}
