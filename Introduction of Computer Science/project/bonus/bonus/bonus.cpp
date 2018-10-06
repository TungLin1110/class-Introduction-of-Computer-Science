#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    int j;
    int flag=0;
    int coef[100]={0};
    int powr[100]={-2};
    int ans;
    int n_data;
    int parameter;
    int high;
    scanf("%d",&n_data);
    for(i=0;i<n_data;i++)
       {
        scanf("%d%d",&coef[i],&powr[i]);
       }
       scanf("%d",&parameter);
       high=powr[0];
      while(powr[0]>0)
      {
          ans=0;
    for(i=0;i<n_data;i++)
       {
            if(powr[i]!=-1)
           {

               printf("%d%d  ",coef[i],powr[i]);
               ans=ans+coef[i]*(pow(parameter,powr[i]));
           }
       }
       printf("%d\n",ans);
        for(i=0;i<n_data;i++)
       {
        coef[i]=powr[i]*coef[i];
        if(powr[i]>=0)
        {
            powr[i]--;
        }
       }
      }
      printf("%d0 %d",coef[0],coef[0]);
return 0;
}