#pragma once

void LwIP_Init(void);

/*Static IP ADDRESS: IP_ADDR0.IP_ADDR1.IP_ADDR2.IP_ADDR3 */
#define IP_ADDR0   192
#define IP_ADDR1   168
#define IP_ADDR2   7
#define IP_ADDR3   1

/*DHCP Client addresses: IP_ADDR0.IP_ADDR1.IP_ADDR2.DHCP_ADDR_x*/
#define DHCP_ADDR_1     2
#define DHCP_ADDR_2     3

/*NETMASK*/
#define NETMASK_ADDR0   255
#define NETMASK_ADDR1   255
#define NETMASK_ADDR2   255
#define NETMASK_ADDR3   0

/*Gateway Address*/
#define GW_ADDR0   0
#define GW_ADDR1   0
#define GW_ADDR2   0
#define GW_ADDR3   0