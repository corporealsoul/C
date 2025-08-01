#include <stdio.h>
int main() {
    float FIRST_TERM;
    float NTH_TERM;
    float COMMON_RATIO;
    float TERM_VALUE;
    float loop;

    printf("\n");

    printf("FIRST_TERM : ");
    scanf("%f", &FIRST_TERM);

    printf("NTH_TERM : ");
    scanf("%f", &NTH_TERM);

    printf("COMMON_RATIO : ");
    scanf("%f", &COMMON_RATIO);

    TERM_VALUE = FIRST_TERM;

    for (int loop = 1; loop <= NTH_TERM; loop = loop + 1) {
        printf("%f ", TERM_VALUE);
        TERM_VALUE = TERM_VALUE * COMMON_RATIO;
    }

    printf("\n");
    return 0;
}



// Lecture 03> .\a.exe
// FIRST_TERM : 100
// NTH_TERM : 20
// COMMON_RATIO : .5



- job_name: apache_logs
  static_configs:
    - targets:
        - localhost
      labels:
        job: apache_logs
        __path__: /var/log/apache2/*.log
      app: apache