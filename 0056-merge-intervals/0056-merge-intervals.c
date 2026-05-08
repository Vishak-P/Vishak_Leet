/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int** merge(int** intervals, int size, int* intervalsColSize,
            int* returnSize, int** rc)
{
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(intervals[j][0]>intervals[j+1][0]){
                int *temp=intervals[j];
                intervals[j]=intervals[j+1];
                intervals[j+1]=temp;
            }
        }
    }

    int **result=(int**)malloc(sizeof(int*)*size);
    *rc=(int*)malloc(sizeof(int)*size);
    int k=0;
    result[k]=(int*)malloc(sizeof(int)*2);
    result[k][0]=intervals[0][0];
    result[k][1]=intervals[0][1];
    (*rc)[k]=2;
    k++;
    for(int i=1;i<size;i++){
        if(intervals[i][0]<=result[k-1][1]){
            if(intervals[i][1]>result[k-1][1]){
                result[k-1][1]=intervals[i][1];
            }
        }
        else{
            result[k]=(int*)malloc(sizeof(int)*2);
            result[k][0]=intervals[i][0];
            result[k][1]=intervals[i][1];
            (*rc)[k]=2;
            k++;
        }
    }
    *returnSize=k;
    return result;
}