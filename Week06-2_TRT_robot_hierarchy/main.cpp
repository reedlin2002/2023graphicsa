///Week06-2_TRT_robot_hierarchy
///很多不同的連結狀況,而且手臂會帶手肘轉動
#include <GL/glut.h>
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    ///glutSolidSphere(0.02,30,30);///正中心的圓球
    glutSolidTeapot(0.3);///step02-1 身體

    glPushMatrix();///右手臂
        ///step02-1先註解掉 glTranslatef(-0.5,0.5,0);
        glTranslatef(0.5,0.13,0);///step02-2 新的
        glRotatef(angle,0,0,1);///(2)轉
        glTranslatef(0.444,-0.05,0);///(1)把轉動的中心,放在中心
        glutSolidTeapot(0.3);

        glPushMatrix();///右手肘
            glTranslatef(0.5,0.13,0);///step02-2 新的
            glRotatef(angle,0,0,1);///(2)轉
            glTranslatef(0.444,-0.05,0);///(1)把轉動的中心,放在中心
            glutSolidTeapot(0.3);
        glPopMatrix();
glPopMatrix();

    glutSwapBuffers();
    angle++;
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week06");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
