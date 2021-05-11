#include "libft.h"

void	ft_bubble_sort(void **array, size_t len, int(*func)(void*, void*))
{
    size_t i;
    size_t k;
    void *swap;

    i = 0;
    while (i < len - 1)
    {
        k = 0;
        while  (k < len - i - 1)
        {
            if (func(array[k], array[k+1]) > 0)
            {
                swap = array[k];
                array[k] = array[k+1];
                array[k+1] = swap;
            }
            k++;
        }
        i++;
    }
}

//int main()
//{
//    int int_arr[50] = {5, 645 , 45 , 3 , 7, 9, 21, 4, 9, 8, 7, 11, 1, 32, 2};
//    void *arr[50];
//    int i = 0;
//
//    while (i != 16)
//    {
//        arr[i] = &int_arr[i];
//        i++;
//    }
//    i = 0;
//    while (i != 16)
//    {
//        ft_printf("%i, ", *(int*)arr[i]);
//        i++;
//    }
//}