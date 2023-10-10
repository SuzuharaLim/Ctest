#include <iostream>
#include <cstring>
#include <cstdlib> 

using namespace std;

void my_memcpy(void* dest, void* src, size_t n) {
    char* d = (char*)dest;
    const char* s = (char*)src;
}

char* my_strdup(const char* str) {
    size_t num = strlen(str);
    char* sum = (char*)malloc(num + 1);
    if (sum) {
        my_memcpy(sum, (void*)str, num);
        sum[num] = '\0';
    }
        return sum;
}

int my_strlen(const char* str)
{
    int num=0,i=0;
    while (*str) {
        str++;
        i++;
    }
    num= (sizeof(*str)*i);
    return num;
}

char* my_strcat(char* dest,char* src) {
    char* original_dest = dest;
    original_dest = (char*)malloc(my_strlen(dest) * sizeof(*dest));//求字串長度
    while (*dest) {
        dest++;
    }
    for (int i = 0; i < sizeof(src); i++)
        *dest++ = *src++;
    return original_dest;
}

int main() {
    char owo[7] = "oghjwo";
    char ouo[4] = "ouo";
    char test1[] = "test1";
    char test2[10] = "test2";

    cout << strlen(test1) << endl;
    cout << sizeof(test1) << ", " << sizeof(test2) << endl;
    //cout <<my_strcat(owo,ouo);
    cout << sizeof(int*) << endl;
    cout << my_strlen(owo);
    return 0;
}
