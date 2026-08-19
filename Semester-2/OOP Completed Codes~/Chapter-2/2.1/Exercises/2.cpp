#include <iostream>
#include <ctime>
using namespace std;

class Stopwatch {
private:
    double startTime, endTime;
    bool running;
public:
    Stopwatch() {
        startTime = 0;
        endTime = 0;
        running = false;
    }
    ~Stopwatch() {
        cout << "Stopwatch destroyed" << endl;
    }
    void start() {
        startTime = clock() / CLOCKS_PER_SEC;
        running = true;
    }
    void stop() {
        if (running) {
            endTime = clock() / CLOCKS_PER_SEC;
            running = false;
        }
    }
    void show() {
        double elapsedTime;
        if (running) {
            double currentTime = clock() / CLOCKS_PER_SEC;
            elapsedTime = currentTime - startTime;
        }else {
            elapsedTime = endTime - startTime;
        }
        cout << "Elapsed time: " << elapsedTime << " seconds" << endl;
    }

};
int main() {
    Stopwatch sw;
    cout << "Starting the stopwatch" << endl;
    sw.start();
    for (long int i = 0; i < 2000000000; i++) {
    }
    sw.stop();
    cout << "Stopped the stopwatch" << endl;
    sw.show();
    return 0;
}