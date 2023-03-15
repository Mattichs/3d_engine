#ifndef O_Window
#define O_Window

class OWindow {
public:
    OWindow();
    ~OWindow();

    void onDestroy();
    bool isClosed() {
        return !m_handle;
    }
private:
    void* m_handle = nullptr;
};

#endif