#include<stdio.h>
int main()
{
    int a[10000],i,j,b,f,l,k=0,s,m;a[k++]=2;
    for(i=3;i<=111;i+=2){f=0;
                       for(j=2;j*j<=i;j++){if(i%j==0){f=1;break;}}if(f==0)a[k++]=i;
    }    
    for(i=113;i<=9997;i+=2){
                            f=0;for(j=0;a[j]*a[j]<=i;j++){
                                                          if(i%a[j]==0){f=1;break;}
                            }
                            if(f==0)a[k++]=i;
    }
    
    while(scanf("%d",&b)!=-1){
                              
                              for(i=0;a[i]<=b;i++){s=0;m=a[i];
                                               while(m<=b){s+=b/m;m*=a[i];}
                                              if(i>0) printf(" * %d^%d",a[i],s);else printf("%d^%d",a[i],s);
                              }                              
                              printf("\n");
    }
    return 0;
}
                        