#include <stdio.h>
#include<stdlib.h>
/**
 * 
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int main(void)
{
   
   int n,t; // n is the number of array elements and t is the target number

   //Request the user for how many numbers in the list
    printf("How many integers: ");
    scanf("%d", &n);

    int nums[n]; // array that will hold the array inputed by user. 
    int z[2]; //array that will hold the two numbers required. 
    
  //Request the user to input numbers up to the nth number. 
    for(int i=0; i<n; i++)
    {
        printf("Enter number %d: ", i);
        printf("\n");
        scanf("%d", &nums[i]);
    }

    // Array check. Not compulsory for this code. 
    printf("array elements are: ");
    for (int m=0; m<n; m++)
    {
        printf("%d ", nums[m]);
    }

    //Request user for target number. 
    printf("\nInput target number: ");
    scanf("%d", &t);

    //Call the function that performs the twosum operation. 
    int *res = twoSum(nums, n, t, z);

    //Print result.
    printf("first result: %d\nSecond result %d\n", res[0], res[1]);
 
    //Free memory since we used malloc somewhere in our code.  
    free(res);


}  

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int total, i, j;

    //Making returned array that is malloced. 
    int *result=(int *)malloc((*returnSize)*sizeof(int));
    
    /*This for loop results in an 0(N-squared) which is fast in C but 
       it is not the most efficient way to solve this problem. But this will 
       work using the logic we are following.*/
    
    for(int i=0; i<numsSize; i++)
    {
        for(int j=i+1; j<numsSize; j++)
        {
            total = nums[i]+nums[j];
            if (total==target)
            {
                result[0]=i;
                result[1]=j;
               
            }
        }   
    }
   

   
return result;
}

# twoSumLeetcodeC
