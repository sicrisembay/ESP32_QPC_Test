#include "qpc.h"
#include "esp_log.h"
#include "esp_system.h"
#include "esp_timer.h"

static const char * TAG = "qf_hooks";

void QF_onStartup(void)
{
    ESP_LOGI(TAG, "QF started.");

    /* Note: Additional hook stuff can be placed here */
}

IRAM_ATTR Q_NORETURN Q_onError(char const * const module, int_t const id)
{
    ESP_LOGE(TAG, "Q_onError: module:%s id:%d", module, id);
    esp_restart();
}

#ifdef Q_SPY

uint8_t QS_onStartup(void const *arg)
{
    (void)arg;
    /* TODO: initialize QSpy output channel (e.g. UART) here */
    return 1U; /* return success */
}

void QS_onCleanup(void)
{
    /* TODO: close QSpy output channel here */
}

void QS_onFlush(void)
{
    /* TODO: flush the QS trace buffer to the output channel (e.g. UART) here */
}

IRAM_ATTR QSTimeCtr QS_onGetTime(void)
{
    /* return a 32-bit microsecond timestamp */
    return (QSTimeCtr)esp_timer_get_time();
}

void QS_onCommand(uint8_t cmdId, uint32_t param1,
                  uint32_t param2, uint32_t param3)
{
    (void)cmdId;
    (void)param1;
    (void)param2;
    (void)param3;
    /* TODO: handle QSpy commands if needed */
}

#endif /* Q_SPY */