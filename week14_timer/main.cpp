#include <GL/glut.h>
#include <mmsystem.h>
#include <stdio.h>
void timer(int t){
    printf("�x��%d,�ڰ_�ɤF\n",t);
    PlaySound("do.wav",NULL,SND_ASYNC);
    printf("�]�w�U�@�Ӿx��\n");
    glutTimerFunc(1000,timer,t+1);
    printf("�]�n�x�� �A�^�h��");
}
void display()
{

}
int main(int argc,char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week14");

    glutTimerFunc(3000,timer,0);
    glutDisplayFunc(display);
    glutMainLoop();
}
