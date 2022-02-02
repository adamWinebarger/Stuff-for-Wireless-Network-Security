#include <iostream>
#include <math.h>

//#include "FSPLCalc.h"
#include "FSPLCalc.c"

#define light 299792458
#define pi M_PI
using namespace std;

long double superLog(double numberWeWant2Log, double newBase) {

    return log10(numberWeWant2Log) / log10(newBase);
}

long double getDBM(double pmw) {
    long double dbm = 10 * log10(pmw);
    return dbm;
}

long double getMW(double dbm) {
    long double mw = pow(10, (dbm / 10));
    return mw;
}

double giga(double input) {
    return input * 1000000000;
}

double mega(double input) {
    return input * 1000000;
}

int main(int argc, char **argv) {

    double distanceVals [] = {0.1, 0.2, 0.4};
    double frequency = 2400;
    double db [] = {3, 6, 10};
    double tx = 100, rx = 0.000001;
    double gtx = getDBM(tx), rtx = getDBM(rx);

    cout << gtx << " " << rtx << endl;

    //cout << fsplCalc(100, giga(2.4), gtx, rtx) << endl;

    cout << fspl324(5000, 10) << endl;
    cout << "Press Enter to exit...";
    cin.ignore().get();
    return 0;
}
