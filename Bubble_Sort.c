#include <stdio.h>
#include <stdlib.h>

int lengthOfLongestSubstring(char * s){
    if (NULL == s){
        return 0;
    }
    
    int i = 0;
    int j = 0;
    int slen = strlen(s);
    int cunt = 0;
    int max = 0;
    char p[4] = {0};
    char *temp = NULL;
    temp = malloc(slen+1);
    if(NULL == temp){
        return 0;
    }
    memset(temp, 0x00, slen+1);
    p[0] = s[0];
    memcpy(temp+cunt, p, 1);
    cunt += 1;
    for (i = 0; i < slen-1; i++){
        if (s[i] != s[i+1]){
            memset(p, 0x00, 4);
            p[0] = s[i+1];
            if (NULL == strstr(temp , p)){
                memcpy(temp+cunt, p, 1);
                printf("Hello !temp[%s]\n", temp);
                cunt += 1;
            }
            else{
                cunt = 1;
                memset(temp, 0x00, slen+1);
                memcpy(temp, p, 1);
            }
        }
        else{
            memset(p, 0x00, 4);
            p[0] = s[i+1];
            cunt = 1;
            memset(temp, 0x00, slen+1);
            memcpy(temp, p, 1);
        }
        max <= cunt ? max = cunt : max; 
    }
    printf("Hello world![%d]\n", cunt);
    printf("Hello world![%d]\n", max);
    if(NULL == temp){
        free(temp);
        temp = NULL;
    }
    return max;
}

int main()
{
    printf("Hello world!\n");
    lengthOfLongestSubstring("dvdf");
    return 0;
}
