# Padauk-tone
Crude implementation of tone function in padauk micro

## How to use
The first parameter is the note, the second parameter is the length of the note. 
The note is coded in ```numbered musical notation``` while the length of note is following the note duration in sheet music.
```c
tonePA3(3,4); //plays the note "Mi" for 500ms (quarter note)
```

## Tempo adjustment
The tempo is hard coded to ```120bpm```. However, by changing the delay time in the function, you can adjust the tempo freely.