void shape_ctor(Shape *const me , int x0 , int y0 )      
{
  me->x = x0 ;
  me->y = y0 ;
}
void shape_moveBy(shape *const me , int dx , int dy)           
{
  me->x += dx ;
  me->y += dy ;
}
int shape_distanceFrom(shape *const me , shape *const other)
{
 int dx = me->x - other->x ;
 int dy = me->y - other->y ;
  if(dx < 0 )
      dx = -dx ;
  if(dy < 0 )
    dy = - dy  ;
  
  return dx+dy ;
}
