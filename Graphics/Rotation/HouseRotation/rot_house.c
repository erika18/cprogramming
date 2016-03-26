#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

float theta;

GLfloat square[9][3]={{200,200,1},{300,200,1},{300,300,1},{200,300,1},{250,400,1},{225,200,1},{275,200,1},{275,250,1},{225,250,1}};
GLfloat rot_mat[3][3],m,n,res[9][3];
GLfloat tx=200,ty=200;
int p,q,r;

void multiply()
{
for(p=0;p<9;p++)
{
for(q=0;q<3;q++)
{
res[p][q]=0;
for(r=0;r<3;r++)
{
res[p][q]=res[p][q]+square[p][r]*rot_mat[r][q];
}
}
}
for(p=0;p<5;p++)
{
for(q=0;q<3;q++)
{
printf("%f\t",res[p][q]);
}
printf("\n");
}
}

void rotate()
{
m=(-tx*cos(theta))+(ty*sin(theta))+tx;
n=(-tx*sin(theta))-(ty*cos(theta))+ty;
rot_mat[0][0]=cos(theta);
rot_mat[0][1]=sin(theta);
rot_mat[0][2]=0;
rot_mat[1][0]=-sin(theta);
rot_mat[1][1]=cos(theta);
rot_mat[1][2]=0;
rot_mat[2][0]=m;
rot_mat[2][1]=n;
rot_mat[2][2]=1;
multiply();
}

void draw_square()
{
glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_LINE_LOOP);
glColor3f(1,0,0);
glVertex2f(square[0][0],square[0][1]);
glVertex2f(square[1][0],square[1][1]);
glVertex2f(square[2][0],square[2][1]);
glVertex2f(square[3][0],square[3][1]);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(1,0,0);
glVertex2f(square[2][0],square[2][1]);
glVertex2f(square[3][0],square[3][1]);
glVertex2f(square[4][0],square[4][1]);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(1,0,0);
glVertex2f(square[5][0],square[5][1]);
glVertex2f(square[6][0],square[6][1]);
glVertex2f(square[7][0],square[7][1]);
glVertex2f(square[8][0],square[8][1]);
glEnd();
}

void draw_finalsquare()
{
glBegin(GL_LINE_LOOP);
glColor3f(0,0,1);
glVertex2f(res[0][0],res[0][1]);
glVertex2f(res[1][0],res[1][1]);
glVertex2f(res[2][0],res[2][1]);
glVertex2f(res[3][0],res[3][1]);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(0,0,1);
glVertex2f(res[2][0],res[2][1]);
glVertex2f(res[3][0],res[3][1]);
glVertex2f(res[4][0],res[4][1]);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(0,0,1);
glVertex2f(res[5][0],res[5][1]);
glVertex2f(res[6][0],res[6][1]);
glVertex2f(res[7][0],res[7][1]);
glVertex2f(res[8][0],res[8][1]);
glEnd();
}

void display()
{
draw_square();
rotate();
draw_finalsquare();
glFlush();
}


void init()
{
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,500,0,500);
}

int main(int argc,char * argv[])
{
 printf("enter the angle of rotation\n");
     scanf("%f",&theta);
     theta=(theta*3.14)/180;
glutInit(&argc,argv);
glutInitWindowPosition(20,20);
glutInitWindowSize(500,500);
glutCreateWindow("House");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
