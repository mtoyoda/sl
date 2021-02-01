/*========================================
 *    sl.h: SL version 5.02
 *	Copyright 1993,2002,2014
 *                Toyoda Masashi
 *		  (mtoyoda@acm.org)
 *	Last Modified: 2014/06/03
 *========================================
 */

#define D51HEIGHT	10
#define D51FUNNEL	 7
#define D51LENGTH	83
#define D51PATTERNS	 6

#define D51STR1  L"      ====        ________                ___________ "
#define D51STR2  L"  _D _|  |_______/        \\__I_I_____===__|_________| "
#define D51STR3  L"   |(_)---  |   H\\________/ |   |        =|___ ___|   "
#define D51STR4  L"   /     |  |   H  |  |     |   |         ||_| |_||   "
#define D51STR5  L"  |      |  |   H  |__--------------------| [___] |   "
#define D51STR6  L"  | ________|___H__/__|_____/[][]~\\_______|       |   "
#define D51STR7  L"  |/ |   |-----------I_____I [][] []  D   |=======|__ "

#define D51WHL11 L"__/ =| o |=-~~\\  /~~\\  /~~\\  /~~\\ ____Y___________|__ "
#define D51WHL12 L" |/-=|___|=    ||    ||    ||    |_____/~\\___/        "
#define D51WHL13 L"  \\_/      \\O=====O=====O=====O_/      \\_/            "

#define D51WHL21 L"__/ =| o |=-~~\\  /~~\\  /~~\\  /~~\\ ____Y___________|__ "
#define D51WHL22 L" |/-=|___|=O=====O=====O=====O   |_____/~\\___/        "
#define D51WHL23 L"  \\_/      \\__/  \\__/  \\__/  \\__/      \\_/            "

#define D51WHL31 L"__/ =| o |=-O=====O=====O=====O \\ ____Y___________|__ "
#define D51WHL32 L" |/-=|___|=    ||    ||    ||    |_____/~\\___/        "
#define D51WHL33 L"  \\_/      \\__/  \\__/  \\__/  \\__/      \\_/            "

#define D51WHL41 L"__/ =| o |=-~O=====O=====O=====O\\ ____Y___________|__ "
#define D51WHL42 L" |/-=|___|=    ||    ||    ||    |_____/~\\___/        "
#define D51WHL43 L"  \\_/      \\__/  \\__/  \\__/  \\__/      \\_/            "

#define D51WHL51 L"__/ =| o |=-~~\\  /~~\\  /~~\\  /~~\\ ____Y___________|__ "
#define D51WHL52 L" |/-=|___|=   O=====O=====O=====O|_____/~\\___/        "
#define D51WHL53 L"  \\_/      \\__/  \\__/  \\__/  \\__/      \\_/            "

#define D51WHL61 L"__/ =| o |=-~~\\  /~~\\  /~~\\  /~~\\ ____Y___________|__ "
#define D51WHL62 L" |/-=|___|=    ||    ||    ||    |_____/~\\___/        "
#define D51WHL63 L"  \\_/      \\_O=====O=====O=====O/      \\_/            "

#define D51DEL   L"                                                      "

#define COAL01 L"                              "
#define COAL02 L"                              "
#define COAL03 L"    _________________         "
#define COAL04 L"   _|                \\_____A  "
#define COAL05 L" =|                        |  "
#define COAL06 L" -|                        |  "
#define COAL07 L"__|________________________|_ "
#define COAL08 L"|__________________________|_ "
#define COAL09 L"   |_D__D__D_|  |_D__D__D_|   "
#define COAL10 L"    \\_/   \\_/    \\_/   \\_/    "

#define COALDEL L"                              "

#define CAR01 L"       ____        ____       "
#define CAR02 L"   ___|    |______|    |___   "
#define CAR03 L"  |                        |  "
#define CAR04 L"  |                        |  "
#define CAR05 L"  | %-22.22s |  "
#define CAR06 L"  |                        |  "
#define CAR07 L"__|________________________|_ "
#define CAR08 L"|__________________________|_ "
#define CAR09 L"   |_D__D__D_|  |_D__D__D_|   "
#define CAR10 L"    \\_/   \\_/    \\_/   \\_/  "

#define LOGOHEIGHT    	 6
#define LOGOFUNNEL  	 4
#define LOGOLENGTH      84
#define LOGOPATTERNS	 6

#define LOGO1  L"     ++      +------ "
#define LOGO2  L"     ||      |+-+ |  "
#define LOGO3  L"   /---------|| | |  "
#define LOGO4  L"  + ========  +-+ |  "

#define LWHL11 L" _|--O========O~\\-+  "
#define LWHL12 L"//// \\_/      \\_/    "

#define LWHL21 L" _|--/O========O\\-+  "
#define LWHL22 L"//// \\_/      \\_/    "

#define LWHL31 L" _|--/~O========O-+  "
#define LWHL32 L"//// \\_/      \\_/    "

#define LWHL41 L" _|--/~\\------/~\\-+  "
#define LWHL42 L"//// \\_O========O    "

#define LWHL51 L" _|--/~\\------/~\\-+  "
#define LWHL52 L"//// \\O========O/    "

#define LWHL61 L" _|--/~\\------/~\\-+  "
#define LWHL62 L"//// O========O_/    "

#define LCOAL1 L"____                 "
#define LCOAL2 L"|   \\@@@@@@@@@@@     "
#define LCOAL3 L"|    \\@@@@@@@@@@@@@_ "
#define LCOAL4 L"|                  | "
#define LCOAL5 L"|__________________| "
#define LCOAL6 L"   (O)       (O)     "

#define LCAR1  L"____________________ "
#define LCAR2  L"|  ___ ___ ___ ___ | "
#define LCAR3  L"|  |_| |_| |_| |_| | "
#define LCAR4  L"|__________________| "
#define LCAR5  L"|__________________| "
#define LCAR6  L"   (O)        (O)    "

#define DELLN  L"                     "

#define C51HEIGHT 11
#define C51FUNNEL 7
#define C51LENGTH 87
#define C51PATTERNS 6

#define C51DEL L"                                                       "

#define C51STR1 L"        ___                                            "
#define C51STR2 L"       _|_|_  _     __       __             ___________"
#define C51STR3 L"    D__/   \\_(_)___|  |__H__|  |_____I_Ii_()|_________|"
#define C51STR4 L"     | `---'   |:: `--'  H  `--'         |  |___ ___|  "
#define C51STR5 L"    +|~~~~~~~~++::~~~~~~~H~~+=====+~~~~~~|~~||_| |_||  "
#define C51STR6 L"    ||        | ::       H  +=====+      |  |::  ...|  "
#define C51STR7 L"|    | _______|_::-----------------[][]-----|       |  "

#define C51WH61 L"| /~~ ||   |-----/~~~~\\  /[I_____I][][] --|||_______|__"
#define C51WH62 L"------'|oOo|==[]=-     ||      ||      |  ||=======_|__"
#define C51WH63 L"/~\\____|___|/~\\_|   O=======O=======O  |__|+-/~\\_|     "
#define C51WH64 L"\\_/         \\_/  \\____/  \\____/  \\____/      \\_/       "

#define C51WH51 L"| /~~ ||   |-----/~~~~\\  /[I_____I][][] --|||_______|__"
#define C51WH52 L"------'|oOo|===[]=-    ||      ||      |  ||=======_|__"
#define C51WH53 L"/~\\____|___|/~\\_|    O=======O=======O |__|+-/~\\_|     "
#define C51WH54 L"\\_/         \\_/  \\____/  \\____/  \\____/      \\_/       "

#define C51WH41 L"| /~~ ||   |-----/~~~~\\  /[I_____I][][] --|||_______|__"
#define C51WH42 L"------'|oOo|===[]=- O=======O=======O  |  ||=======_|__"
#define C51WH43 L"/~\\____|___|/~\\_|      ||      ||      |__|+-/~\\_|     "
#define C51WH44 L"\\_/         \\_/  \\____/  \\____/  \\____/      \\_/       "

#define C51WH31 L"| /~~ ||   |-----/~~~~\\  /[I_____I][][] --|||_______|__"
#define C51WH32 L"------'|oOo|==[]=- O=======O=======O   |  ||=======_|__"
#define C51WH33 L"/~\\____|___|/~\\_|      ||      ||      |__|+-/~\\_|     "
#define C51WH34 L"\\_/         \\_/  \\____/  \\____/  \\____/      \\_/       "

#define C51WH21 L"| /~~ ||   |-----/~~~~\\  /[I_____I][][] --|||_______|__"
#define C51WH22 L"------'|oOo|=[]=- O=======O=======O    |  ||=======_|__"
#define C51WH23 L"/~\\____|___|/~\\_|      ||      ||      |__|+-/~\\_|     "
#define C51WH24 L"\\_/         \\_/  \\____/  \\____/  \\____/      \\_/       "

#define C51WH11 L"| /~~ ||   |-----/~~~~\\  /[I_____I][][] --|||_______|__"
#define C51WH12 L"------'|oOo|=[]=-      ||      ||      |  ||=======_|__"
#define C51WH13 L"/~\\____|___|/~\\_|  O=======O=======O   |__|+-/~\\_|     "
#define C51WH14 L"\\_/         \\_/  \\____/  \\____/  \\____/      \\_/       "
