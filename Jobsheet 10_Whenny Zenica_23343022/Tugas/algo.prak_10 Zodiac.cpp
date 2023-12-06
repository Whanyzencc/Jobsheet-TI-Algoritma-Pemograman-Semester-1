/* 	nama tugas     : Jobsheet10
	nama programer : Whenny zenica_23343022
	Kasus Program  : Menentukan Zodiac
*/
#include <stdio.h>

struct Zodiac {
    int startDay;
    int startMonth;
    int endDay;
    int endMonth;
    char name[12];
};

void determineZodiac(int day, int month, struct Zodiac zodiacs[], int numZodiacs) {
    for (int i = 0; i < numZodiacs; i++) {
        if ((month == zodiacs[i].startMonth && day >= zodiacs[i].startDay) ||
            (month == zodiacs[i].endMonth && day <= zodiacs[i].endDay)) {
            printf("Zodiak Anda adalah : %s\n", zodiacs[i].name);
            return;
        }
    }

    printf("Tidak dapat menentukan zodiak.\n");
}

int main() {
    struct Zodiac zodiacs[] = {
        {22, 12, 19, 1, "CAPRICORN"},
        {20, 1, 18, 2, "AQUARIUS"},
        {19, 2, 20, 3, "PISCES"},
        {21, 3, 19, 4, "ARIES"},
        {20, 4, 20, 5, "TAURUS"},
        {21, 5, 20, 6, "GEMINI"},
        {21, 6, 22, 7, "CANCER"},
        {23, 7, 22, 8, "LEO"},
        {23, 8, 22, 9, "VIRGO"},
        {23, 9, 22, 10, "LIBRA"},
        {23, 10, 21, 11, "SCORPIO"},
        {22, 11, 21, 12, "SAGITTARIUS"}
    };

    int day, month, year;

    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &day, &month, &year);

    determineZodiac(day, month, zodiacs, sizeof(zodiacs) / sizeof(zodiacs[0]));

    return 0;
}

