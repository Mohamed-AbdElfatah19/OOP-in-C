#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<shape.h>

/* Rectangle's attribute..*/
typedef struct {
  Shape super  ;   //inherited shape 
    
    /* attributes specific to this class*/
    int width  ;
    int height ;
}Rectangle;

/* Rectangle's operations...*/
void Rectangle_ctor(Rectangle *const me , int x0 , int y0 , int w0 , int h0 );
void Rectangle_draw(Rectangle const * const me )  ;
int  Rectangle_area(Rectangle const * const me)   ;


#endif



