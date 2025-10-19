 # define true 1
 # define false 0
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int i, j, status, * result;

    result = ( int *) malloc ( sizeof ( int ) * 2);

    *returnSize = 0;

    if ( result != NULL ){
        i = 0; status = false;
        while ( i < numsSize ){
            j = i + 1;
            while ( j < numsSize && status == false ){
                if ( nums [i] + nums [j] == target ){
                    status = true;
                }
                else {
                    j++;
                }
            }
            if ( status == true ){
                result [0] = i;
                result [1] = j;
                *returnSize = 2;
                return result;
            }
            i++;
        }
    }
    return NULL;
}