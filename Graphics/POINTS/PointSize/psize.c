#include <GL/glut.h>
#include <stdio.h>

void color()
{
  glClearColor(0.1,0.2,0.3,0.4);
  glClear(GL_COLOR_BUFFER_BIT);

  glPointSize(20);

  glBegin(GL_POINTS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.0,0.0);
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

