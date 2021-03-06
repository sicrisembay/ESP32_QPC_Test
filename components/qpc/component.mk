COMPONENT_DEPENDS := freertos

COMPONENT_ADD_INCLUDEDIRS += qpc/include
COMPONENT_ADD_INCLUDEDIRS += qpc/ports/freertos-esp32
COMPONENT_PRIV_INCLUDEDIRS += qpc/src

COMPONENT_SRCDIRS += qpc/ports/freertos-esp32
COMPONENT_SRCDIRS += qpc/src/qf
COMPONENT_SRCDIRS += qpc/include

ifdef CONFIG_QPC_QSPY_ENABLE
COMPONENT_SRCDIRS += qpc/src/qs
CFLAGS += -DQ_SPY
endif
