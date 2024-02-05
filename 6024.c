#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int k=0; k<n; ++k)
    {
        int b,p,f;
        scanf("%d %d %d",&b,&p,&f);
        int h,c;
        scanf("%d %d",&h,&c);
        int money=0;
        if(h>c)
        {
            while(b>1&&p>0)
            {
                b=b-2;
                p--;
                money+=h;
            }
            while(b>1&&f>0)
            {
                b-=2;
                f--;
                money+=c;
            }
        }
        else
        {
            while(b>1&&f>0)
            {
                b-=2;
                f--;
                money+=c;
            }
            while(b>1&&p>0)
            {
                b-=2;
                p--;
                money+=h;
            }
        }
        printf("%d\n",money);
    }
    return 0;
    //mmmmm
}
