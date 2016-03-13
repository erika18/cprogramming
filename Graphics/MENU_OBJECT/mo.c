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
void draw_pentagon()
{
	glClearColor(.3,.16,.4,1);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(5);

	glBegin(GL_POLYGON);
	glColor3f(.1,.1,.1);
	
	glVertex2f(x,y);
	glVertex2f(x+200,y);
	glVertex2f(x+200,y+200);
	glVertex2f(x+100,y+300);
	glVertex2f(x,y+200);

	glEnd();
	glFlush();	
	
}
void draw_triangle()
{
  glClearColor(0.1,0.2,0.3,0.4);
  glClear(GL_COLOR_BUFFER_BIT);

  glLineWidth(20);

  glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.0,0.0);

    glVertex2f(x,y);
    glVertex2f(x+200,y);
    glVertex2f(x+100,y+200);
  glEnd();

  glFlush();
}
void draw_square()
{
	glClearColor(.3,.16,.4,1);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(5);

	glBegin(GL_POLYGON);
	glColor3f(.1,.1,.1);
	
	glVertex2f(x,y);
	glVertex2f(x+200,y);
	glVertex2f(x+200,y+200);
	glVertex2f(x,y+200);

	glEnd();
	glFlush();	
	
}

void mymenu(int index)
{
  switch(index)
 {
   case(1):
    {
      draw_triangle();
      break;
     }
   case(2):
    {
      draw_square();
      break;
     }
case(3):
    {
      draw_pentagon();
      break;
     }

   case(4):
     {
       exit(0);
     }
}
}
  

void main (int argc,char**argv)
{
  glutInit (&argc, argv);
  glutInitWindowSize(500,500);
  glutCreateWindow("Menu Window");
  init();
  glutCreateMenu(mymenu);
  glutAddMenuEntry("Triangle",1);
  glutAddMenuEntry("Square",2);
  glutAddMenuEntry("Pentagon",3);
  glutAddMenuEntry("Exit",4);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
  glutMainLoop();
}
