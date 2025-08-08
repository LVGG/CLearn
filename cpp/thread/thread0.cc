#include <iostream>
#include <thread>
#include <chrono>
#include <unistd.h>

using namespace std;

mutex mtx;

void reading( int times ) {
    cout << "start read +++ " << endl;

    for ( int i = 0; i < times; ++i ) {
        mtx.lock();
        cout << "reading " << i << " hours" << endl;
        mtx.unlock();
        sleep(1); // Sleep for 1 second
    }

    cout << "finish read --- "<< endl;

}

int main() {

    thread t1(reading, 5); // Create a thread that runs threadFunction with 5 iterations

    thread t2([](int input) {
        cout << "start listening +++ " << endl;

        while (input -- > 0) {
            mtx.lock();
            cout << "listening " << input << " hours" << endl;
            mtx.unlock();
            sleep(1); // Sleep for 1 second
        }
        cout << "finish listening --- " << endl;
    }, 10);

    t1.join();
    t2.join();

    return 0;
}