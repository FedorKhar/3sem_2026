#include <string.h>

int tok (char* str, char token, char** array_ptr)
{
    array_ptr [0] = str; 
    int offset = 1;

    int length = strlen (str);
    for (int i = 0; i < length; i++)
    {
         if (str[i] == token)
        {
            str[i] = '\0';
            array_ptr[offset] = str + i + 1;
            offset++;
        }
    }

    return offset;
}
