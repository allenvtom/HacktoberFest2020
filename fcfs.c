#include<stdio.h>
void main()
{
int a,i,j;
printf("enter the number of process");
scanf("%d",&a);
int ar[a][2];
int l;
l=a;
for(i=0;i<l;i++)
{
    printf("enter the arrival time of process %d",i);
    ar[i][0]=i;
    scanf("%d",&ar[i][1]);
    printf("enter the burst time of process %d",i);
    scanf("%d",&ar[i][2]);
}
for(i=0;i<l;i++){
printf("\n");

    for(j=0;j<3;j++)
        printf("%d     ",ar[i][j]);
}


/*i=0;
while(l>=0){
    if(ar[i][1]>ar[i+1][1])
    {printf("...............................1");
        int t1,t2,t3;
        t1=ar[i][0];
        t2=ar[i][1];
        t3=ar[i][2];
        ar[i][0]=ar[i+1][0];
        ar[i][1]=ar[i+1][1];
        ar[i][2]=ar[i+1][2];
        ar[i+1][0]=t1;
        ar[i+1][1]=t2;
        ar[i+1][2]=t3;
        i++;
        l--;
    }printf("****************");}
for(i=0;i<a;i++)
    for(j=0;j<3;j++)
        printf("%d     ",ar[i][j]);

printf("...............................");*/
}
