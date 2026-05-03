#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "----- Patriot Missile Timing Error Simulation -----\n";

    int ticks = 0;

    // Simulate 100 hours, updating every 0.1 seconds
    int run_time = 100 * 60 * 60 * 10;

    // Truncated approximation of 0.1 (binary representation cut off)
    double approx = 0.09999990463256836;

    double time = 0.0;

    for (int i = 0; i < run_time; i++) {
        ticks++;
        time = ticks * approx;
    }

    double exact = ticks * 0.1;

    cout << fixed << setprecision(15);
    cout << "Computed time: " << time << endl;
    cout << "Exact time:    " << exact << endl;
    cout << "Error:         " << exact - time << endl;

    return 0;
}
