#
# Copyright (c) 2015-2017 The Linux Foundation. All rights reserved.
#

QCA_LITHIUM:=kmod-qvit-lithium
QCA_EDMA:=kmod-qca-edma
NSS_COMMON:= \
	kmod-qca-nss-drv \
	kmod-qca-nss-gmac \
	$(QCA_EDMA)

NSS_DELUXE:= \
	kmod-qca-nss-dp \
	kmod-qca-nss-drv \
	qca-nss-fw-hk-retail \
	$(QCA_EDMA)

NSS_STANDARD:= \
	qca-nss-fw2-retail

NSS_ENTERPRISE:= \
	qca-nss-fw2-enterprise \
	qca-nss-fw2-enterprise_custA \
	qca-nss-fw2-enterprise_custC \
	qca-nss-fw2-enterprise_custR

NSS_MACSEC:= \
	kmod-qca-nss-macsec \
	qca-wpa-supplicant-10.4-macsec

NSS_MACSEC_11:= \
	kmod-qca-nss-macsec \
	qca-wpa-supplicant-11.0-macsec

QCA_ECM:= kmod-qca-nss-ecm
QCA_ECM_PREMIUM:= kmod-qca-nss-ecm-premium
QCA_ECM_ENTERPRISE:= kmod-qca-nss-ecm-noload

NSS_CLIENTS:= kmod-qca-nss-drv-qdisc kmod-qca-nss-drv-profile kmod-qca-nss-drv-tun6rd \
	kmod-qca-nss-drv-tunipip6 kmod-qca-nss-drv-l2tpv2 kmod-qca-nss-drv-pptp \
	kmod-qca-nss-drv-map-t kmod-qca-nss-drv-lag-mgr
NSS_CLIENTS_ENTERPRISE:= kmod-qca-nss-drv-qdisc kmod-qca-nss-drv-profile

# Once all NSS clients get ported to 4.4 we can use NSS_CLIENTS instead.
NSS_CLIENTS_DELUX:= kmod-qca-nss-drv-ppe-qdisc kmod-qca-nss-drv-qdisc kmod-qca-nss-drv-bridge-mgr \
                    kmod-qca-nss-drv-tun6rd kmod-qca-nss-drv-tunipip6 \
                    kmod-qca-nss-drv-l2tpv2 kmod-qca-nss-drv-pptp \
                    kmod-qca-nss-drv-map-t kmod-qca-nss-drv-lag-mgr

NSS_CRYPTO:= kmod-qca-nss-crypto kmod-qca-nss-cfi kmod-qca-nss-drv-ipsecmgr

HW_CRYPTO:= kmod-crypto-qcrypto

SHORTCUT_FE:= kmod-shortcut-fe kmod-shortcut-fe-cm kmod-shortcut-fe-drv
QCA_RFS:= kmod-qca-rfs

SWITCH_SSDK_PKGS:= kmod-qca-ssdk-hnat qca-ssdk-shell swconfig
SWITCH_SSDK_NOHNAT_PKGS:= kmod-qca-ssdk-nohnat qca-ssdk-shell swconfig
SWITCH_OPEN_PKGS:= kmod-switch-ar8216 swconfig

WIFI_OPEN_PKGS:= kmod-ath9k kmod-ath10k wpad-mesh hostapd-utils \
		 kmod-art2-netlink sigma-dut-open wpa-cli qcmbr-10.4-netlink \
		 athtestcmd ath10k-firmware-qca988x ath10k-firmware-qca9887 \
		 ath10k-firmware-qca9888 ath10k-firmware-qca9984 \
		 ath10k-firmware-qca4019

WIFI_10_4_PKGS:=kmod-qca-wifi-10.4-unified-profile \
    qca-hostap-10.4 qca-hostapd-cli-10.4 qca-wpa-supplicant-10.4 \
    qca-wpa-cli-10.4 qca-spectral-10.4 \
    qcmbr-10.4 qca-wrapd-10.4 qca-acfg-10.4 \
    athdiag qca-iface-mgr-10.4 qca-lowi

WIFI_11_0_PKGS:=kmod-qca-wifi-11.0-unified-profile \
	qca-hostap-11.0 qca-hostapd-cli-11.0 qca-wpa-supplicant-11.0 \
	qca-wpa-cli-11.0 qca-spectral-11.0 qca-wpc-10.4 sigma-dut-10.4 \
	qcmbr-10.4 qca-wrapd-11.0 qca-wapid qca-acfg-11.0 whc whc-ui \
	qca-lowi qca-iface-mgr-10.4 qca-icm qca-cfg80211 athdiag

WIFI_10_4_FW_PKGS:=qca-wifi-fw-hw5-10.4-asic

WIL6210_PKGS:=kmod-wil6210 wigig-firmware iwinfo qca-fst-manager

OPENWRT_STANDARD:= \
	luci openssl-util

STORAGE:=kmod-scsi-core kmod-usb-storage kmod-nls-cp437 kmod-nls-iso8859-1  \
	kmod-fs-msdos kmod-fs-vfat kmod-fs-ntfs ntfs-3g e2fsprogs

USB_ETHERNET:= kmod-usb-net-rtl8152 kmod-usb-net

TEST_TOOLS:=sysstat ethtool i2c-tools

UTILS:=iperf rng-tools

COREBSP_UTILS:=qca-thermald-10.4

FAILSAFE:= kmod-bootconfig

NETWORKING:=mcproxy -dnsmasq dnsmasq-dhcpv6 bridge ip-full trace-cmd \
	rp-pppoe-relay iptables-mod-extra iputils-tracepath iputils-tracepath6 \
	kmod-nf-nathelper-extra kmod-ipt-nathelper-rtsp \
	luci-app-upnp luci-app-ddns luci-proto-ipv6 \
	luci-app-multiwan

CD_ROUTER:=kmod-ipt-ipopt kmod-bonding kmod-nat-sctp lacpd \
	arptables ds-lite 6rd ddns-scripts xl2tpd \
	quagga quagga-ripd quagga-zebra quagga-watchquagga quagga-vtysh \
	kmod-ipv6 ip6tables iptables-mod-ipsec iptables-mod-filter \
	isc-dhcp-relay-ipv4 isc-dhcp-relay-ipv6 \
	rp-pppoe-server ppp-mod-pptp

BLUETOOTH:=kmod-bluetooth bluez-libs bluez-utils kmod-ath3k

BLUETOPIA:=bluetopia

ZIGBEE:=zigbee_efr32

QOS:=tc kmod-sched kmod-sched-core kmod-sched-connmark kmod-ifb iptables \
	iptables-mod-filter iptables-mod-ipopt iptables-mod-conntrack-extra

MAP_PKGS:=map-t

HYFI:=hyfi hyfi-ui
PLC:=qca-plc-serv qca-plc-fw

AQ_PHY:=kmod-aq_phy kmod-qca_85xx_sw
#These packages depend on SWITCH_SSDK_PKGS
IGMPSNOOING_RSTP:=rstp qca-mcs-apps

IPSEC:=openswan kmod-ipsec kmod-ipsec4 kmod-ipsec6

AUDIO:=kmod-sound-soc-ipq alsa

VIDEO:=kmod-qpic_panel_ertft

KPI:=iperf sysstat

USB_DIAG:=kmod-usb-f-diag

ifneq ($(LINUX_VERSION),3.18.21)
	EXTRA_NETWORKING:=$(NSS_COMMON) $(NSS_STANDARD) $(CD_ROUTER) -lacpd \
	$(HW_CRYPTO) $(QCA_RFS) $(AUDIO) $(VIDEO) -rstp \
	$(IGMPSNOOING_RSTP) $(IPSEC) $(QOS) $(QCA_ECM_PREMIUM) $(NSS_MACSEC) \
	$(NSS_CRYPTO) $(NSS_CLIENTS) $(MAP_PKGS) $(AQ_PHY) $(FAILSAFE) \
	$(SWITCH_OPEN_PKGS)
endif

define Profile/QSDK_Open
	NAME:=Qualcomm-Atheros SDK Open Profile
	PACKAGES:=$(OPENWRT_STANDARD) $(SWITCH_SSDK_NOHNAT_PKGS) $(QCA_EDMA) \
	$(WIFI_OPEN_PKGS) $(STORAGE) $(USB_ETHERNET) $(UTILS) $(NETWORKING) \
	$(COREBSP_UTILS) $(KPI) $(SHORTCUT_FE) $(EXTRA_NETWORKING)
endef

define Profile/QSDK_Open/Description
	QSDK Open package set configuration.
	Enables wifi open source packages
endef

$(eval $(call Profile,QSDK_Open))

define Profile/QSDK_Premium
	NAME:=Qualcomm-Atheros SDK Premium Profile
	PACKAGES:=$(OPENWRT_STANDARD) $(NSS_COMMON) $(SWITCH_SSDK_PKGS) \
		$(WIFI_10_4_PKGS) $(WIFI_10_4_FW_PKGS) \
		$(UTILS) $(SHORTCUT_FE) $(QCA_RFS) \
		$(QCA_ECM_PREMIUM) \
		kmod-qca-nss-macsec $(TEST_TOOLS) $(COREBSP_UTILS) \
		$(AQ_PHY) \
		kmod-qca-hyfi-bridge kmod-qca-hyfi-iptv-helper kmod-qca-hyfi-qdisc libhyficommon libieee1905 libstorage libwpa2 \
		luci-hyfi luci-hyfi-advanced luci-whc-lbd luci-whc-lbd-advanced luci-whc-lbd-diaglog luci-whc-repacd \
		luci-whc-repacd-advanced luci-wsplc luci-wsplc-advanced qca-acd qca-hyctl qca-hyd qca-libhyfi-bridge \
		qca-whc-lbd qca-whc-repacd qca-wifison-ext-lib qca-wsplcd bridge
endef

define Profile/QSDK_Premium/Description
	QSDK Premium package set configuration.
	Enables qca-wifi 10.4 packages
endef

$(eval $(call Profile,QSDK_Premium))

define Profile/QSDK_Standard
	NAME:=Qualcomm-Atheros SDK Standard Profile
	PACKAGES:=$(OPENWRT_STANDARD) $(NSS_COMMON) $(NSS_STANDARD) $(SWITCH_SSDK_PKGS) \
		$(WIFI_10_4_PKGS) $(STORAGE) $(SHORTCUT_FE) $(HW_CRYPTO) $(QCA_RFS) \
		$(IGMPSNOOING_RSTP) $(NETWORKING) $(QOS) $(UTILS) $(TEST_TOOLS) $(COREBSP_UTILS) \
		qca-wifi-fw-hw3-10.4-asic qca-wifi-fw-hw5-10.4-asic qca-wifi-fw-hw6-10.4-asic \
		$(FAIL_SAFE)
endef

define Profile/QSDK_Standard/Description
	QSDK Standard package set configuration.
	Enables qca-wifi 10.4 packages
endef

$(eval $(call Profile,QSDK_Standard))

define Profile/QSDK_Enterprise
	NAME:=Qualcomm-Atheros SDK Enterprise Profile
	PACKAGES:=$(OPENWRT_STANDARD) $(NSS_COMMON) $(NSS_ENTERPRISE) $(SWITCH_SSDK_PKGS) \
		$(WIFI_10_4_PKGS) $(WIFI_10_4_FW_PKGS) $(STORAGE) $(HW_CRYPTO) $(QCA_RFS) \
		$(IGMPSNOOING_RSTP) $(NETWORKING) $(QOS) $(UTILS) $(TEST_TOOLS) $(COREBSP_UTILS) \
		$(QCA_ECM_ENTERPRISE) $(NSS_CLIENTS_ENTERPRISE) $(NSS_MACSEC) $(NSS_CRYPTO) \
		$(IPSEC) $(CD_ROUTER) $(AQ_PHY)
endef

define Profile/QSDK_Enterprise/Description
	QSDK Enterprise package set configuration.
	Enables qca-wifi 10.4 packages
endef

$(eval $(call Profile,QSDK_Enterprise))

define Profile/QSDK_Deluxe
	NAME:=Qualcomm-Atheros SDK Deluxe Profile
	PACKAGES:=$(OPENWRT_STANDARD) $(NSS_DELUXE) \
		$(SWITCH_SSDK_NOHNAT_PKGS) $(WIFI_11_0_PKGS) $(WIFI_10_4_FW_PKGS) \
		$(CD_ROUTER) -lacpd $(NETWORKING) $(SHORTCUT_FE) $(MAP_PKGS) \
		$(QCA_RFS) $(IGMPSNOOING_RSTP) -rstp $(QOS) $(QCA_ECM) $(AQ_PHY) \
		$(STORAGE) $(AUDIO) $(VIDEO) $(COREBSP_UTILS) $(FAILSAFE) \
		$(UTILS) $(TEST_TOOLS) $(KPI) \
		$(QCA_LITHIUM) $(NSS_CLIENTS_DELUX) \
		kmod-art2 qca-wifi-hk-fw-hw1-10.4-asic kmod-e1000e \
		-uboot-ipq40xx -uboot-ipq806x -uboot-ipq806x-fwupgrade-tools \
		uboot-2016-ipq806x uboot-2016-ipq807x uboot-2016-ipq40xx $(USB_DIAG)
endef

define Profile/QSDK_Deluxe/Description
	QSDK Deluxe package set configuration.
	Enables wifi 11.0 source packages
	Intended for IPQ807x
endef

$(eval $(call Profile,QSDK_Deluxe))

define Profile/QSDK_Deluxe_Temp
	NAME:=Qualcomm-Atheros SDK Deluxe Temporary Profile
	PACKAGES:=$(OPENWRT_STANDARD) $(NSS_COMMON) $(NSS_STANDARD) \
		$(SWITCH_SSDK_NOHNAT_PKGS) $(WIFI_11_0_PKGS) $(WIFI_10_4_FW_PKGS) \
		$(CD_ROUTER) -lacpd $(NETWORKING) $(SHORTCUT_FE) $(MAP_PKGS) \
		$(QCA_RFS) $(IGMPSNOOING_RSTP) -rstp $(QOS) $(QCA_ECM) $(AQ_PHY) \
		$(STORAGE) $(AUDIO) $(VIDEO) $(COREBSP_UTILS) $(FAILSAFE) \
		$(UTILS) $(TEST_TOOLS) $(KPI) \
		$(QCA_LITHIUM) $(NSS_CLIENTS) \
		kmod-art2 qca-wifi-hk-fw-hw1-10.4-asic kmod-e1000e \
		${NSS_CRYPTO} -uboot-ipq40xx -uboot-ipq806x -uboot-ipq806x-fwupgrade-tools \
		uboot-2016-ipq806x uboot-2016-ipq807x uboot-2016-ipq40xx $(USB_DIAG)
endef

define Profile/QSDK_Deluxe_Temp/Description
	QSDK Deluxe Temporary package set configuration.
	Enables wifi 11.0 source packages
	Intended for IPQ806x/IPQ40xx
endef

$(eval $(call Profile,QSDK_Deluxe_Temp))
