# ESP32 QP/C Test
Test QP/C on ESP32-S3 microcontroller.  This test uses the dining philosophers problem.

## Build Tools

| Tool | Description | Version | Notes |
| --- | --- | --- | --- |
| ESP-IDF | Espressif Development Framework | 6.1 | Refer to ESP-IDF "Get Started" Guide to properly install prerequisite tools. Commit hash: 14f663f |
| QP/C | Real-time Embedded Framework | 7.4.0-rc.3 | Commit hash: d3f94c77 |
| QM | QP Modeler (Model-based Design Tool) | 7.0.1 |    |


## Build Step
If you have already cloned esp-idf, proceed to step#2

### Step1: Clone ESP-IDF
```
git clone --recurse-submodules https://github.com/espressif/esp-idf.git
cd esp-idf
```
### Step2: Checkout ESP-IDF v6.1
```
git checkout release/v6.1
```
### Step3: Clone Test Project
```
git clone --recurse-submodules https://github.com/sicrisembay/ESP32_QPC_Test.git
cd ESP32_QPC_Test
```
### Step4: Build and Flash
```
idf.py set-target esp32s3
idf.py menuconfig
idf.py build
idf.py -p COMx flash monitor
```
Test result
```
I (260) main_task: Started on CPU0
I (280) main_task: Calling app_main()
I (280) table: Philo0 thinking
I (280) table: Philo1 thinking
I (280) table: Philo2 thinking
I (280) table: Philo3 thinking
I (280) table: Philo4 thinking
I (280) qf_hooks: QF started.
I (290) ./main/main.c: Goodbye app_main()
I (290) main_task: Returned from app_main()
I (810) table: Philo4 hungry
I (810) table: Philo4 eating
I (1070) table: Philo3 hungry
I (1110) table: Philo1 hungry
I (1110) table: Philo1 eating
I (1380) table: Philo2 hungry
I (1520) table: Philo0 hungry
I (2630) table: Philo4 thinking
I (2630) table: Philo3 eating
I (2630) table: Philo1 thinking
I (2630) table: Philo0 eating
I (3240) table: Philo4 hungry
I (3900) table: Philo3 thinking
I (3900) table: Philo2 eating
I (3950) table: Philo0 thinking
I (3950) table: Philo4 eating
I (4110) table: Philo1 hungry
I (4660) table: Philo0 hungry
I (5140) table: Philo3 hungry
I (5700) table: Philo4 thinking
I (5700) table: Philo0 eating
I (5720) table: Philo2 thinking
I (5720) table: Philo3 eating
I (6430) table: Philo2 hungry
I (7090) table: Philo4 hungry
I (7510) table: Philo3 thinking
I (7510) table: Philo2 eating
I (7560) table: Philo0 thinking
I (7560) table: Philo4 eating
I (8210) table: Philo3 hungry
I (8260) table: Philo0 hungry
I (8910) table: Philo4 thinking
I (8910) table: Philo0 eating
```
