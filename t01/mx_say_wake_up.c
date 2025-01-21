#include <stdio.h>

void mx_say_wake_up(void);

int main() {
    mx_say_wake_up();
    return 0;
}

void mx_say_wake_up(void) {
    char arr[] = "Wake up, NEO \\ (^_^) / ...\nThe Matrix has you ...\n";
    
    for (int i = 0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
}
