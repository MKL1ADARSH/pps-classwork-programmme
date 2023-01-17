#include<stdio.h>
int main()
{
   int n;
   printf("total no. of student : ");
   scanf("%d",&n);
     for(int i=1;i<=n;i++){
          int a;
          int sum=0;
          printf("roll number : %d  \n",i);
               for(int j=1;j<=6;j++){
                 printf("%d subject mark : ",j);
                 scanf("%d",&a);
                 sum=sum+a;
            }
            printf("total marks : %d\n",sum);
             if(sum>600) printf("incorrect output");
            if(sum>360) printf("A+ grade");
              if(sum>240) printf("B+ grade");
            else printf("F is grade");
            printf("\n\n");
            }
            return 0;
            }
