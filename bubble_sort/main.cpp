/**
 * Bubble sort
 *
 * @author Alaa Attya <vidooman@gmail.com>
 * Created at 14-6-2014 04:26 am
 */

#include <iostream>

using namespace std;

/**
 * swap two values
 * you've to pass the refrence to the values
 * you want to swap
 *
 * @param   x   address of x
 * @param   y   address of y
 */
void swap(int &x, int &y){
    int tmp = x;
    x=y;
    y=tmp;
}

/**
 * bubble sort algorithm implementation
 *
 * @param   *arr      pointer to the first element in array
 * @param   arrSize   array size
 * @return  pointer   to the sorted array
 */
int* bubbleSort(int *arr, int arrSize){
    bool swapped = false;
    do{
        swapped = false;
        for(int i=1; i<arrSize; i++){
            if(arr[i-1]>arr[i]){
                swap(arr[i-1], arr[i]);
                swapped = true;
            }
        }
        // shrink the range of sorting
        // for enhancing algorithm performance
        arrSize= arrSize - 1;
        // while there was a swap operation
        // keep sorting
    }while(swapped);

    return arr;
}

int main()
{
    int arr[] = {10,1,0,20,50};
    int arrSize = sizeof(arr)/sizeof(int);
    bubbleSort(arr, arrSize);
    for(int i=0; i<arrSize; i++)
        cout<< arr[i]<<endl;

    return 0;
}
