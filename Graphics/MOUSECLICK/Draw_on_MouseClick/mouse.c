#include<stdio.h>
#include<GL/glut.h>
int width=500,height=500;

float x1,y1,x2,y2;
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
 	 glVertex2f(x1,y1);
         glVertex2f(x2,y2);
	 glEnd();
	 glFlush();
}
void init(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,width,height,0);
}
void mymouse(int button,int state,int x,int y){
	if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN){
		x1=x;
                y1=y;
              drawpoint(x1,y1);
	}
        if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN){
              x2=x;
              y2=y; 
            drawline();
	}
}
void display(){
	glClearColor(1.1,1.1,1.1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();	
	
}
int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitWindowSize(width,height);
	glutCreateWindow("Mouse");
	init();
	glutDisplayFunc(display);
	glutMouseFunc(mymouse);	
	glutMainLoop();
return 0;
}
