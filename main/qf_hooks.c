#include "qpc.h"
#include "esp_log.h"

static const char * TAG = "qf_hooks";

void QF_onStartup(void)
{
    ESP_LOGI(TAG, "QF started.");

    /* Note: Additional hook stuff can be placed here */
}

IRAM_ATTR void Q_onAssert(char_t const * const module, int_t location)
{
    ESP_LOGE(TAG, "Q_onAssert: module:%s loc:%d\n", module, location);
}