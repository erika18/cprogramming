#include <GL/glut.h>
#include <stdio.h>

float x=50,y=50,size=20;

void init()
{
  glClearColor(1,1,1,1);
  glClear(GL_COLOR_BUFFER_BIT);
  glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,500,500,0);
}
void display()
{
  glLineWidth(20);
 glBegin(GL_LINES);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(x,y);
    glVertex2f(x+size,y+size);

  glEnd();
  glFlush();
}

void mymenu(int index)
{
  switch(index)
 {
   case(1):
    {
      size=size+10;
      break;
     }
   case(2):
     {
       exit(0);
       break;
     }
}
glutPostRedisplay();
}
  

void main (int argc,char**argv)
{
  glutInit (&argc, argv);
  glutInitWindowSize(500,500);
  glutCreateWindow("Menu Window");
init();
  glutDisplayFunc(display);
  glutCreateMenu(mymenu);
  glutAddMenuEntry("Resize_line",1);
  glutAddMenuEntry("Exit",2);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
  glutMainLoop();
}
