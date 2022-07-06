#include<stdio.h>

int main(){
int a[2];
for(int i=0;i<2;i++){
    scanf("%d",&a[i]);
}
printf("\n");
for(int j=0;j<2;j++){
    printf("%d ",a[j]);
}
return 0;
}
// using scanf in a for loop ignores space
