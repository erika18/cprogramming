#include<GL/glut.h>
void display()
{
	 glLineWidth(5);
	 glBegin(GL_LINES);
	 glVertex2f(-20,10);
	 glVertex2f(30,-30);
	 glEnd();
	 glFlush();
}

void myinit()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,0,1);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50,50,-50,50);

}

void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutCreateWindow("sample");
	myinit();
	glutDisplayFunc(display);
	glutMainLoop();
}
