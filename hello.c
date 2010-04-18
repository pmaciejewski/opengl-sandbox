#include <GL/glut.h>
#include<stdio.h>

void display(void)
{
/* clear all pixels  */
   glClear (GL_COLOR_BUFFER_BIT);
   
 /* 
 cos na ksztalt ukladu wspolrzednych 
 */
  
 /* linia osi igrekow */
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINES);
    glVertex3f(0.50,0.0,0.0); 
    glVertex3f(0.50,1.0,0.0);
  glEnd();
  
  /* linia osi iksow */
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINES);
    glVertex3f(0.0,0.50,0.0); 
    glVertex3f(1.0,0.50,0.0);
  glEnd();
  
  /* wykres funkcji */
  glColor3f(0.55,1.0,1.0);
  glBegin(GL_LINES);
    glVertex3f(1,0.0,0.0); 
    glVertex3f(0.0,1.0,0.0);
  glEnd();
  
  

//   float dod=0.0;
//   int i;
//   for (i=0;i<=40;i++) {
//   glColor3f(1.0,1.0,1.0);
//   glBegin(GL_LINES);
//     glVertex3f(0.25+dod,0.45+dod,0.1); 
//     glVertex3f(0.65+dod,0.55+dod,0.0);
//   glEnd();
//   dod= dod+0.001;
//   }


   glFlush ();
}

void init (void) 
{
/* select clearing color 	*/
   glClearColor (0.0, 0.0, 0.0, 0.0);

/* initialize viewing values  */
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}


	    
int main(int argc, char** argv)
{
   
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
