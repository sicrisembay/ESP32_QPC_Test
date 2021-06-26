# ESP32 QP/C Test
Test QP/C official port for ESP32.  This test uses the dining philosophers problem.

In this test, Legacy GNU Make build is used.  CMake will come later.

## Build Step
If you have already cloned esp-idf, proceed to step#2

### Step1: Clone ESP-IDF
```
git clone --recurse-submodules https://github.com/espressif/esp-idf.git
cd esp-idf
```
### Step2: Checkout ESP-IDF v4.3
```
git checkout release/v4.3
```
### Step3: Clone Test Project
```
git clone --recurse-submodules https://github.com/sicrisembay/ESP32_QPC_Test.git
cd ESP32_QPC_Test
```
### Step4: Build and Flash
```
make menuconfig
make -j8 flash monitor
```
Test result
```
I (0) cpu_start: App cpu up.
I (221) cpu_start: Pro cpu start user code
I (221) cpu_start: cpu freq: 160000000
I (221) cpu_start: Application information:
I (225) cpu_start: Project name:     esp32_qpc_test
I (231) cpu_start: App version:      05df307
I (236) cpu_start: Compile time:     Jun 26 2021 15:28:58
I (242) cpu_start: ELF file SHA256:  982d6959ce5b7352...
I (248) cpu_start: ESP-IDF:          v4.3-rc-2-g88c2b69c6
I (254) heap_init: Initializing. RAM available for dynamic allocation:
I (261) heap_init: At 3FFAE6E0 len 00001920 (6 KiB): DRAM
I (267) heap_init: At 3FFB84A8 len 00027B58 (158 KiB): DRAM
I (273) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (280) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (286) heap_init: At 4008AFD0 len 00015030 (84 KiB): IRAM
I (293) spi_flash: detected chip: generic
I (297) spi_flash: flash io: dio
I (302) sleep: Configure to isolate all GPIO pins in sleep state
I (308) sleep: Enable automatic switching of GPIO sleep configuration
I (315) cpu_start: Starting scheduler on PRO CPU.
I (0) cpu_start: Starting scheduler on APP CPU.
I (326) table: Philo0 thinking
I (326) table: Philo1 thinking
I (336) table: Philo2 thinking
I (336) table: Philo3 thinking
I (346) table: Philo4 thinking
I (346) qf_hooks: QF started.
I (346) main: Goodbye app_main()
I (846) table: Philo2 hungry
I (846) table: Philo2 eating
I (876) table: Philo0 hungry
I (876) table: Philo0 eating
I (996) table: Philo1 hungry
I (1076) table: Philo3 hungry
I (1776) table: Philo4 hungry
I (2486) table: Philo2 thinking
I (2486) table: Philo3 eating
I (2536) table: Philo0 thinking
I (2536) table: Philo1 eating
I (3366) table: Philo2 hungry
I (3566) table: Philo1 thinking
I (3856) table: Philo0 hungry
I (3856) table: Philo0 eating
```

## Build Tools

| Tool | Description | Version | Notes |
| --- | --- | --- | --- |
| ESP-IDF | Espressif Development Framework | v4.3 | Refer to ESP-IDF "Get Started" Guide to properly install prerequisite tools. Commit hash: 88c2b69 |
| QP/C | Real-time Embedded Framework | v6.9.3 | Commit hash: d51d8c5 |
| QM | QP Modeler (Model-based Design Tool) | v5.1.3 |    |

