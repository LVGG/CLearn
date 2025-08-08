#include <iostream>

using namespace std;

// #define DEBUG

#define MK_STR(x) #x
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define NOW __DATE__ << " " << __TIME__
#define CURRENT_LINE __LINE__


int main()
{
    cout << MK_STR(Hello World) << endl;

    #ifdef DEBUG
        cout << "DEBUG" << endl;
    #else
        cout << "RELEASE" << endl;
    #endif

    cout << MAX(10, 20) << endl;

    cout << NOW << endl;

    cout << "current line: " << CURRENT_LINE << endl;

    return 0;
}