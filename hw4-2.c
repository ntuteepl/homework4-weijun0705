#include <stdio.h>


int main()
{
int n,match;
int nn[6][3]={  {123,456,9000},
                {456,789,5000},
                {789,888,6000},
                {336,558,10000},
                {775,666,12000},
                {566,221,7000}};
int cc[6][2];

scanf("%d",&n);

for( int i=0;i<n;i++)
    {
    scanf("%d%d",&cc[i][0],&cc[i][1]);
	match=0;
	for(int j=0;j<6;j++){
    if(cc[i][0]==nn[j][0]&&cc[i][1]==nn[j][1]){
        printf("%d\n",nn[j][2]);
		 match=1;
		 break;
    }
	}
	if(match==0){
		printf("error\n");
    }
    }
    }
