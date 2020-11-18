#include<stdio.h>

int linearSearch(int a[],int search){
	int i=0;
	for(i=0;i<9;i++)
	{
		if(a[i]==221)
		{
			
			return i;

		}
	}
}

int binarySearch(int arr[], int start, int last, int search){

	int ind= (start+last)/2;
	//printf("%d Ind of array \n",ind);

	if(arr[ind]==search){
		return ind;
	}

	else if(arr[ind]<search){
		
		start = ind+1;
		last =  9;
		
		//printf("%d\n",last);
		binarySearch(arr, start, last, search);
	}

	else if(arr[ind]>search){
		start = 0;
		last = ind-1;

		//printf("%d\n",1 ); 
		binarySearch(arr,start,last,search);
	}

	else{
		return 0;
	}
}

int main(){
	int i=0,a[]={5,18,36,72,84,96,99,108,221,410};

	printf("\n\nLinear Search %d ",linearSearch(a,221));
	printf("\n\nBinary Search result %d ",binarySearch(a,i,9,221));
 
	return 0;
}