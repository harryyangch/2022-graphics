#include <GL/glut.h>
#include <mmsystem.h>
#include <stdio.h>
void timer(int t){
    printf("鬧鐘%d,我起床了\n",t);
    PlaySound("do.wav",NULL,SND_ASYNC);
    printf("設定下一個鬧鐘\n");
    glutTimerFunc(1000,timer,t+1);
    printf("設好鬧鐘 再回去睡");
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
