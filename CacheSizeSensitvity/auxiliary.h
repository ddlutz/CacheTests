/*
 * auxiliary.h
 *
 *  Created on: Apr 26, 2012
 *      Author: Manos Athanassoulis
 *
 */

#ifndef AUX_H_
#define AUX_H_

#include <time.h>
#include <sys/time.h>

#ifdef __MACH__
#include <mach/clock.h>
#include <mach/mach.h>
#endif



//#warning "Using clock_gettime()"
typedef struct timespec my_clock;

/*For us and s accuracy of timings*/
void my_print_clock(my_clock clk);
int my_clock_get_time(my_clock *clk);
long getclock_diff_us(my_clock clk1, my_clock clk2);
long getclock_diff_ns(my_clock clk1, my_clock clk2);
double getclock_diff_s(my_clock clk1, my_clock clk2);


#endif /* AUX_H_ */
