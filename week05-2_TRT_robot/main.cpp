///Week05-2_TRT_Robot �{���Ӧ�week05-1
///���X�j������B���u
#include <GL/glut.h>
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��

    glColor3f(0, 1, 0);///��⪺����
    glPushMatrix();
        glutSolidCube(0.5);

        glPushMatrix();
            glTranslatef(0.25,0.25,0);///(3)���ӪF��,���b�k�W��
            glRotatef(angle,0 ,0 ,1);///(2)���
            glTranslatef(0.25,0.25,0);///(1)���त��,��줤��
            ///glTranslatef(0.5, 0.5, 0);
            glColor3f(1,0,0);///���⪺���u
            glutSolidCube(0.5);
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
    angle++;///�⨤��++
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week05");

    glutDisplayFunc(display);
    glutIdleFunc(display); ///����Idle��,�N���e�e��
    glutMainLoop();

}
