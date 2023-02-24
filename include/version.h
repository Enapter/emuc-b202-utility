#ifndef __VERSION_H__
#define __VERSION_H__

/*
 *  @ ver 2.0 - First version
 *  @ ver 2.1 - Add exit signal function
 *  @ ver 2.2 - Turn EMUCOpenDevice to EMUCOpenSocketCAN
 *  @ ver 2.3 - Add 400K baudrate
 *  @ ver 2.4 - Separate debug message (daemon & foreground), add more debug message
 *  @ ver 2.5 - Add INNO_XMIT_DELAY_CMD ioctl command
 *              (only for channel-1 baudrate, set ch1 & ch2 to the same baud is advised)
 *  @ ver 2.6 - Add open COM port timeout
 *  @ ver 2.7 - Mark "emuc active from utility"
 *            - must use SocketCAN driver >= ver 2.5
 *            - EMUC device will auto active after setting up "two" CAN port
 *            - modify run_emucd: check emuc_64, ip link successfully
 *  @ ver 3.0 - Start to support high level CANbus protocal
 *            - Add INNO_XMIT_MODEL_CMD ioctl command
 *            - must use SocketCAN driver >= ver 3.0
 *  @ ver 3.1 - Start to support EMUCSetErrorType
 *            - must use SocketCAN driver >= ver 3.1
 *  @ ver 3.2 - Add HIGH_LEVEL_PROTOCAL flag
 *            - inactive device without check return code
 *
 */

#define  EMUC_DAEMON_UTILITY_VERSION  "v3.2"

#endif