#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

int p,q,r;
float square_mat[4][3]={{200,200,1},
                {300,200,1},
                {300,300,1},
                {200,300,1}};

float theta;
float tx=200;
float ty=200;
float rotate_mat[3][3]={{0},{0},{0}};
float result[4][3]={{0},{0},{0}};

void draw_square(){
        glColor3f(1,1,1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(square_mat[0][0],square_mat[0][1]);
	glVertex2f(square_mat[1][0],square_mat[1][1]);
        glVertex2f(square_mat[2][0],square_mat[2][1]);
        glVertex2f(square_mat[3][0],square_mat[3][1]);
	glEnd();
		
}

void multiply()
{
for(p=0;p<4;p++)
{
 for(q=0;q<3;q++)
  {
    result[p][q]=0;
    for(r=0;r<3;r++)
     {
       result[p][q]=result[p][q]+square_mat[p][r]*rotate_mat[r][q];
   
   }
  }
 }
}


void rotate()
{
  float m=-tx*cos(theta)+ty*sin(theta)+tx;
  float n=-tx*sin(theta)-ty*cos(theta)+ty;
  rotate_mat[0][0]=cos(theta);
  rotate_mat[0][1]=sin(theta);
  rotate_mat[0][2]=0;
  rotate_mat[1][0]=-sin(theta);
  rotate_mat[1][1]=cos(theta);
  rotate_mat[1][2]=0;
  rotate_mat[2][0]=m;
  rotate_mat[2][1]=n;
  rotate_mat[2][2]=1;
  multiply();
}


void init(){
	glClearColor(0.3,0.5,1,1);	
        glColor3f(1,0,0); 
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,500,0,500);
}

void display_result()
{
        glBegin(GL_LINE_LOOP);
       glColor3f(1,0,0);
        glVertex2f(result[0][0],result[0][1]);
	glVertex2f(result[1][0],result[1][1]);
        glVertex2f(result[2][0],result[2][1]);
        glVertex2f(result[3][0],result[3][1]);
	glEnd();
	glFlush();	
}

void display()
{
   draw_square();
   rotate();
   display_result();
   glFlush();
}



void main(int argc,char **argv)
{ 
     printf("enter the angle of rotation\n");
     scanf("%f",&theta);
     theta=(theta*3.14)/180;
     glutInit(&argc,argv);
     glutInitWindowSize(500,500);
     glutCreateWindow("ROTATION");
     init();
     glutDisplayFunc(display);
     glutMainLoop();
} 
