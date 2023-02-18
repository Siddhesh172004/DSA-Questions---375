// Your First C++ Program


#include <stdio.h>
#include <iostream>
#include<conio.h>


int main() {
 
int i,j,temp;
int a[3]={55,5,44};
   
int n=3;
for(i=0;i<n;i++){
    for(j=0;j<3-i;j++){
    // printf("\n pass %d",i);
    // printf("\n");

    //        printf("%d",a[j]);
    // printf("\n");
    // printf("%d",a[j+1]);
    printf("\n");

           printf("i = %d",i);
    printf("\n");

           printf("j = %d",j);
    printf("\n");

        if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
        }

      

    }
//     for(i=0;i<5;i++){
//     printf("%d",a[i]);
//     printf("\n");
// }

    printf("\n");
}

for(i=0;i<n;i++){
    printf("%d",a[i]);
    printf("\n");
}


// int Neww = sizeof(a);
// int Ne = sizeof(a[0]);
// int N = sizeof(a) / sizeof(a[0]);
// printf(" N = %d",N);
// printf("Newww = %d",Neww);
// printf("Ne = %d",Ne);
    return 0;
}


