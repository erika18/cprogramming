#include<stdio.h>
#include<GL/glut.h>
void tree(){
	glClearColor(.1,.1,.1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(5);

	glBegin(GL_LINES);
	glColor3f(0,1,0);
//base
	glVertex2f(-.1,-.4);
	glVertex2f(.1,-.4);

	glVertex2f(-.5,0);
	glVertex2f(.5,0);		
	
	glVertex2f(-.1,0);
	glVertex2f(-.1,-.4);

	glVertex2f(.1,0);
	glVertex2f(.1,-.4);
//cross line1
	glVertex2f(-.2,.1);
	glVertex2f(-.5,0);

	glVertex2f(.2,.1);
	glVertex2f(.5,0);
//straight 1
	glVertex2f(-.2,.1);
	glVertex2f(-.4,.1);
	
	glVertex2f(.2,.1);
	glVertex2f(.4,.1);

//cross line2
	glVertex2f(-.1,.2);
	glVertex2f(-.4,.1);

	glVertex2f(.1,.2);
	glVertex2f(.4,.1);
//straight 2
	glVertex2f(-.1,.2);
	glVertex2f(-.3,.2);
	
	glVertex2f(.1,.2);
	glVertex2f(.3,.2);
//peak
	glVertex2f(-.3,.2);
	glVertex2f(0,.4);
	
	glVertex2f(.3,.2);
	glVertex2f(0,.4);


	glEnd();
	glFlush();	
	
}
void main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitWindowSize(600,600);
	glutCreateWindow("Tree");
	glutDisplayFunc(tree);
	glutMainLoop();
}
