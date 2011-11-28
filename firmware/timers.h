#ifndef TIMERS_H_INCLUDED
#define TIMERS_H_INCLUDED

void timer_setup(void);
void pwm_set(uint8_t motor, uint8_t speed);
void pwm_change(uint8_t motor, int8_t speed);

#endif

