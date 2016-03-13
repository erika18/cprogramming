//LIANG BARKSY ALGORITHM 
#include <GL/glut.h>
#include <stdio.h>

double xmin=50,xmax=100,ymin=50,ymax=100;
double r[4],p[4],q[4];

void init()
{ 
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,300,0,300);
} 


double maximum()
{
   int i;
   double max=0;
   for(i=0;i<4;i++)
   {
	if(p[i]<0){	
		if(max<r[i])
	   	{
		   max=r[i];
		}
	}
   }

   return max;
}


double minimum()
{
   int i;
   double min=1;
   for(i=0;i<4;i++)
   {
	if(p[i]>0){	
		if(min>r[i])
	   	{
		   min=r[i];
		}
	}
    }

   return min;
}



void liang_barsky(double x0,double y00,double x1,double y11)
{
double x=x0,y=y00;	
double t1=0,t2=1;
	double dx=x1-x0; 
	double dy=y11-y00; 
	int i;
	
	int reject=0;

	p[0]=-dx; 
	q[0]=  x0-xmin;

	p[1]=dx; 
	q[1]=  xmax-x0;

	p[2]=-dy; 
	q[2] = y00-ymin;

        p[3]=dy;  
        q[3]=  ymax-y00;
    	

	for(i=0;i<4;i++){
		if(p[i]==0 && q[i]<0){
			reject=1;
			break;
}

		 else{
		
				 r[i]=q[i]/p[i];
}

}

			t1=maximum();
			t2=minimum();
			if(t1>t2)
				{
glBegin(GL_LINE_LOOP);       
	  glColor3f(1,0,0);
	  glVertex2f(xmin+150,ymin+150);
	  glVertex2f(xmax+150,ymin+150);
	  glVertex2f(xmax+150,ymax+150);
	  glVertex2f(xmin+150,ymax+150);
	  glEnd();
}		


		
		
		
	
        if(reject == 0){
                 x1=x+(dx*t2);
		y11=y+(dy*t2);

		x0=x+(dx*t1);
		y00=y+(dy*t1);
	
	glBegin(GL_LINE_LOOP);       
	  glColor3f(1,0,0);
	  glVertex2f(xmin+150,ymin+150);
	  glVertex2f(xmax+150,ymin+150);
	  glVertex2f(xmax+150,ymax+150);
	  glVertex2f(xmin+150,ymax+150);
	  glEnd();
	  glBegin(GL_LINES);       
	  glColor3f(0,1,0);
	  glVertex2f(150+x0,150+y00);
	  glVertex2f(150+x1,150+y11);
	  glEnd();
	  glFlush();
	}
               
}


void display(){
  double x0=60,y00=20,x1=100,y11=120; 
   
  glClearColor(0,0,0,1);
  glClear(GL_COLOR_BUFFER_BIT);

  glBegin(GL_LINE_LOOP);       
  glColor3f(1,0,0);
  glVertex2f(xmin,ymin);
  glVertex2f(xmax,ymin);
  glVertex2f(xmax,ymax);
  glVertex2f(xmin,ymax);
  glEnd();

  
  glBegin(GL_LINES);       
  glColor3f(0,1,0);
  glVertex2f(x0,y00);
  glVertex2f(x1,y11);
  glEnd();

  liang_barsky(x0,y00,x1,y11);

  glFlush();     
  
}


int main(int argc,char *argv[])
{
  
  glutInit(&argc,argv);
  glutInitWindowSize(750,750);
  glutCreateWindow("liang barsky algorithm");
  init(); 
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
