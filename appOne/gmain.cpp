#include"libOne.h"
struct DATA {
    int TITLE = 0;
    int PLAY = 1;
    int RESULT = 2;
    int state = TITLE;
};

void title(struct DATA* d) {
    clear(0);
    textSize(200);
    text("タイトル", 400, 300);
    if (isTrigger(KEY_SPACE)) {
        d->state = d->PLAY;
    }
}
void play(struct DATA* d) {
    clear(0);
    textSize(200);
    text("プレイ中", 400, 300);
    if (isTrigger(KEY_SPACE)) {
        d->state = d->RESULT;
    }
}
void result(struct DATA* d) {
    clear(0);
    textSize(200);
    text("リザルト", 400, 300);
    if (isTrigger(KEY_SPACE)) {
        d->state = d->TITLE;
    }
}

void gmain() {
    window(1600, 900, full);
    struct DATA d;
    while (notQuit) {
        if (d.state == d.TITLE) { title(&d); }
        else if (d.state == d.PLAY) { play(&d); }
        else if (d.state == d.RESULT) { result(&d); }
    }
}