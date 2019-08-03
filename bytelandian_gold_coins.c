#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

struct node{
    ll val;
    struct node *lchild;
    struct node *mchild;
    struct node *rchild;
};

struct node *create(ll x){
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->val = x;
    p->lchild=p->mchild=p->rchild=NULL;
    //printf("001, %lld",p->val);
    if(x >= 12){
    //printf("002, ");
    p->lchild = create(x/2);
    p->mchild = create(x/3);
    p->rchild = create(x/4);
    }
    //printf("003, ");
    return p;

}

ll t_sum2 (struct node *s)
{
    ll sum = 0,t=0,t2=0;
    if(s==NULL)
        return 0;
    else if(s->lchild==NULL&&s->mchild==NULL&&s->rchild==NULL)
        return s->val;
    else
    {
        sum = t_sum2(s->lchild);
        t = t_sum2(s->mchild);
        t2 = t_sum2(s->rchild);
        //printf("\nhello %lld %lld %lld\n",sum,t,t2);
        return(sum+t+t2);
    }

}
int main(){
    ll n;
    ll sum2 = 0;
    //printf("000\n");
    while(scanf("%d", &n)==1){
        struct node *root = NULL;
        //printf("111\n");
        if(n < 12){
            sum2 = n;
        }
        else{
            root = create(n);
            //printf("--- %lld \n",root->lchild->val);
            sum2 = t_sum2(root);
        }
        printf("%d\n",sum2);
    }
    return 0;
}
