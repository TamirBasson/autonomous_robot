#ifndef PROTOTYPE_DRIVER_HPP
#define PROTOTYPE_DRIVER_HPP

#include <cmath>

class SerialCom {
public:
    int pwm_L;
    bool is_reverse_dir_L; // if true - going reverse
    int pwm_R;
    bool is_reverse_dir_R;
    bool gear; // if true - high gear
};

class PrototypeControl {
public:
    SerialCom compute_control(double throttle, double steering, bool is_low_gear);

void NewFunction(bool is_low_gear, double omega_L, int &pwm_L, double omega_R, int &pwm_R, bool &is_reverse_dir_L, bool &is_reverse_dir_R);

    int SpeedCtrl(double omega, int config);

private:
    // const double wheel_r = 0.175; // Wheel's radius [m]
    // const double d = 0.485;       // Wheels' distance [m]
    const double thres = 0.05;          // Threshold for mode switch (%)
    const int thr_sens = 1;                  // Throttle sensitivity
    const int SENS_F = 1;		     // Static rotation correction
    const int SENS_B = 1;		     // Static rotation correction
    const int MAX_PWM_F = 100;		// Maximum PWM output - forward
    const int MAX_PWM_B = 100;		// Maximum PWM output - backward
};


#endif // PROTOTYPE_DRIVER_HPP
