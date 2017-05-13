 
   #include<stdio.h>
    int main()
    {
        int n,k,q,j;
        long long  x,y,z,a,i,d;
        scanf("%d",&q);
        while(q--){
                   scanf("%lld%lld%lld",&x,&y,&z);              
                   if(x==y){
                            a=z/x;
                            printf("%d\n",a);
                            for(i=0;i<a;i++)printf("%lld ",x);
                   }else{
                   
                   a=y/x;k=0;
                   for(i=2;i<=a;i++){
                                     if(y*i*i*i*i*i-x==z*i*i*(i-1)){
                                                while(!(a%i)){k++;a/=i;}
                                                break;
                                     }
                   }
                   n=5+k;
                   printf("%d\n%lld %lld %lld",n,x/(i*i),x/i,x);
                   for(k=1;k<n-2;k++){x*=i;printf(" %lld",x);}
                   } 
                    printf("\n");
                    }
        return 0;
    }
                   
   