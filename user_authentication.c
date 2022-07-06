#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int hashf(char*string){
      int n=strlen(string);
      int sum=0;
      for(int i1=1;i1<=n;i1++){
      sum=sum+i1*((int)*(string+i1));
      }
      int res=sum % 2069;
      return res;
}
int main(){

    char *input_un;
    char *input_up;
    char*** hash_table=NULL;
    char line[20];
    char* info_un=NULL;
    char* try=NULL;
    char* info_up=NULL;
    hash_table=(char***)calloc(20000,sizeof(char**));
    for(int i=0;i<20000;i++){
        *(hash_table+i)=(char**)calloc(2,20*sizeof(char));
    }
    FILE *ptr=NULL;
    ptr=fopen("userInfo.csv","r");
    int index;
    while(!feof(ptr)){
        fscanf(ptr,"%s",&line);
        try=line;
        info_un=strtok(line,",");
        info_up=strtok(NULL,",");
        index=hashf(info_un);
        while(strcmp(**(hash_table+index),"")==0){
            index=(index+1)%2069;                                                                     //insert
            if(index>20000){
                hash_table=(char***)realloc(hash_table,40000*sizeof(char**));
            }

        }
        **(hash_table+index)=info_un;
        *(*(hash_table+index)+1)=info_up;
    }
    printf("Please enter your username: ");
    scanf("%s",input_un);
    printf("\n");
    int new_ind=hashf(input_un);
    while((strcmp(**(hash_table+new_ind),input_un)==0)&&(strcmp(**(hash_table+new_ind),"")==0))
    {
            new_ind = (new_ind + 1) % 2069;
    }
   if(strcmp(**(hash_table+new_ind),input_un)){
            printf("Username found!\n");
   }
   else{
            printf("Username not found!\n");
            return 0;
    }
    printf("Enter password: ");
    scanf("%s",input_up);
    printf("\n");
    if(strcmp(input_up,*(*(hash_table+new_ind)+1))){
        printf("Login successful!");
    }
    else{
        printf("Login unsuccessful!");
    }
    fclose(ptr);
return 0;
}
