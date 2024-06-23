#include <iostream>
#include <vector>

class Volume {
public:
    std::string name;
    int size;

    Volume(std::string n, int s) : name(n), size(s) {}
};

class VolumeSequenceBrowser {
public:
    std::vector<Volume> volumes;

    void addVolume(const Volume& volume) {
        volumes.push_back(volume);
    }

    void browse() {
        for (const auto& volume : volumes) {
            std::cout << "Volume Name: " << volume.name << ", Size: " << volume.size << std::endl;
        }
    }
};

int main() {
    VolumeSequenceBrowser browser;
    browser.addVolume(Volume("Volume 1", 100));
    browser.addVolume(Volume("Volume 2", 200));
    browser.addVolume(Volume("Volume 3", 300));

    browser.browse();

    return 0;
}
