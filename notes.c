// Prints frequencies of and outputs WAV file with all notes in an octave
//This program only prints the frequencies (in Hz) of all of the notes in an octave
//outputs a WAV file (an audio file) via which you can hear those same notes.

#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include "helpers.h"
#include "wav.h"

// Notes in an octave
const string NOTES[] = {"C", "C#", "D", "D#", "E", "F",
                        "F#", "G", "G#", "A", "A#", "B"
                       };
// Default octave
#define OCTAVE 4

int main(int argc, string argv[])
{
    // Override default octave if specified at command line
    int octave = OCTAVE;
    if (argc == 2)
    {
        octave = atoi(argv[1]);
        if (octave < 0 || octave > 8)
        {
            fprintf(stderr, "Invalid octave\n");
            return 1;
        }
    }
    else if (argc > 2)
    {
        fprintf(stderr, "Usage: notes [OCTAVE]\n");
        return 1;
    }

    // Open file for writing
    song s = song_open("notes.wav");

    // Add each semitone
    //why divide sizeof(NOTES) by sizeof(string)? Is that the way to get the length of the semitone?
    for (int i = 0, n = sizeof(NOTES) / sizeof(string); i < n; i++)
    {
        //Append octave to note
        //why create space for 4 notes?
        //sprintf makes sure that the output is assigned to a screen
        //but is not printed on the console
        //the note, facilitates the storage in the spaces set aside
        char note[4];
        sprintf(note, "%s%i", NOTES[i], octave);

        // Calculate frequency of note
        int f = frequency(note);

        // Print note to screen
        printf("%3s: %i\n", note, f);

        // Write (eighth) note to file
        note_write(s, f, 1);
    }

    // Close file
    song_close(s);
    
}
