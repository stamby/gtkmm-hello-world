#include <gtkmm.h>

class MainWindow: public Gtk::Window {
    public:
        MainWindow() {
            set_title("K");
            set_position(Gtk::WIN_POS_CENTER);
            set_size_request(800, 600);
        }
};

int main(int argc, char **argv) {
    auto app = Gtk::Application::create(argc, argv, "org.stamby.app");
    MainWindow *w = new MainWindow;
    return app->run(*w);
}
