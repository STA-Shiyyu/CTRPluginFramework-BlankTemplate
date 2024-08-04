#include <CTRPluginFramework.hpp>

namespace CTRPluginFramework
{
    void InitMenu(PluginMenu &menu)
    {
    }

    int main(void)
    {
        PluginMenu *menu = new PluginMenu("Action Replay", 0, 7, 4,
                                            "A blank template plugin.\n"
                                            "Gives you access to the ActionReplay and others tools.");
        menu->SynchronizeWithFrame(true);   // Synnchronize the menu with frame event
        InitMenu(*menu);                    // Init our menu entries and folders
        // Launch menu and mainloop
        menu->Run();                        
        // Exit plugin
        delete menu;
        return (0);
    }
}