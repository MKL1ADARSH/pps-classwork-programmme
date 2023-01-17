#include<stdio.h>
int main(){
int m;
float x, sum, average;
printf("========================================================================\n");
printf("this programme computs the average of a set of number \n");
printf("enter the value one after another\n");
printf("enter the negative number at the end(negative value is neglected)\n\n");
printf("========================================================================\n");
sum=0;
int value=1;
for(int m=1; m<=1000; m++){
printf("entering %d  value : ", value);
scanf("\n%f", &x);
if(x<0)break;
sum+=x;
value++;
}
value-=1;
average=sum/value;
printf("\n\nnumber of values = %d\n", value);
printf("sum=%f10.2\naverage=%10.2f\n", sum, average);

return 0;
}
