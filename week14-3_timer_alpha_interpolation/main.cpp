///week14-3
#include <GL/glut.h>
float angle=0, oldAngle=0, newAngle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle, 0, 0, 1);
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    glutSwapBuffers();
}

void timer(int t)
{
    if(t<100) glutTimerFunc(500, timer , t+1);///在100之內 設定下一個
    float alpha = t/ 100.0; ///alpha 介於0.00~1.00之間
    angle =  newAngle*alpha + (1-alpha) * oldAngle; ///alpha內插公式
    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y)
{
    glutTimerFunc(0, timer, 0);
}

void mouse(int button, int state, int x , int y)
{
    if(state==GLUT_DOWN) oldAngle = x; ///按下去
    if(state==GLUT_UP) newAngle = x; ///放開來
    glutPostRedisplay();
}
void motion (int x, int y)
{
    angle = x;///即時更新角度
    glutPostRedisplay();
}

int main(int argc , char** argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week14");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);


    glutMainLoop();
}
