#include <stdio.h>
#include<conio.h>
int main()
{
int n;

    printf("Enter the rows : ");
    scanf("%d",&n);

int dec=2;

for(int i=0;i<2*n;i++){

        // condition of star pattern where it reaches to n and print decrement patternss
            if(i>n){
                for(int k=0;k<2*n-i;k++){
                // for(int k=0;k<i-dec;k++){ another way to write that 
                    printf("*");
                }
                printf("\n");
                    dec=dec+2;
                    // printf("%d",dec);


            }
        // condition of star pattern where it is less/equal than n

            else{

                for(int j=0;j<i;j++)  {
                    printf("*");
                }  
                printf("\n");
            }

}


return 0;
}