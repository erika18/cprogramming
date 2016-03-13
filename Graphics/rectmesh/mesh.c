#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#define dx 15
#define dy 15
#define max_x 20
#define max_y 25
GLfloat xa=50,ya=50,x[max_x],y[max_y];
int i,j;
void init()
{
  glClearColor(1.0,1.0,0.0,0.0);
  gluOrtho2D(0,499,0,499);
}
void disp()
{
  glClear(GL_COLOR_BUFFER_BIT);
  for(i=0;i<max_x;i++)
     x[i]=xa+i*dx;
   for(j=0;j<max_y;j++)
     y[j]=ya+j*dy;
   for(i=0;i<max_x-1;i++)
     for(j=0;j<max_y-1;j++)
     {
	glBegin(GL_LINE_LOOP);
        glColor3f(0.0,0.0,1.0);
        glVertex2d(x[i],y[j]);
        glVertex2d(x[i],y[j+1]);
        glVertex2d(x[i+1],y[j+1]);
        glVertex2d(x[i+1],y[j]);
        glEnd();
        glFlush();
     }
}
void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(800,600);
  glutInitWindowPosition(0,0);
  glutCreateWindow("Rectangular Mesh");
  glutDisplayFunc(disp);
  init();
  glutMainLoop();
}
