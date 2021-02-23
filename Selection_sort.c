#include <stdio.h>
#include <stdlib.h>

void selection_sort(char* s_string, int s_len)
{
    if((NULL == s_string) || (0 >= s_len))
        return;
    int min_pos = 0;
    int i = 0;
    int j = 0;
    for(i = 0; i < s_len - 1; i++){
        min_pos = i;
        for (j = i+1; j < s_len; j++) {
            min_pos = s_string[j] > s_string[min_pos] ? min_pos : j;
            // printf("min_pos[%d][%d][%d]\r\n", min_pos, i, j);
        }

        int tmp = 0;
        tmp = s_string[min_pos];
        // printf("tmp:[%d]\r\n", min_pos);
        s_string[min_pos] = s_string[i];
        s_string[i] = tmp;
        printf("s_string[%d]:[%d]\r\n", min_pos, s_string[i]);
    }
}

int main()
{
    printf("Hello world!\n");
    char select_string[] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
    int select_len = 0;
    select_len = strlen(select_string);
    selection_sort(select_string, select_len);
    return 0;
}
