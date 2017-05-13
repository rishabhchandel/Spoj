#include <iostream>
#include<vector>
using namespace std;
 
int main () {
 
vector<int> prime(10000001);
	prime[1]=1;
	for(long long int i=2;i<=10000000;i++){
		if(!prime[i]){
                        prime[i]=i;
			for( long long int j=i;j*i<=10000000;j++){
				if(!prime[j*i])prime[j*i]=i;
			}
		}
	}
	int n;
	while(scanf("%d",&n)!=-1){
                              printf("1");
                              while(n>1){
                                          printf(" x %d",prime[n]);
                                          n/=prime[n];
                              }
                              printf("\n");
 }
 
 return 0;
}