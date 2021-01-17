#include<rectangle.h>

void Rectangle_ctor(Rectangle *const me , int x0 , int y0 , int w0 , int h0 )
{
  Shape_ctor(&me->super , x0 , y0);  // base class ctor 
  
  /* init attributes added in this class */
  me->width  = w0  ;
  me->height = h0 ;

}
void Rectangle_draw(Rectangle const * const me )  
{
  // drawHorLine(me->super.x , me->super.y , me->width )            ;
  // drawVerLine(me->super.x , me->width , me->super.y , me->height);
}
int  Rectangle_area(Rectangle const * const me)
{
   return ((int)me->width) *((int)me->height)  ; 
}
