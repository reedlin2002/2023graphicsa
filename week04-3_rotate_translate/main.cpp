///Week04-3 程式copy來自week04-1
#include <GL/glut.h>
float angle = 0; ///宣告global全域變數angle
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///備份矩陣
        glTranslated(0.6, 0, 0);
        glRotated(angle, 0, 1, 0); ///旋轉angle角度
        glColor3f(1,1,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    glPushMatrix();///備份矩陣
        glRotated(angle, 0, 1, 0); ///旋轉angle角度
        glTranslated(0.6, 0, 0);
        glColor3f(1,0,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix();

    glutSwapBuffers();///還原矩陣
    angle++; ///把角度++
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04");

    glutDisplayFunc(display);
    glutIdleFunc(display); ///有空Idle時,就重畫畫面
    glutMainLoop();

}
