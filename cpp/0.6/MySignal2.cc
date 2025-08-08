#include <iostream>
#include <unistd.h>
#include <csignal>

using namespace std;


void signalHandler(int signal) {
        switch (signal) {
               case SIGINT:
                    cout << "Caught SIGINT" << endl;
                    exit(0);
               break;
        }
}

int  ccc = 0;

int main() {
        signal(SIGINT, signalHandler);
        while (1)
        {
                cout << "Running... Press Ctrl+C to stop." << endl;
                sleep(1);

                if ( ccc++ == 3)
                {
                        raise(SIGINT);
                }
                

                /* code */
        }

        return 0;
}


