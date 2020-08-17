#include<stdio.h>
#include<stdlib.h>

void Swap(int *arr, int idx1, int idx2);
int Partition(int *arr, int left, int right);
void QuickSort(int *arr, int left, int right);
void found(int *n, int x,int len);
int main(){
    int count;
    int count2;
    int *num;
    int x;
    scanf("%d",&count);
    num = (int*)malloc(sizeof(int)*count);
    count -= 1;

    for(int i=0;i<=count;i++){
        scanf("%d ",&num[i]);
    }

    QuickSort(num, 0, count);
    scanf("%d",&count2);

    for(int i=0;i<count2;i++){
        scanf("%d",&x);
        found(num, x, count);
    }
}

void found(int *n, int y,int len){
    int low = 0;
    int high = len;
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(n[mid] == y){
            printf("1\n");
            return;
        }
        else if(n[mid] > y){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    printf("0\n");
}
void Swap(int *arr, int idx1, int idx2)
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}	


int Partition(int *arr, int left, int right)
{
	int pivot = arr[left];    
	int low = left+1;
	int high = right;

	while(low <= high)    
	{	
		while(pivot > arr[low])
			low++;

		while(pivot < arr[high])
			high--;

		if(low <= high)
			Swap(arr, low, high); 
	}

	Swap(arr, left, high); 
	return high; 
}

void QuickSort(int *arr, int left, int right)
{
	if(left <= right)
	{
		int pivot = Partition(arr, left, right); 
		QuickSort(arr, left, pivot-1);
		QuickSort(arr, pivot+1, right);
	}
}