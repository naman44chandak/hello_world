#include <stdio.h>
#include "../include/myfile.h"

char * sgs_clib_strstr(const char *haystack, const char *needle)
{
    char* point;

    int length=strlen(needle);
    
    for(;*haystack!='\0';haystack++)
    {
        if(*haystack==*needle)
        {
            int j;
            for(j=0;*haystack==*needle && needle[j]!='\0'; j++,haystack++);

            if(j==length)
                return point;

        }
    }

    return "(null)";
}
