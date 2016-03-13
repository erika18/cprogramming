#include <GL/glut.h>
#include <stdio.h>

void color()
{
  glClearColor(0.1,0.2,0.3,0.4);
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
}

void main (int argc,char**argv)
{
  glutInit (&argc, argv);
  glutInitWindowSize(500,200);
  glutCreateWindow("Sample");
  glutDisplayFunc(color);
  glutMainLoop();
}

