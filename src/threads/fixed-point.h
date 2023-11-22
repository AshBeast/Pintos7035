//
// Created by gbahugun on 11/21/23.
//

#ifndef PINTOS7035_FIXED_POINT_H
#define PINTOS7035_FIXED_POINT_H

typedef int fp;
#define p 17
#define q 14
#define f (1 << q)

#define convert_to_fp(n) ((n) * f)
#define convert_to_int_down(x) ((x) / f)
#define convert_to_int_nearest(x) ((x) >= 0 ? (((x) + (f/2)) / f) : (((x) - (f/2)) / f))
#define add_fp_int(x, n) ((x) + (n) * f)
#define subtract_fp_int(x, n) ((x) -(n) * f)
#define multiply_fp(x, y) ((((int64_t) (x)) * (y)) / f)
#define divide_fp(x,y) ((((int64_t) (x)) * f) / (y))

#endif //PINTOS7035_FIXED_POINT_H