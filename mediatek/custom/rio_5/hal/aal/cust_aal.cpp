#include "cust_aal.h"

int lcmCnt = 1;

struct CUST_AAL_ALS_DATA aALSCalData =
{
    // als
    { 5, 9, 36, 82, 132, 205, 273, 500, 1136, 2364, 4655, 6982},
    // lux
    { 0, 10, 40, 90, 145, 225, 300, 550, 1250, 2600, 5120, 7680}
};

struct CUST_AAL_LCM_DATA aLCMCalData[] =
{
    // LCM 0
    {
        {
              0.41,   0.41,   0.77,   1.82,   3.46,   5.94,  9.67,  13.32,  18.27,  23.98,
             31.63,  40.50,  50.9,  61.2,  72.9,  86.74, 100.9, 116.9, 132.7, 150.4,
            168.9, 190.2, 213.6, 235.7, 258.5, 286.9, 314.5, 346.8, 377.5, 410.3,
            448.8, 477.7, 509.2
        },
    }
};

struct CUST_AAL_PARAM aAALParam[] =
{
    // LCM 0    
    { 3, 6, 11, 2, 4, 5 },
};
