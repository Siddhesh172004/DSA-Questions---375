// Your First C++ Program


#include <stdio.h>
int main() {
 
int i,pre,temp;
int a[]={2,5,44,4,25};
int n=5;

int after;

for(after=1;after<5;after++){
temp=a[after];
pre=after-1;
while(temp<a[pre] && pre>=0){
    a[pre+1]=a[pre];
    pre--;
}
a[pre+1]=temp;

}

for(i=0;i<5;i++){
    printf("%d",a[i]);
    printf("\n");
}




























// for(i=4;i<=post;i--){
// a[i+1]=a[i];
// }


// for(i=0;i<5;i++){
//     printf("%d",a[i]);
//     printf("\n");
// }
// printf("after doing this ");
// a[post]=item;
//     printf("\n");

// for(i=0;i<=5;i++){
//     printf("%d",a[i]);
//     printf("\n");
// }
    return 0;
}


