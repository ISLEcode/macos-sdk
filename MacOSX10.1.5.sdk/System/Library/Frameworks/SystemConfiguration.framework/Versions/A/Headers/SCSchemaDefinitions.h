/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/*
 * This file is automatically generated
 * DO NOT EDIT!
 */

/*
 * Note: For Cocoa/Obj-C/Foundation programs accessing these preference
 *       keys you may want to consider the following:
 *
 *       #define SCSTR(s) (NSString *)CFSTR(s)
 *       #import <SystemConfiguration/SystemConfiguration.h>
 */

#ifndef _SCSCHEMADEFINITIONS_H
#define _SCSCHEMADEFINITIONS_H

#ifndef  SCSTR
#include <CoreFoundation/CFString.h>
#define  SCSTR(s) CFSTR(s)
#endif

/*
 * Reserved Keys
 */
#define kSCResvLink                              SCSTR("__LINK__")                        /* CFString */
#define kSCResvInactive                          SCSTR("__INACTIVE__")                   

/*
 * Generic Keys
 */
#define kSCPropInterfaceName                     SCSTR("InterfaceName")                   /* CFString */
#define kSCPropMACAddress                        SCSTR("MACAddress")                      /* CFString */
#define kSCPropUserDefinedName                   SCSTR("UserDefinedName")                 /* CFString */
#define kSCPropVersion                           SCSTR("Version")                         /* CFString */

/*
 * Preference Keys
 */
#define kSCPrefCurrentSet                        SCSTR("CurrentSet")                      /* CFString */
#define kSCPrefNetworkServices                   SCSTR("NetworkServices")                 /* CFDictionary */
#define kSCPrefSets                              SCSTR("Sets")                            /* CFDictionary */
#define kSCPrefSystem                            SCSTR("System")                          /* CFDictionary */

/*
 * Component Keys
 */
#define kSCCompNetwork                           SCSTR("Network")                        
#define kSCCompService                           SCSTR("Service")                        
#define kSCCompGlobal                            SCSTR("Global")                         
#define kSCCompInterface                         SCSTR("Interface")                      
#define kSCCompSystem                            SCSTR("System")                         
#define kSCCompUsers                             SCSTR("Users")                          

/*
 * Regex key which matches any component
 */
#define kSCCompAnyRegex                          SCSTR("[^/]+")                          

/*
 * Network Entity Keys
 */
#define kSCEntNetAirPort                         SCSTR("AirPort")                         /* CFDictionary */
#define kSCEntNetAppleTalk                       SCSTR("AppleTalk")                       /* CFDictionary */
#define kSCEntNetDHCP                            SCSTR("DHCP")                            /* CFDictionary */
#define kSCEntNetDNS                             SCSTR("DNS")                             /* CFDictionary */
#define kSCEntNetEthernet                        SCSTR("Ethernet")                        /* CFDictionary */
#define kSCEntNetInterface                       SCSTR("Interface")                       /* CFDictionary */
#define kSCEntNetIPv4                            SCSTR("IPv4")                            /* CFDictionary */
#define kSCEntNetIPv6                            SCSTR("IPv6")                            /* CFDictionary */
#define kSCEntNetLink                            SCSTR("Link")                            /* CFDictionary */
#define kSCEntNetModem                           SCSTR("Modem")                           /* CFDictionary */
#define kSCEntNetNetInfo                         SCSTR("NetInfo")                         /* CFDictionary */
/* #define kSCEntNetNIS                          SCSTR("???") */                          /* RESERVED FOR FUTURE USE */
#define kSCEntNetPPP                             SCSTR("PPP")                             /* CFDictionary */
#define kSCEntNetPPPoE                           SCSTR("PPPoE")                           /* CFDictionary */
#define kSCEntNetProxies                         SCSTR("Proxies")                         /* CFDictionary */

/*
 * kSCCompNetwork Properties
 */
#define kSCPropNetServiceOrder                   SCSTR("ServiceOrder")                    /* CFArray[CFString] */
#define kSCPropNetPPPOverridePrimary             SCSTR("PPPOverridePrimary")              /* CFNumber (0 or 1) */

/*
 * kSCEntNetAirPort (Hardware) Entity Keys
 */
#define kSCPropNetAirPortPowerEnabled            SCSTR("PowerEnabled")                    /* CFNumber (0 or 1) */
#define kSCPropNetAirPortAuthPassword            SCSTR("AuthPassword")                    /* CFString */
#define kSCPropNetAirPortAuthPasswordEncryption  SCSTR("AuthPasswordEncryption")          /* CFString */
#define kSCPropNetAirPortPreferredNetwork        SCSTR("PreferredNetwork")                /* CFString */

/*
 * kSCEntNetAppleTalk Entity Keys
 */
#define kSCPropNetAppleTalkComputerName          SCSTR("ComputerName")                    /* CFString */
#define kSCPropNetAppleTalkComputerNameEncoding  SCSTR("ComputerNameEncoding")            /* CFNumber */
#define kSCPropNetAppleTalkConfigMethod          SCSTR("ConfigMethod")                    /* CFString */
#define kSCPropNetAppleTalkDefaultZone           SCSTR("DefaultZone")                     /* CFString */
#define kSCPropNetAppleTalkNetworkID             SCSTR("NetworkID")                       /* CFNumber */
#define kSCPropNetAppleTalkNodeID                SCSTR("NodeID")                          /* CFNumber */
#define kSCPropNetAppleTalkSeedNetworkRange      SCSTR("SeedNetworkRange")                /* CFArray[CFNumber] */
#define kSCPropNetAppleTalkSeedZones             SCSTR("SeedZones")                       /* CFArray[CFString] */

/* kSCPropNetAppleTalkConfigMethod values */
#define kSCValNetAppleTalkConfigMethodNode       SCSTR("Node")                           
#define kSCValNetAppleTalkConfigMethodRouter     SCSTR("Router")                         
#define kSCValNetAppleTalkConfigMethodSeedRouter SCSTR("SeedRouter")                     

/*
 * kSCEntNetDNS Entity Keys
 */
#define kSCPropNetDNSDomainName                  SCSTR("DomainName")                      /* CFString */
#define kSCPropNetDNSSearchDomains               SCSTR("SearchDomains")                   /* CFArray[CFString] */
#define kSCPropNetDNSServerAddresses             SCSTR("ServerAddresses")                 /* CFArray[CFString] */
#define kSCPropNetDNSSortList                    SCSTR("SortList")                        /* CFArray[CFString] */

/*
 * kSCEntNetEthernet (Hardware) Entity Keys
 */

/*
 * kSCEntNetInterface Entity Keys
 */
#define kSCPropNetInterfaceDeviceName            SCSTR("DeviceName")                      /* CFString */
#define kSCPropNetInterfaceHardware              SCSTR("Hardware")                        /* CFString */
#define kSCPropNetInterfaceType                  SCSTR("Type")                            /* CFString */
#define kSCPropNetInterfaceSubType               SCSTR("SubType")                         /* CFString */

/* kSCPropNetInterfaceType values */
#define kSCValNetInterfaceTypeEthernet           SCSTR("Ethernet")                       
#define kSCValNetInterfaceTypePPP                SCSTR("PPP")                            

/* kSCPropNetServiceSubType values (for PPP) */
#define kSCValNetInterfaceSubTypePPPoE           SCSTR("PPPoE")                          
#define kSCValNetInterfaceSubTypePPPSerial       SCSTR("PPPSerial")                      

/*
 * kSCEntNetIPv4 Entity Keys
 */
#define kSCPropNetIPv4Addresses                  SCSTR("Addresses")                       /* CFArray[CFString] */
#define kSCPropNetIPv4ConfigMethod               SCSTR("ConfigMethod")                    /* CFString */
#define kSCPropNetIPv4DHCPClientID               SCSTR("DHCPClientID")                    /* CFString */
#define kSCPropNetIPv4Router                     SCSTR("Router")                          /* CFString */
#define kSCPropNetIPv4SubnetMasks                SCSTR("SubnetMasks")                     /* CFArray[CFString] */
#define kSCPropNetIPv4DestAddresses              SCSTR("DestAddresses")                   /* CFArray[CFString] */
#define kSCPropNetIPv4BroadcastAddresses         SCSTR("BroadcastAddresses")              /* CFArray[CFString] */

/* kSCPropNetIPv4ConfigMethod values */
#define kSCValNetIPv4ConfigMethodBOOTP           SCSTR("BOOTP")                          
#define kSCValNetIPv4ConfigMethodDHCP            SCSTR("DHCP")                           
#define kSCValNetIPv4ConfigMethodINFORM          SCSTR("INFORM")                         
#define kSCValNetIPv4ConfigMethodManual          SCSTR("Manual")                         
#define kSCValNetIPv4ConfigMethodPPP             SCSTR("PPP")                            

/*
 * kSCEntNetIPv6 Entity Keys
 */
#define kSCPropNetIPv6Addresses                  SCSTR("Addresses")                       /* CFArray[CFString] */
#define kSCPropNetIPv6ConfigMethod               SCSTR("ConfigMethod")                    /* CFString */

/*
 * kSCEntNetLink Entity Keys
 */
#define kSCPropNetLinkActive                     SCSTR("Active")                          /* CFBoolean */

/*
 * kSCEntNetModem (Hardware) Entity Keys
 */
#define kSCPropNetModemConnectionScript          SCSTR("ConnectionScript")                /* CFString */
#define kSCPropNetModemDataCompression           SCSTR("DataCompression")                 /* CFNumber (0 or 1) */
#define kSCPropNetModemDialMode                  SCSTR("DialMode")                        /* CFString */
#define kSCPropNetModemErrorCorrection           SCSTR("ErrorCorrection")                 /* CFNumber (0 or 1) */
#define kSCPropNetModemPulseDial                 SCSTR("PulseDial")                       /* CFNumber (0 or 1) */
#define kSCPropNetModemSpeaker                   SCSTR("Speaker")                         /* CFNumber (0 or 1) */
#define kSCPropNetModemSpeed                     SCSTR("Speed")                           /* CFNumber */

/* kSCPropNetModemDialMode values */
#define kSCValNetModemDialModeIgnoreDialTone     SCSTR("IgnoreDialTone")                 
#define kSCValNetModemDialModeManual             SCSTR("Manual")                         
#define kSCValNetModemDialModeWaitForDialTone    SCSTR("WaitForDialTone")                

/*
 * kSCEntNetNetInfo Entity Keys
 */
#define kSCPropNetNetInfoBindingMethods          SCSTR("BindingMethods")                  /* CFString */
#define kSCPropNetNetInfoServerAddresses         SCSTR("ServerAddresses")                 /* CFArray[CFString] */
#define kSCPropNetNetInfoServerTags              SCSTR("ServerTags")                      /* CFArray[CFString] */
#define kSCPropNetNetInfoBroadcastServerTag      SCSTR("BroadcastServerTag")              /* CFString */

/* kSCPropNetNetInfoBindingMethods values */
#define kSCValNetNetInfoBindingMethodsBroadcast  SCSTR("Broadcast")                      
#define kSCValNetNetInfoBindingMethodsDHCP       SCSTR("DHCP")                           
#define kSCValNetNetInfoBindingMethodsManual     SCSTR("Manual")                         

/* kSCPropNetNetInfoBroadcastServerTag default value */
#define kSCValNetNetInfoDefaultServerTag         SCSTR("network")                        

/*
 * kSCEntNetNIS Entity Keys
 */
/* RESERVED FOR FUTURE USE */

/*
 * kSCEntNetPPP Entity Keys
 */
#define kSCPropNetPPPDialOnDemand                SCSTR("DialOnDemand")                    /* CFNumber (0 or 1) */
#define kSCPropNetPPPDisconnectOnIdle            SCSTR("DisconnectOnIdle")                /* CFNumber (0 or 1) */
#define kSCPropNetPPPDisconnectOnIdleTimer       SCSTR("DisconnectOnIdleTimer")           /* CFNumber */
#define kSCPropNetPPPDisconnectOnLogout          SCSTR("DisconnectOnLogout")              /* CFNumber (0 or 1) */
#define kSCPropNetPPPIdleReminderTimer           SCSTR("IdleReminderTimer")               /* CFNumber */
#define kSCPropNetPPPIdleReminder                SCSTR("IdleReminder")                    /* CFNumber (0 or 1) */
#define kSCPropNetPPPLogfile                     SCSTR("Logfile")                         /* CFString */
#define kSCPropNetPPPSessionTimer                SCSTR("SessionTimer")                    /* CFNumber */
#define kSCPropNetPPPVerboseLogging              SCSTR("VerboseLogging")                  /* CFNumber (0 or 1) */

/* Auth: */
#define kSCPropNetPPPAuthName                    SCSTR("AuthName")                        /* CFString */
#define kSCPropNetPPPAuthPassword                SCSTR("AuthPassword")                    /* CFString */
#define kSCPropNetPPPAuthPasswordEncryption      SCSTR("AuthPasswordEncryption")          /* CFString */
#define kSCPropNetPPPAuthProtocol                SCSTR("AuthProtocol")                    /* CFArray[CFString] */

/* kSCPropNetPPPAuthProtocol values */
#define kSCValNetPPPAuthProtocolCHAP             SCSTR("CHAP")                            /* CFString */
#define kSCValNetPPPAuthProtocolPAP              SCSTR("PAP")                             /* CFString */

/* Comm: */
#define kSCPropNetPPPCommAlternateRemoteAddress  SCSTR("CommAlternateRemoteAddress")      /* CFString */
#define kSCPropNetPPPCommConnectDelay            SCSTR("CommConnectDelay")                /* CFNumber */
#define kSCPropNetPPPCommDisplayTerminalWindow   SCSTR("CommDisplayTerminalWindow")       /* CFNumber (0 or 1) */
#define kSCPropNetPPPCommRedialCount             SCSTR("CommRedialCount")                 /* CFNumber */
#define kSCPropNetPPPCommRedialEnabled           SCSTR("CommRedialEnabled")               /* CFNumber (0 or 1) */
#define kSCPropNetPPPCommRedialInterval          SCSTR("CommRedialInterval")              /* CFNumber */
#define kSCPropNetPPPCommRemoteAddress           SCSTR("CommRemoteAddress")               /* CFString */
#define kSCPropNetPPPCommTerminalScript          SCSTR("CommTerminalScript")              /* CFString */

/* IPCP: */
#define kSCPropNetPPPIPCPCompressionVJ           SCSTR("IPCPCompressionVJ")               /* CFNumber (0 or 1) */

/* LCP: */
#define kSCPropNetPPPLCPEchoEnabled              SCSTR("LCPEchoEnabled")                  /* CFNumber (0 or 1) */
#define kSCPropNetPPPLCPEchoFailure              SCSTR("LCPEchoFailure")                  /* CFNumber */
#define kSCPropNetPPPLCPEchoInterval             SCSTR("LCPEchoInterval")                 /* CFNumber */
#define kSCPropNetPPPLCPCompressionACField       SCSTR("LCPCompressionACField")           /* CFNumber (0 or 1) */
#define kSCPropNetPPPLCPCompressionPField        SCSTR("LCPCompressionPField")            /* CFNumber (0 or 1) */
#define kSCPropNetPPPLCPMRU                      SCSTR("LCPMRU")                          /* CFNumber */
#define kSCPropNetPPPLCPMTU                      SCSTR("LCPMTU")                          /* CFNumber */
#define kSCPropNetPPPLCPReceiveACCM              SCSTR("LCPReceiveACCM")                  /* CFNumber */
#define kSCPropNetPPPLCPTransmitACCM             SCSTR("LCPTransmitACCM")                 /* CFNumber */

/*
 * kSCEntNetPPPoE Entity Keys
 */
/* RESERVED FOR FUTURE USE */

/*
 * kSCEntNetPPPSerial Entity Keys
 */
/* RESERVED FOR FUTURE USE */

/*
 * kSCEntNetProxies Entity Keys
 */
#define kSCPropNetProxiesExceptionsList          SCSTR("ExceptionsList")                  /* CFArray[CFString] */
#define kSCPropNetProxiesFTPEnable               SCSTR("FTPEnable")                       /* CFNumber (0 or 1) */
#define kSCPropNetProxiesFTPPassive              SCSTR("FTPPassive")                      /* CFNumber (0 or 1) */
#define kSCPropNetProxiesFTPPort                 SCSTR("FTPPort")                         /* CFNumber */
#define kSCPropNetProxiesFTPProxy                SCSTR("FTPProxy")                        /* CFString */
#define kSCPropNetProxiesGopherEnable            SCSTR("GopherEnable")                    /* CFNumber (0 or 1) */
#define kSCPropNetProxiesGopherPort              SCSTR("GopherPort")                      /* CFNumber */
#define kSCPropNetProxiesGopherProxy             SCSTR("GopherProxy")                     /* CFString */
#define kSCPropNetProxiesHTTPEnable              SCSTR("HTTPEnable")                      /* CFNumber (0 or 1) */
#define kSCPropNetProxiesHTTPPort                SCSTR("HTTPPort")                        /* CFNumber */
#define kSCPropNetProxiesHTTPProxy               SCSTR("HTTPProxy")                       /* CFString */
#define kSCPropNetProxiesHTTPSEnable             SCSTR("HTTPSEnable")                     /* CFNumber (0 or 1) */
#define kSCPropNetProxiesHTTPSPort               SCSTR("HTTPSPort")                       /* CFNumber */
#define kSCPropNetProxiesHTTPSProxy              SCSTR("HTTPSProxy")                      /* CFString */
#define kSCPropNetProxiesRTSPEnable              SCSTR("RTSPEnable")                      /* CFNumber (0 or 1) */
#define kSCPropNetProxiesRTSPPort                SCSTR("RTSPPort")                        /* CFNumber */
#define kSCPropNetProxiesRTSPProxy               SCSTR("RTSPProxy")                       /* CFString */
#define kSCPropNetProxiesSOCKSEnable             SCSTR("SOCKSEnable")                     /* CFNumber (0 or 1) */
#define kSCPropNetProxiesSOCKSPort               SCSTR("SOCKSPort")                       /* CFNumber */
#define kSCPropNetProxiesSOCKSProxy              SCSTR("SOCKSProxy")                      /* CFString */

/*
 kSCCompUsers Entity Keys
 */
#define kSCEntUsersConsoleUser                   SCSTR("ConsoleUser")                    

/*
 kSCPropUsersConsoleUser Properties
 */
#define kSCPropUsersConsoleUserName              SCSTR("Name")                            /* CFString */
#define kSCPropUsersConsoleUserUID               SCSTR("UID")                             /* CFString */
#define kSCPropUsersConsoleUserGID               SCSTR("GID")                             /* CFString */

/*
 * kSCCompSystem Properties
 */
#define kSCPropSystemComputerName                SCSTR("ComputerName")                    /* CFString */
#define kSCPropSystemComputerNameEncoding        SCSTR("ComputerNameEncoding")            /* CFNumber */

/*
 * Configuration Store Definitions
 */
/* domain prefixes */
#define kSCDynamicStoreDomainFile                SCSTR("File:")                          
#define kSCDynamicStoreDomainPlugin              SCSTR("Plugin:")                        
#define kSCDynamicStoreDomainSetup               SCSTR("Setup:")                         
#define kSCDynamicStoreDomainState               SCSTR("State:")                         
#define kSCDynamicStoreDomainPrefs               SCSTR("Prefs:")                         

/* kSCDynamicStoreDomainSetup Properties */
#define kSCDynamicStorePropSetupCurrentSet       SCSTR("CurrentSet")                      /* CFString */
#define kSCDynamicStorePropSetupLastUpdated      SCSTR("LastUpdated")                    

/* Properties */
#define kSCDynamicStorePropNetInterfaces         SCSTR("Interfaces")                      /* CFArray[CFString] */
#define kSCDynamicStorePropNetPrimaryInterface   SCSTR("PrimaryInterface")                /* CFString */
#define kSCDynamicStorePropNetPrimaryService     SCSTR("PrimaryService")                  /* CFString */
#define kSCDynamicStorePropNetServiceIDs         SCSTR("ServiceIDs")                      /* CFArray[CFString] */

#endif /* _SCSCHEMADEFINITIONS_H */
