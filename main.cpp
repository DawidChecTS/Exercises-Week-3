#include <iostream>
#include "Source_File.h"

int main(){

    Media media;
    Song song;
    Podcast podcast;
    Audiobook audiobook;

    song.printOutSummary(song.type);
    podcast.printOutSummary(podcast.type);
    audiobook.printOutSummary(audiobook.type);

    return 0 ;
}