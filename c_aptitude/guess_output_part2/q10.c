#include <stdio.h>

int Decode(char* pStr){
    int iRetVal = 0;
    if (pStr){
        while(*pStr && *pStr <= '9' && *pStr >= '0'){
            iRetVal = (iRetVal * 10) + (*pStr - '0');
            pStr++;
        }
    }
    return iRetVal;
}

int main() {
    printf("%d", Decode("X32Y567") + Decode("42X24"));
    return 0;
}