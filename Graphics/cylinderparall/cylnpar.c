#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
GLint xc=100,yc=100,r=50;
GLint x1=200,x2=300,y2=100,y3=175,y4=100,y5=175;

void draw_pixel(GLint cx,GLint cy)
{
  glColor3f(1.0,0.0,0.0);
  glBegin(GL_POINTS);
  glVertex2i(cx,cy);
  glEnd();
}
void plotpixels(GLint h,GLint k,GLint x,GLint y)
{
  draw_pixel(x+h,y+k);
  draw_pixel(-x+h,y+k);
  draw_pixel(x+h,-y+k);
  draw_pixel(-x+h,-y+k);
  draw_pixel(y+h,x+k);
  draw_pixel(-y+h,x+k);
  draw_pixel(y+h,-x+k);
  draw_pixel(-y+h,-x+k);
}
void circle_draw(GLint h,GLint k,GLint r)
{
  GLint d=1-r,x=0,y=r;
  while(y>x)
  {
    plotpixels(h,k,x,y);
    if(d<0)
      d+=2*x+3;
    else
    {
      d+=2*(x-y)+5;
      y--;
    }
    x++;
  }
  plotpixels(h,k,x,y);
}
void cylinder_draw()
{
  GLint i,n=50;
  for(i=0;i<n;i+=2)
    circle_draw(xc,yc+i,r);
}
void parallellopiped(GLint x11,GLint x21,GLint y21,GLint y31,GLint y41,GLint y51)
{
  glColor3f(0.0,0.0,1.0);
  glPointSize(2.0);
  glBegin(GL_LINE_LOOP);
  glVertex2i(x11,y21);
  glVertex2i(x21,y41);
  glVertex2i(x21,y51);
  glVertex2i(x11,y31);
  glEnd();
}
void parallellopiped_draw()
{
  GLint i,n=40;
  for(i=0;i<n;i++)
    parallellopiped(x1+i,x2+i,y2+i,y3+i,y4+i,y5+i);
}
void init()
{
  glClearColor(1.0,1.0,1.0,0.0);
  gluOrtho2D(0,400,0,400);
}
void disp()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0,1.0,0.0);
  glPointSize(2.0);
  cylinder_draw();
  parallellopiped_draw();
  glFlush();
}
void main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(800,600);
  glutInitWindowPosition(0,0);
  glutCreateWindow("Cylinder and Parallellopiped");
  glutDisplayFunc(disp);
  init();
  glutMainLoop();
}
