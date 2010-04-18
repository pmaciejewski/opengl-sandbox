#include<GL/glut.h>
#include<stdio.h>
#include<string.h>


void display(void) {
  glColor3f (1.0, 1.0,1.0);
  glBegin(GL_LINES);
    glVertex2f(2.0,3.0);
    glVertex2f(4.0,5.0);
    
    glEnd();
   
}


int main(int argc, char **argv) {

  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutCreateWindow("okno");
  glClearColor(0.0, 0.0, 0.0, 0.0); 
  glClear(GL_COLOR_BUFFER_BIT);
  //glutDisplayFunc(display);
  glutMainLoop();



return 0; 


}