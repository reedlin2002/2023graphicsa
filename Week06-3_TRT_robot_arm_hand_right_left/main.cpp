///Week06-3 �qWeek05-2 ���ӥ�
///Week05-2_TRT_Robot �{���Ӧ�week05-1
///���X�j������B���u
#include <GL/glut.h>
float angle = 0;
void drawHand()
{
    glPushMatrix();
        glScalef(1,0.3,0.3);
        glutSolidCube(0.5);
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��

    glPushMatrix();
        glTranslatef(0.25,0,0);///(3)�n���W�h
        glRotatef(angle,0,0,1);///(2)���
        glTranslatef(0.25,0,0);///(1)�⤤�ߩ�b������
        drawHand();///�k�W���u

        glPushMatrix();
            glTranslatef(0.25,0,0);///(3)�n���W�h
            glRotatef(angle,0,0,1);///(2)���
            glTranslatef(0.25,0,0);///(1)�⤤�ߩ�b������
            drawHand();///�k�U��y
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.25,0,0);///(3)�n���W�h
        glRotatef(angle,0,0,1);///(2)���
        glTranslatef(-0.25,0,0);///(1)�⤤�ߩ�b������
        drawHand();///�W���u

        glPushMatrix();
            glTranslatef(-0.25,0,0);///(3)�n���W�h
            glRotatef(angle,0,0,1);///(2)���
            glTranslatef(-0.25,0,0);///(1)�⤤�ߩ�b������
            drawHand();///�U��y
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
    angle++;///�⨤��++
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week06");

    glutDisplayFunc(display);
    glutIdleFunc(display); ///����Idle��,�N���e�e��
    glutMainLoop();

}
