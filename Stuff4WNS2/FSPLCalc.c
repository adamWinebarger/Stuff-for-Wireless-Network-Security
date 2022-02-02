//#include "FSPLCalc.h"
#include "math.h"

#define c 299792458
#define pi M_PI


//For this:
//distance needs to be in meters
//freq in Hz
//c in m/s
//gtx and rtx are just transmitter gain and reciever gain... apparently we ignore these

long double fsplCalc(double distance, double frequency) {
    long double fspl = 10 * log10(pow((4 * pi * distance * frequency / c), 2));
    return fspl;
}

long double fsplCalc(double distance, double freq, double gtx, double rtx) {
    long double fspl = 20 * log10(distance) + 20 * log10(freq) + 20 * log10(4 * pi / c) - gtx - rtx;
    return fspl;
}

//Use this if your distance is in miles and your freq is in MHz
long double fspl366(double f, double d) {
    long double fspl = 36.6 + (20 * log10(f)) + (20 * log10(d));
    return fspl;
}

//Use this if your distance is in Km and your freq is in MHz
long double fspl324(double f, double d) {
    long double fspl = 32.4 + (20 * log10(f)) + (20 * log10(d));
    return fspl;
}
