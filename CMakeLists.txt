cmake_minimum_required(VERSION 3.22)

#
# This file is generated only once,
# and is not re-generated if converter is called multiple times.
#
# User is free to modify the file as much as necessary
#

# Setup compiler settings
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

set(Application_Src
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/Core/Src/usbd_core.c
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/Core/Src/usbd_ctlreq.c
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/Core/Src/usbd_ioreq.c
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/CDC_RNDIS/Src/usbd_cdc_rndis.c
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/App/usbd_conf.c
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/App/usb_device.c
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/App/usbd_desc.c
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/App/usbd_cdc_rndis_if.c
    ${CMAKE_SOURCE_DIR}/firmware/src/netconf.c
)

set(Include_Dirs
    ${CMAKE_SOURCE_DIR}/firmware/include
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/system
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/Core/Inc
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/CDC_RNDIS/Inc
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/App
    ${CMAKE_SOURCE_DIR}/firmware/USB_Device/Target
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include/lwip
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include/lwip/apps
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include/lwip/priv
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include/lwip/prot
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include/netif
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include/compat/posix
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include/compat/posix/arpa
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include/compat/posix/net
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include/compat/posix/sys
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/include/compat/stdc
)

set(LwIP_Src
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/auth.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/ccp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/chap_ms.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/chap-md5.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/chap-new.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/demand.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/eap.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/eui64.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/fsm.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/ipcp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/ipv6cp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/lcp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/magic.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/mppe.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/multilink.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/ppp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/pppapi.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/pppcrypt.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/pppoe.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/pppol2tp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/pppos.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/upap.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/utils.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/vj.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/bridgeif.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/bridgeif_fdb.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ethernet.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/lowpan6.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/lowpan6_ble.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/lowpan6_common.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/slipif.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/zepif.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/netif/ppp/ecp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/api/netbuf.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/api/netdb.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/api/netifapi.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/api/api_lib.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/api/api_msg.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/api/err.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/api/if_api.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/api/sockets.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/api/tcpip.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/def.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/raw.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/memp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/mem.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/tcp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/pbuf.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/timeouts.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/tcp_out.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/altcp_alloc.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/udp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/altcp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ip.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/netif.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/init.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/dns.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/sys.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/altcp_tcp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/stats.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/inet_chksum.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/tcp_in.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv4/ip4.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv4/etharp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv4/ip4_addr.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv4/ip4_frag.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv4/igmp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv4/dhcp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv4/icmp.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv4/autoip.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv6/ethip6.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv6/mld6.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv6/inet6.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv6/dhcp6.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv6/ip6_addr.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv6/nd6.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv6/ip6.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv6/ip6_frag.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/core/ipv6/icmp6.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/system/OS/sys_arch.c
    ${CMAKE_SOURCE_DIR}/firmware/LwIP/src/apps/mqtt/mqtt.c
)


# Define the build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

# Set the project name
set(CMAKE_PROJECT_NAME meisi_firmware)

# Include toolchain file
include("cmake/gcc-arm-none-eabi.cmake")

# Enable compile command to ease indexing with e.g. clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Core project settings
project(${CMAKE_PROJECT_NAME})
message("Build type: " ${CMAKE_BUILD_TYPE})

# Enable CMake support for ASM and C languages
enable_language(C ASM)

# Create an executable object type
add_executable(${CMAKE_PROJECT_NAME})

# Add STM32CubeMX generated sources
add_subdirectory(cmake/stm32cubemx)

# Link directories setup
target_link_directories(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined library search paths
)

# Add sources to executable
target_sources(${CMAKE_PROJECT_NAME} PRIVATE ${Application_Src} ${LwIP_Src})

# Add include paths
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${Include_Dirs})

# Add project symbols (macros)
target_compile_definitions(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined symbols
)

# Add linked libraries
target_link_libraries(${CMAKE_PROJECT_NAME}
    stm32cubemx

    # Add user defined libraries
)
