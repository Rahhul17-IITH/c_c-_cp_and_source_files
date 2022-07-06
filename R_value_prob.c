#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

double sum(int N , double** arr,double R){
    double val=0;
    int j;
  for(int i=0;i<N;i++){
    val=val+(arr[i][j]/arr[i][j+1]+R);
  }
  return val;
}

double solve (double** arr, double K, int n) {
   while(val!=K){
    double l=0,r=1e^6,mid=(l+r)/2;
    val=sum(n,arr,mid)

    if(val<k)mid=(l+r-2)/2;
    if(val==k)return mid;





   }


}

int main() {
    int N;
    scanf("%d", &N);
    int col;
    scanf("%d", &col);
    int i_arr, j_arr;
    double **arr = (double **)malloc(N*sizeof(double *));
    for(i_arr=0; i_arr<N; i_arr++)
    {
    	arr[i_arr] = (double *)malloc(col*sizeof(double));
    }
    for(i_arr=0; i_arr<N; i_arr++)
    {
    	for(j_arr=0; j_arr<col; j_arr++)
    	{
    		scanf("%lf", &arr[i_arr][j_arr]);
    	}
    }
    double K;
    scanf("%lf", &K);

    double out_ = solve(arr, K);
    printf("%lf", out_);
}
