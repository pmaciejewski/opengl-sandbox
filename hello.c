#include <GL/glut.h>

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
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINES);
    glVertex3f(0.25,0.45,0.0); 
    glVertex3f(0.65,0.55,0.0);
  glEnd();
  
  /*test*/
  float dod=0.0;
  int i;
  for (i=0;i<=4;i++) {
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINES);
    glVertex3f(0.25+dod,0.45+dod,0.0); 
    glVertex3f(0.65+2*dod,0.55+2*dod,0.0);
  glEnd();
  dod= dod+0.05;
  }
  
/* don't wait!  
 * start processing buffered OpenGL routines 
 */
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
