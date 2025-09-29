
#include <iostream>
#include <string>

using namespace std;

class Spacecraft {
protected:
    string name;
    int fuel;

public:
    Spacecraft(const string& n, int f) {
        name = n;
        fuel = f;
    }

    void launch() {
        if (fuel > 0)
            cout << name << " launched with " << fuel << "% fuel" << endl;
        else
            cout << name << " cannot launch, no fuel!" << endl;
    }

    void refuel(int amount) {
        fuel += amount;
        if (fuel > 100) fuel = 100;
        cout << name << " refueled to " << fuel << "%." << endl;
    }
};

class ResearchProbe : public Spacecraft {
    string experiment;

public:
    ResearchProbe(const string& n, int f, const string& exp) :Spacecraft(n, f) {
        experiment = exp;
    }

    void performExperiment() {
        if (fuel >= 10) {
            cout << name << " is conducting experiment: " << experiment << endl;
            fuel -= 10;
        } else {
            cout << name << " has insufficient fuel for experiment." << endl;
        }
    }

    void status() {
        cout << "Probe '" << name << "' fuel: " << fuel 
             << "% | Experiment: " << experiment << endl;
    }
};

int main() {
    ResearchProbe probe("Voyager", 50, "Analyze Cosmic Dust");

    probe.launch();
    probe.performExperiment();
    probe.status();

    probe.refuel(30);
    probe.performExperiment();
    probe.status();

    return 0;
}
