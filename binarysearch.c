#include<stdio.h>


void binarysearchkaro(int a[],int left, int right,int n,int search){

if(left>right==-1){
    printf("not found");
}
int mid=(left+right)/2;
if(a[mid]==search){
    printf("Element founded");
}
else if(a[mid]<search)
{
    binarysearchkaro(a,left,  mid-1, n, search);
}
else{
    binarysearchkaro( a, left,  mid+1, n, search);

}


}


int main()
{

    int i,j;
    int a[5]={10,20,30,40,50};
    int n=5;
   int  search=20;
    int m;
    binarysearchkaro(a, 0,  n-1,n,search);

return 0;

}
