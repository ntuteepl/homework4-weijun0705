#include <stdio.h>
#include <stdlib.h>

int main()

{

   int i,b,k;
   int a[50];
   scanf("%d",&b);
   for(i=0;i<b;i++){
for(int j=0;j<b;j++){
   scanf("%d",&a[j]);
   int x=1;
for(k=2;k<a[j];k++){
    if(a[j]%k==0)
{
        printf("NO ");
        x=0;
    break ;
}

}
        if (x==1){
        printf("YES ");
}
}
}
}
