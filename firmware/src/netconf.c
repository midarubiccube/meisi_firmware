#include "netconf.h"

#include "lwip/init.h"
#include "netif/ethernet.h"
#include "usbd_cdc_rndis_if.h"


struct netif rndis_netif; 
struct netif rndis_netif; //network interface
const ip_addr_t ipaddr  = IPADDR4_INIT_BYTES(IP_ADDR0, IP_ADDR1, IP_ADDR2, IP_ADDR3);
const ip_addr_t netmask = IPADDR4_INIT_BYTES(NETMASK_ADDR0, NETMASK_ADDR1, NETMASK_ADDR2, NETMASK_ADDR3);
const ip_addr_t gateway = IPADDR4_INIT_BYTES(GW_ADDR0, GW_ADDR1, GW_ADDR2, GW_ADDR3);


void LwIP_Init(void)
{
    struct netif  *netif = &rndis_netif;

    lwip_init();

    netif = netif_add(netif, &ipaddr, &netmask, &gateway, NULL, rndisif_init, ethernet_input);
    netif_set_default(netif);

    while (!netif_is_up(netif)) ;
}