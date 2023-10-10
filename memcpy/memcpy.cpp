#include <iostream>
#include <cstring>
#include <cstdlib> 

using namespace std;

void my_memcpy(void* dest, void* src, size_t n) {
    char* d = (char*)dest;
    const char* s = (char*)src;
}

char* my_strdup(char const* const str) {
    size_t num = strlen(str);
    
    char* dupstr = (char*)malloc(num + 1);
    if (dupstr) {
        my_memcpy(dupstr, (char*)str, num);
        //memcpy(dupstr, str, num);
        dupstr[num] = '\0';
    }
        return dupstr;
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

int (*fptr)(int);


char* my_strcat(char* dest, char* src) {
    char* original_dest;
     
    int strAlen = strlen(dest);
    int strBlen = strlen(src);
    int len = strAlen + strBlen;
    original_dest = (char*)malloc(strAlen + strAlen + 1);

    char* retval = original_dest;

    while (*dest) {
        *original_dest++ = *dest;
        dest++;
    }
    

    int slen = strlen(src);

    for (int i = 0; i < slen; i++)
        *original_dest++ = *(src + i);
   // while (*original_dest++ = *src++);

    *original_dest = '\0';

    return retval;
}

int main() {
    char owo[50] = "owo";
    char ouo[4] = "ouo";
    char test1[] = "test1";
    char test2[10] = "test2";

    char* strA = (char*)"12345678";
    //cout << strlen(test1) << endl;
    //cout << sizeof(test1) << ", " << sizeof(test2) << endl;
    //cout <<my_strcat(owo,ouo);
    //cout << sizeof(int*) << endl;
    //cout << my_strlen(owo)<<endl<<endl;

    char* str = my_strcat(owo, ouo);

    cout << str << endl;
    free(str);



    cout << string(owo) + string(ouo) << endl;
    return 0;
}