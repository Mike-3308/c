#include "utility.h"

/*************************************************************************
*functionname:  bubble_sort
*arguments:     void *buff,unsigned int length
*return:        void
*explain:       冒泡排序函数，第一个传参需传入转换成void *格式的数组，
*               第二个传参需传入数组最大值的下标，非数组实际长度。
*************************************************************************/

void bubble_sort(void *buf,unsigned int length)
{
    int *buff = (void *)buf;
    int temp = 0;
    int i = 0,x = 0,y = 0;

    printf("sort before:\n");
    for(i = 0;i < length;i++)
    {
        printf("%d,",buff[i]);

        if(i % 5 == 4)
        {
            printf("\n");
        }
    }

    for(x = 0;x < length;x++)
    {
        for(y = 0;y < length - x - 1;y++)
        {
            
            if(buff[y] > buff[y + 1])
            {
                temp = buff[y];
                buff[y] = buff[y + 1];
                buff[y + 1] = temp;
            }
            
        }
    }

    printf("\nsort after:\n");
    for(i = 0;i < length;i++)
    {
        printf("%d,",buff[i]);
        if(i % 5 == 4)
        {
            printf("\n");
        }
    }
}