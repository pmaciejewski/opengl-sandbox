#include <GL/glut.h>
#include<stdio.h>

static int b, c;

void display(void)
{

   glClear (GL_COLOR_BUFFER_BIT);
   int ya,yb;
   int xa=-1,xb=1; //argumenty - trzeba policzyć dla malej wartosci, bo inaczej wyjdzie z zakresu 0.0-1.0 i wtedy nie rysuje wykresu
   


   /*
   obliczamy dwa punkty nalezace do wykresu funkcji liniowej
   */
   ya = b*xa+c;
   yb = b*xb+c;
   
   
   
 /* 
 cos na ksztalt ukladu wspolrzednych 
 */
  
 /* linia osi igrekow */
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINES);
    glVertex2i(0,50); 
    glVertex2i(0,-50);
  glEnd();
  
  /* linia osi iksow */
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINES);
    glVertex2i(50,0); 
    glVertex2i(-50,0);
  glEnd();
  
  /* wykres funkcji */
  glColor3f(0.55,1.0,1.0);
  glBegin(GL_LINE_LOOP);
    glVertex2i(xa,ya); 
    glVertex2i(xb,yb);
  glEnd();
    

   glFlush ();
}

void init (void) 
{
/* select clearing color 	*/
   glClearColor (0.0, 0.0, 0.0, 0.0);

/* initialize viewing values  */
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(50,50,50,50);
}


	    
int main(int argc, char** argv)
{
   
   scanf ("%d", &b);
   scanf ("%d", &c);
   
   
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (250, 250); 
   glutInitWindowPosition (200, 300);
   glutCreateWindow ("hello");
   glutFullScreen();
   init ();
   glutDisplayFunc(display); 
   glutMainLoop();
   
   return 0;  
}
