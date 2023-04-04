 #include<stdio.h>
 #include<conio.h>


void Merge(int arr[],int low,int mid,int high){

int n1=mid-low+1; 
int n2=high-mid;

int aL[n1],aR[n2];  // al is left side sorted array and aR is right side
    for(int i=0;i<n1;i++){
        aL[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++){
            aR[j]=arr[mid+1+j];        
    }
 

    int i=0;
    int j=0;
    int k=low;// increment pointer for interations 

    while(i<n1 && j<n2){
        if(aL[i]<aR[j]){
            arr[k]=aL[i];
            k++;i++;
        }
        else{
            arr[k]=aR[j];
            k++;j++;
        }

    }

    while(i<n1){
        arr[k]=aL[i];
            k++;   i++;
    }
    while(j<n2){
            arr[k]=aR[j];
             k++; j++;
        }

}





void mergesort(int arr[],int low, int high ){

    if (low<high)
    {

        int mid=low + (high - low) / 2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        
        Merge(arr,low,mid,high);
    }


}
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}


int main(){

int arr[100];
int size;
printf("Enter the size of array : ");
scanf("%d",&size);


for(int i=0;i<size;i++){
    int temp;
    printf("Enter number : ");
    scanf("%d",&temp);
    arr[i]=temp;    
}


printf("Before sorting \n");
printArray(arr,size);
printf("After sorting \n");
mergesort(arr,0,size-1);

printArray(arr,size);
}