///把CodeBlocks重開, 不要剛剛舊專案 File-New-Empty 空白檔案存week11-3....cpp
///week11-3_PlaySound.cpp 可是他不能執行 因為找不到PlaySoundA
///PlaySoundA() 其實在winmm裡面 所以 step02-1要手動把winmm 加到 lib咒語裡
///比較OpenCV要3咒語, GLUT要5咒語, PlaySound要1咒語
///Setting-Compiler... 的 Linker Settings 要加上winmm
#include <windows.h>

int main()
{                                                                    /// 要等待同步 SND_SYNC
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\do.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\re.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\mi.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\fa.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\so.wav", NULL, SND_SYNC);
}
