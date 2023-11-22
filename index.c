#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_LENGTH 256 // You can adjust the maximum length of the name

int colictscore;

struct Entry {
    char YourFullName[MAX_LENGTH];
    int points;
};

// Function prototypes
void Save_name();
void titel_game();
void titel_Score();
int compareEntries(const void *a, const void *b);

int main() {
    // Your existing main function code...

    // Add 200 entries
    for (int i = 0; i < 300; ++i) {
        // Generate a random name (replace this with your own logic)
        char randomName[MAX_LENGTH];
        sprintf(randomName, "Player%d", i + 1);

        // Generate a random score (replace this with your own logic)
        int randomScore = rand() % 100000;

        // Assign the generated name and score to an Entry struct
        struct Entry entry;
        strcpy(entry.YourFullName, randomName);
        entry.points = randomScore;

        // Append the entry to the file
        FILE *file = fopen("output.txt", "a");
        if (file == NULL) {
            fprintf(stderr, "Error opening file\n");
            return 1;
        }

        fprintf(file, "Full Name: %s Points: %d\n", entry.YourFullName, entry.points);

        fclose(file);
    }

    return 0;
}
