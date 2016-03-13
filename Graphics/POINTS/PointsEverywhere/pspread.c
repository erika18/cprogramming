#include <GL/glut.h>
#include <stdio.h>

void color()
{
  glClearColor(1.0,1.0,1.0,1.0);
  glClear(GL_COLOR_BUFFER_BIT);

  glPointSize(10);

  glBegin(GL_POINTS);

    //origin
    glColor3f(0.8,0.9,0.8);
    glVertex2f(0.0,0.0);
   //first quadrant
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.5,0.5);
   //second quadrant
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.5,0.5);
   // third quadrant
    glColor3f(0.0,0.0,1.0);
    glVertex2f(-0.5,-0.5);
   // fourth quadrant
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.5,-0.5);

  glEnd();

  glFlush();
}

void main (int argc,char**argv)
{
  glutInit (&argc, argv);
  glutInitWindowSize(500,200);
  glutCreateWindow("POINT WINDOW");
  glutDisplayFunc(color);
  glutMainLoop();
}

