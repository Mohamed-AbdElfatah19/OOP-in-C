#ifndef SHAPE_H
#define SHAPE_H

#include <stdint.h>


/* shape's attributes*/
typedef struct {
int x;  //x-coordinate of shape's position
int y;  //y-coordinate of shape's position
}Shape;

/* shape's operations or methods */
void shape_ctor(Shape *const me , int x0 , int y0 )            ;
void shape_moveBy(shape *const me , int dx , int dy)           ;
int shape_distanceFrom(shape *const me , shape *const other)   ;


#endif
