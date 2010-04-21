#include <GL/glut.h>
#include<stdio.h>

static GLint b, c;

void display(void)
{

  
   glMatrixMode (GL_MODELVIEW);
   glLoadIdentity();
   
   glClear (GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
   glClearColor (0.0, 0.0, 0.0, 0.0);
   GLint ya,yb;
   GLint xa=50,xb=-50;
   


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
  glColor3f(1.0,0.7,1.0);
  glBegin(GL_LINES);
    glVertex2i(xa,ya); 
    glVertex2i(xb,yb);
  glEnd();
    

   glFlush ();
   glutSwapBuffers();
}




	    
int main(int argc, char** argv)
{
   
   scanf ("%d", &b);
   scanf ("%d", &c);
   
   
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE| GLUT_RGB);
   glutInitWindowSize (500, 500); 
   glutInitWindowPosition (200, 300);
   glutCreateWindow ("hello");
   glutFullScreen();
   glViewport(0, 0, 500, 500);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(-50,50,-50,50);
   glutDisplayFunc(display); 
   glutMainLoop();
   
   return 0;  
}
