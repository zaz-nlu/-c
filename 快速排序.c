#include <stdio.h>
#define N 10

void quicksort(int a[],int low,int height);
int split(int a[],int low,int height);

int main(void){
    int a[N],i;
    printf("Enrer %d Number to be sorted:",N);

    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    quicksort(a,0,N-1);
    printf("In sorted order:");
    for(i=0;i<N;i++){
        printf("%d",a[i]);

    printf("\n");
    
    return 0;
    }
}

void quicksort(int a[],int low,int height){
    int middle;

    if(low>=height)
        return;
    middle=split(a,low,height);
    quicksort(a,low,middle-1);
    quicksort(a,middle+1,height);
}

int split(int a[],int low,int height){
    int part_element = a[low];
    for(;;){
        while(low < height && part_element <= a[height])
            height--;
        if(low >= height){
            break;
        }
        a[low++]=a[height];

        while(low < height && a[low] <= part_element)
            low++;
        if(low >= height){
            break;
        }
        a[height--]=a[low];
    }
    a[height] = part_element;
    return height;
}