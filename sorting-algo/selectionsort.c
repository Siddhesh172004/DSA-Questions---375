// Your First C++ Program


#include <stdio.h>
int main() {
 
int i,pre,temp;
int a[]={2,5,44,4,25,2};
int n=6,pos;
int small,j;
for(i=0;i<n-1;i++)
{
    small=a[i];
    pos=i;
    for( j=i+1;j<n;j++){
        
        if(a[j]<small){
            small=a[j];
            pos=j;
        }

    }
    temp=a[i];
    a[i]=a[pos];
    a[pos]=temp;


}








for(i=0;i<n;i++){
    printf("%d",a[i]);
    printf("\n");
}


    return 0;
}


