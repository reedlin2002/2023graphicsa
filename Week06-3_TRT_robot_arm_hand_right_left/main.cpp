///Week06-3 從Week05-2 拿來用
///Week05-2_TRT_Robot 程式來自week05-1
///劃出大的身體、手臂
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
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清背景

    glPushMatrix();
        glTranslatef(0.25,0,0);///(3)要掛上去
        glRotatef(angle,0,0,1);///(2)轉動
        glTranslatef(0.25,0,0);///(1)把中心放在正中心
        drawHand();///右上手臂

        glPushMatrix();
            glTranslatef(0.25,0,0);///(3)要掛上去
            glRotatef(angle,0,0,1);///(2)轉動
            glTranslatef(0.25,0,0);///(1)把中心放在正中心
            drawHand();///右下手肘
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.25,0,0);///(3)要掛上去
        glRotatef(angle,0,0,1);///(2)轉動
        glTranslatef(-0.25,0,0);///(1)把中心放在正中心
        drawHand();///上手臂

        glPushMatrix();
            glTranslatef(-0.25,0,0);///(3)要掛上去
            glRotatef(angle,0,0,1);///(2)轉動
            glTranslatef(-0.25,0,0);///(1)把中心放在正中心
            drawHand();///下手肘
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
    angle++;///把角度++
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week06");

    glutDisplayFunc(display);
    glutIdleFunc(display); ///有空Idle時,就重畫畫面
    glutMainLoop();

}
