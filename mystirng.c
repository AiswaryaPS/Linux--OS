#include "mystring.h"
size_t mystrlen(const char *str){
    return strlen(str);
}
char* mystrcpy(char* str1, const char* str2){
    return strcpy(str1,str2);
}
char* mystrcat(char *str1, const char *str2){
    return strcat(str1,str2);
}
int mystrcmp(const char *str1, const char *str2 ){
    return strcmp(str1,str2);
}