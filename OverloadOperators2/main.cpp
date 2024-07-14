#include <locale>
#include <iostream>
#include <tchar.h>

struct POINT {int x; int y;};
struct VECTOR {int x; int y;};

VECTOR operator-(POINT p1, POINT p2){
    VECTOR rc = {p1.x-p2.x, p1.y-p2.y};
    return rc;
};

VECTOR operator+(VECTOR v1, VECTOR v2){
    VECTOR rc = {v1.x+v2.x, v1.y+v2.y};
    return rc;
};

int _tmain(int argc, _TCHAR* argv[]){

    POINT p1 = {10, 20}, p2 = {15, -10};
    VECTOR v1, v2, v3;

    v1 = p1 - p2;
    v2 = p2 - p1;
    v3 = v1 + v2;

    system("pause");
    return 0;
}

