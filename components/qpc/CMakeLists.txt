set(srcs
    "qpc/ports/freertos-esp32/qf_port.c"
    "qpc/src/qf/qep_hsm.c"
    "qpc/src/qf/qep_msm.c"
    "qpc/src/qf/qf_act.c"
    # "qpc/src/qf/qf_actq.c"
    "qpc/src/qf/qf_defer.c"
    "qpc/src/qf/qf_dyn.c"
    "qpc/src/qf/qf_mem.c"
    "qpc/src/qf/qf_ps.c"
    "qpc/src/qf/qf_qact.c"
    "qpc/src/qf/qf_qeq.c"
    "qpc/src/qf/qf_qmact.c"
    "qpc/src/qf/qf_time.c"
    "qpc/src/qs/qstamp.c"
)

if(CONFIG_QPC_QSPY_ENABLE)
    list(APPEND srcs
        "qpc/src/qs/qs.c"
        "qpc/src/qs/qs_64bit.c"
        "qpc/src/qs/qs_fp.c"
        "qpc/src/qs/qs_rx.c"
        "qpc/src/qs/qutest.c"
    )
endif()

idf_component_register(
    SRCS
        ${srcs}
    INCLUDE_DIRS
        "qpc/include"
        "config"
        "qpc/ports/freertos-esp32"
    PRIV_INCLUDE_DIRS
        "qpc/src"
    REQUIRES
        freertos
)

target_compile_definitions(${COMPONENT_LIB} PUBLIC QP_CONFIG)

if(CONFIG_QPC_QSPY_ENABLE)
    target_compile_definitions(${COMPONENT_LIB} PUBLIC Q_SPY)
endif()
