#include <cstdlib>
#include <iostream>
#include <type_traits>
#include <csignal>
#include <unistd.h>

using namespace std;

void signl_handler(int signum) {
        cout << "Interrupt signal (" << signum << ") received !!" << endl;
        exit(signum);
}


int main() {
        signal(SIGINT, signl_handler);

        while (1)
        {
                cout << "Going to sleep...." << endl;
                sleep(1);
        }
        
        return 0;
}

