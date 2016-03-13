#include<stdio.h>
#include<GL/glut.h>
void car(){
	glClearColor(.3,.16,.4,1);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(5);

	glBegin(GL_POLYGON);
	glColor3f(.1,.1,.1);
	
	glVertex2f(.6,.6);
	glVertex2f(.6,-.6);
	glVertex2f(-.6,-.6);
	glVertex2f(-.6,.6);

	glEnd();
	glFlush();	
	
}
void main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitWindowSize(600,600);
	glutCreateWindow("CAR");
	glutDisplayFunc(car);
	glutMainLoop();
}
