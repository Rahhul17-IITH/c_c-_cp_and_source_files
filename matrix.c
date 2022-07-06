#include<stdio.h>


int main()
{


   int a[3][3]={{1,2,3},{1,2,3}};
   for(int x=0;x<=1;x++){
          for(int y=0;y<=1;y++){
            printf("%d ",a[x][y]);
          }
          printf("\n");
   }
   return 0;
}
