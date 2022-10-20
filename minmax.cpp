
#include <bits/stdc++.h>

using namespace std;
struct query
{
    int min,max;
};

struct query get_MinMax(int arr[], int lowindex,int highindex)
{
    struct query minmax,	
    left, right;   
    int mid;
   
    
    if(highindex==lowindex){
        minmax.min=arr[lowindex];
        minmax.max=arr[lowindex];
        return minmax;
    }
    else if(highindex==lowindex+1){
        if (arr[lowindex] > arr[highindex])
        {
            minmax.max = arr[lowindex];
            minmax.min = arr[highindex];
        }
        else
        {
            minmax.max = arr[highindex];
            minmax.min = arr[lowindex];
        }
        return minmax;
    }

    
    mid = (lowindex + highindex) / 2;
    left = get_MinMax(arr, lowindex, mid); 
    right = get_MinMax(arr, mid + 1, highindex); 


    if (left.min < right.min)
        minmax.min = left.min; 
    else
        minmax.min = right.min;   
    
    
    if (left.max > right.max)
        minmax.max = left.max; 
    else
        minmax.max = right.max;   
    
    return minmax;
}
int main()
{
    int arr[] = { 787,888,13,8,95,4,666,425,231,69 }; 
    struct query minmax = get_MinMax(arr, 0,9); 
                            
    cout << "Minimum element in given array is "<< minmax.min << endl;
    cout << "Maximum element in given array is "<< minmax.max<<endl;
        
    return 0;
}
