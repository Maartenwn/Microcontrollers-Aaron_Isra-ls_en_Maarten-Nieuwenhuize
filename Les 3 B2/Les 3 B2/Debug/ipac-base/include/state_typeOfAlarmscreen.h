#include <time.h>
void typeOfAlarmscreen_keypressed(int keycode, void(*sm_setState)(int i,int* exitBuffer, int* entryBuffer));
void typeOfAlarmscreen_entry(int* buffer);
void typeOfAlarmscreen_loop (int* buffer, void(*sm_setState)(int,int* exitBuffer, int* entryBuffer) ,tm *gmt);
void typeOfAlarmscreen_exit (int* buffer);
