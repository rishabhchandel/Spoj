#includestdio.h
int main()
{
int v[66536];
unsigned int a;
int i,j,f,s,n,k=0;
for(i=2;i=65536;i++){f=0;
for(j=2;jj=i;j++){if(i%j==0){f=1;break;}}
if(f==0)v[k++]=i;
}
s=k;
scanf(%d,&n);
while(n--){
scanf(%u,&a);
while(a--){f=0;
for(i=0;v[i]v[i]=a&&is;i++){if(a%v[i]==0){f=1;break;}}
if(f==0){printf(%un,a);break;}
}
}
return 0;
}