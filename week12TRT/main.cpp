#include <GL/glut.h>
float angle=0;
void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///�զ⪺
    glutSolidTeapot(0.3);///�j����
    glPushMatrix();
        glTranslatef(0,0,0);///���k�U����
        glRotatef(angle,0,0,1);///����
        glColor3f(1,0,0);
        glutSolidTeapot(0.2);
    glPopMatrix();
    glutSwapBuffers();
    angle+=0.1;
}
int main(int argc,char**argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week12 TRT");
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
