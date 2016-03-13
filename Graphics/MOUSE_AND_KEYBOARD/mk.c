#include<stdio.h>
#include<GL/glut.h>

int width=500,height=500;

float x1,y11,x2,y2;
void drawpoint(float x,float y){
	glPointSize(10);
	glBegin(GL_POINTS);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(x,y);
	glEnd();
	glFlush();
}

void drawline()
{
	 glLineWidth(10);         
	 glBegin(GL_LINES);
         glColor3f(0.0,0.0,0.0);
 	 glVertex2f(x1,y11);
         glVertex2f(x2,y2);
	 glEnd();
	 glFlush();
}
void init(){
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,width,height,0);
}
void mymouse(int button,int state,int x,int y){
	if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN){
		x1=x;
                y11=y;
              drawpoint(x1,y11);
	}
        if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN){
              x2=x;
              y2=y; 
            drawline();
	}
}

void draw_pentagon(int x,int y)
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
void draw_triangle(int x,int y)
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
void draw_square(int x,int y)
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

void mykey(unsigned char key,int x,int y)
{
  if(key == 't' || key == 'T')
    draw_triangle(x,y);  
  if(key == 's' || key == 'S')
    draw_square(x,y);
  if(key == 'p' || key == 'P')
    draw_pentagon(x,y);
}


void display(){
	glClearColor(1.0,1.0,1.0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();	
	
}
int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitWindowSize(width,height);
	glutCreateWindow("Mouse and keyboard window");
	init();
	glutDisplayFunc(display);
	glutMouseFunc(mymouse);	
        glutKeyboardFunc(mykey);
	glutMainLoop();
return 0;
}
