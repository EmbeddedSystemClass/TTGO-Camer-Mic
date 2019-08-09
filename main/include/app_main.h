#include "app_camera.h"
#include "app_wifi.h"
#include "app_speech_srcif.h"
#include "app_httpd.h"

#define VERSION "0.9.0"

typedef enum
{
    WAIT_FOR_WAKEUP,
    WAIT_FOR_CONNECT,
    START_DETECT,
    START_RECOGNITION,
    START_ENROLL,
    START_DELETE,

} en_fsm_state;

extern en_fsm_state g_state;
