// Online C compiler to run C program online
#include <stdio.h>
// #define N 4
int main() {
    
int N;
printf("enter the number of terms : ");
scanf("%d",&N);
int arr[N];
 int j=1;
for(int i=0; i<N; i++){
   
    printf("%d number : ", j);  
    scanf("%d",&arr[i]);
    j=j+1;
}
printf("fourth value %d :", arr[3]);

    return 0;
}
