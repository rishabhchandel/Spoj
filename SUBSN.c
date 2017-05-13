#include<stdio.h>
#include<string.h>
# define si 100002
# define e 27
int a[e][si],b[e],c[e];
char s[si],d[202];

int main()
{
    int t,i,x,y,cn=1,q,p;
    scanf("%d",&t);
    char n[1];
    gets(n);
    for(i=0;i<26;i++)a[i][0]=0;
    while(t--){
               gets(s);
               x=strlen(s);
               for(i=0;i<26;i++)b[i]=0;
               for(i=0;i<x;i++)a[ s[i]-'a'][++b[s[i]-'a']] = i;
               printf("Case %d:\n",cn++);
               scanf("%d",&q);

               gets(n);
               while(q--){
                          gets(d);
                          y=strlen(d);
                          if(x==0){
                                   if(y==0)printf("YES\n");
                                   else printf("NO\n");
                          }
                          else {
                               if(y==0)printf("YES\n");
                               else {
                                    for(i=0;i<26;i++)c[i]=0;
                                    if(b[d[0]-'a']){
                                                    p=a[d[0]-'a'][1];
                                                    c[d[0]-'a']=1;
                                    for(i=1;i<y;i++){
                                                     int o=b[d[i]-'a'],f=1,k;
                                                     if(o){
                                                           for(k=c[d[i]-'a'];k<=o;k++){
                                                                                       if(p<a[d[i]-'a'][k]){
                                                                                                            p=a[d[i]-'a'][k];
                                                                                                            f=0;
                                                                                                            c[d[i]-'a']=k+1;
                                                                                                            break;
                                                                                       }
                                                           }
                                                           if(f)break;
                                                     }else break;
                                    }
                                    if(i==y)printf("YES\n");
                                    else printf("NO\n");
                               }else printf("NO\n");}

                          }
               }
    }
    return 0;
}
