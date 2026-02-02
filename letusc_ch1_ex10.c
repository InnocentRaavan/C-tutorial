#include <stdio.h>

int main() {
    int total_population = 80000;
    float percent_men = 52.0;
    float percent_literacy = 48.0;
    float percent_literate_men = 35.0;

    int total_men = (total_population * (percent_men / 100.0));
    int total_women = total_population - total_men;
    int total_literate = (total_population * (percent_literacy / 100.0));
    int total_literate_men = (total_population * (percent_literate_men / 100.0));
    int total_literate_women = total_literate - total_literate_men;
    int total_illiterate_men = total_men - total_literate_men;
    int total_illiterate_women = total_women - total_literate_women;

    printf("Total Illiterate Men: %d\n", total_illiterate_men);
    printf("Total Illiterate Women: %d\n", total_illiterate_women);

    return 0;
}
