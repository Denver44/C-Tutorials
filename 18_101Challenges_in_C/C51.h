#define PI 3.14
#define AREAC(x) (PI * x*x)
#define PERIC(x) (2*PI*x)
#define AREAS(x) (x*x)
#define PERIS(x) (4*x)
#define PERIT(x,y,z) (x+y+z)
#define SPERIT(x,y,z) ((x+y+z)/2)
#define AREAT(x,y,z) sqrt(SPERIT(x,y,z)*(SPERIT(x,y,z)-x)*(SPERIT(x,y,z)-y)*(SPERIT(x,y,z)-z))
