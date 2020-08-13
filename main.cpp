#include <iostream>

using namespace std;
int power(long,long);
int main()
{
   long a,b,c;
   cout<<"Enter the base"<<endl;
   cin>>a;
   cout<<"Enter the exponent"<<endl;
   cin>>b;

   c=power(a,b);
   cout<<"Result : "<<c;

   return 0;
}


int power(long x, long y)
{
    long z;

    for(int i=1;i<y; i++)
    {
       x*=x;
    }
    return x;
}
