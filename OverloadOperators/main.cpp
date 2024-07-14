#include <locale>
#include <iostream>
#include <tchar.h>

using namespace std;

enum SERVER {
    STARTING, SHOOTDOWN, WORK, STOP
};
enum CLIENT {
    CONNECT, SEND, RECV, DISCONNECT
};
enum EVENT {
    WAIT, DO, ERROR
};

EVENT operator>>(CLIENT c, SERVER s) {
    EVENT rc = ERROR;
    if ((c == CONNECT || c == SEND || c == RECV) && (s == STARTING || s == STOP)) rc = WAIT;
    else if ((c == CONNECT || c == SEND || c == RECV) && (s == WORK)) rc = DO;
    return rc;
};

int _tmain(int argc, _TCHAR *argv[]) {
    EVENT e1 = CONNECT >> STARTING;
    EVENT e2 = CONNECT >> WORK;
    EVENT e3 = SEND >> SHOOTDOWN;

    system("pause");
    return 0;
}

