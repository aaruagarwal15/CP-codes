#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,m;
        scanf("%d %d", &n, &m);
        int a[n];
        int large = -10;
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
            if(large < a[i]){
                large = a[i];
            }
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            int x = large - a[i];
            sum += x;
        }
        if(sum>m)
			printf("No\n");
        else
        {
            sum=sum-m;
            if(sum%n==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}