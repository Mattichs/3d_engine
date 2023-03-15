#ifndef O_Game
#define O_Game

#include <memory>

class OWindow;
class OGame {
public:
    OGame();
    ~OGame();

    void run();
    void quit();
protected:
    bool m_isRunning = true;
    std::unique_ptr<OWindow> m_display;
};

#endif