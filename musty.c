#include <stdio.h>

int main() {
    float arr[10], sum, num, average;
int i;

average = 
printf("Enter number of elements: ");
scanf("%f", &num);
//reading values in the array
printf("Enter the values: \n");


	for (i=0; i<num; i++)
	{
		scanf("%f", &arr[i]);
	}
	//computation of total
sum = 0;
 for (i = 0; i < num; i++)
sum = sum + arr[i];

//printing all elements
printf("The List of numbers entered are:");
 for (i = 0; i < num; i++){
 
printf("\nnumber[%d]=%.2f", i+1, arr[i]);



}
printf("\nsum of the numbers are:");
printf("\n%.2f", sum);
printf("\nCalculating Average......");
  average = sum / num;
    printf("\nThe Average of the numbers is = %.2f", average);

    return 0;
 
}
