#include<stdio.h>
int main(){
int n,arr[100],i,a,b,c;
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the array values:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
    a=arr[i];
b=arr[i+1];
c=a-b;
    if(c==1||c==-1){
        printf("%d \t %d ",arr[i],arr[i+1]);
        printf("\n");
        printf("%d \t %d",i,i+1);

    }
}
}
