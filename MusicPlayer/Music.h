#ifndef MUSIC_H
#include <QString>
#include <QtMultimedia/QMediaPlayer>
#include <QFileDialog>

class Music {
    QString title;
    QString artist;
    QString address;

public :
    void setTitle(QString newTitle) {
        title = newTitle;
    }
    void setArtist(QString newArtist) {
        artist = newArtist;
    }
    void setAddress(QString newAddress) {
        address = newAddress;
    }
    QString getTitle() {
        return title;
    }
    QString getArtist() {
        return artist;
    }
    QString getAddress(){
        return address;
    }
};



#define MUSIC_H

#endif // MUSIC_H
