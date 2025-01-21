#include <stdio.h>

int main(void)
{
    char arr[] = "Hello World\n";
    
    for (int i = 0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
    
}
