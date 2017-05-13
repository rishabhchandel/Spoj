#include<stdio.h>
int main()
{
    int n,i,q;
    long long x,y,z,a,d;
    scanf("%d",&q);
    while(q--){
               scanf("%lld%lld%lld",&x,&y,&z);
               n=6;
               while(n++){
                          if((y-x)/(n-6)==(2*z)/n-x-y)break;
               }               
               printf("%d\n",n);
               d=2*z/n-x-y;
               for(i=0;i<n;i++)printf("%lld ",x+(i-2)*d);
               printf("\n");
               }
    return 0;
}
               