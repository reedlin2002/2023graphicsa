///Week04-3 �{��copy�Ӧ�week04-1
#include <GL/glut.h>
float angle = 0; ///�ŧiglobal�����ܼ�angle
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///�ƥ��x�}
        glTranslated(0.6, 0, 0);
        glRotated(angle, 0, 1, 0); ///����angle����
        glColor3f(1,1,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    glPushMatrix();///�ƥ��x�}
        glRotated(angle, 0, 1, 0); ///����angle����
        glTranslated(0.6, 0, 0);
        glColor3f(1,0,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix();

    glutSwapBuffers();///�٭�x�}
    angle++; ///�⨤��++
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04");

    glutDisplayFunc(display);
    glutIdleFunc(display); ///����Idle��,�N���e�e��
    glutMainLoop();

}
