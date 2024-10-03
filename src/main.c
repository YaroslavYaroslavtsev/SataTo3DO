#include "3DO.h"

#include "bsp/board.h"
#include <stdio.h>
#include "pico/stdlib.h"

int main(void)
{
	LOG_SATA("TEST 3DO\r\n");
    gpio_init(CDRST);
    gpio_set_dir(CDRST, true);

    gpio_init(CDWAIT);
    gpio_set_dir(CDWAIT, true);

    gpio_init(CDEN);
    gpio_set_dir(CDEN, true);

    gpio_init(CDCMD);
    gpio_set_dir(CDCMD, true);

    gpio_init(CDMDCHG);
    gpio_set_dir(CDMDCHG, true);

    gpio_init(CDSTEN);
    gpio_set_dir(CDSTEN, true);

    gpio_init(CDDTEN);
    gpio_set_dir(CDDTEN, true);

    gpio_init(CDHRD);
    gpio_set_dir(CDHRD, true);

    gpio_init(CDHWR);
    gpio_set_dir(CDHWR, true);

    gpio_init(DIR_DATA);
    gpio_set_dir(DIR_DATA,  true);
    gpio_init(EJECT);
    gpio_set_dir(EJECT, true);
    gpio_init(LED);
    gpio_set_dir(LED, true);

    gpio_init(CDD0);
    gpio_set_dir(CDD0, true);
    gpio_init(CDD1);
    gpio_set_dir(CDD1, true);
    gpio_init(CDD2);
    gpio_set_dir(CDD2, true);
    gpio_init(CDD3);
    gpio_set_dir(CDD3, true);
    gpio_init(CDD4);
    gpio_set_dir(CDD4, true);
    gpio_init(CDD5);
    gpio_set_dir(CDD5, true);
    gpio_init(CDD6);
    gpio_set_dir(CDD6, true);
    gpio_init(CDD7);
    gpio_set_dir(CDD7, true);
   int out = 0;
    while(1) {
        if(false) {
            gpio_put(LED, out & 0x0001);
            gpio_put(DIR_DATA, out & 0x2);
            gpio_put(EJECT, out & 0x0004);
            gpio_put(CDSTEN, out & 0x0008);
            gpio_put(CDWAIT, out & 0x0010);
            gpio_put(CDHWR, out & 0x0020);
            gpio_put(CDCMD, out & 0x0040);
            gpio_put(CDEN, out & 0x0080);
            gpio_put(CDRST, out & 0x100);
            gpio_put(CDMDCHG, out & 0x200);
            gpio_put(CDDTEN, out & 0x400);
            gpio_put(CDHRD, out & 0x800);
        } else {
            gpio_put(DIR_DATA, 0);
            gpio_put(CDEN, 0);

            gpio_put(CDD0, out & 0x0001);
            gpio_put(CDD1, out & 0x0002);
            gpio_put(CDD2, out & 0x0004);
            gpio_put(CDD3, out & 0x0008);
            gpio_put(CDD4, out & 0x0010);
            gpio_put(CDD5, out & 0x0020);
            gpio_put(CDD6, out & 0x0040);
            gpio_put(CDD7, out & 0x0080);
        }
        out++;
        sleep_us(100);
	}
return 0;
}
