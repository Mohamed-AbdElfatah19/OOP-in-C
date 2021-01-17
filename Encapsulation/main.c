#include<shape.h>

Shape s1 ; // static allocation

int main(void)
{
  Shape s2 ; // automatic allocation
  Shape *ps3 = malloc(sizeof(Shape)); // dynamic allocation 
  
  /*  act as Constructor...*/
  shape_ctor(&s1,1,2);
  shape_ctor(&s2,3,4);
  shape_ctor(s3,5,6) ;
  
  shape_moveBy(&s1,7,8)    ;
  shape_moveBy(&s2,15,12)  ;
  shape_moveBy(s3,-1,5)    ;
  
  
  
  free(ps3)  ;
  
 return 0 ; 
}
