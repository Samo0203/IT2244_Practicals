#include <stdio.h>
#include <pthread.h>
#include <unistd.h> // for sleep()

void* count_numbers(void* arg) {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
        sleep(1); // Sleep for 1 second
    }
    return NULL;
}

int main() {
    pthread_t thread;

    pthread_create(&thread, NULL, count_numbers, NULL);
    pthread_join(thread, NULL);

    printf("Counting complete.\n");
    return 0;
}
