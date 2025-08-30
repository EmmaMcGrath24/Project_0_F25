#include <stddef.h>

void rand_string(char *s, size_t size) {
    size_t i=0;
    while(i<size){
        char c = (rand() % 26) + 'a';
        s[i] = c;
        i++;
    }
    s[size]='\0';
}