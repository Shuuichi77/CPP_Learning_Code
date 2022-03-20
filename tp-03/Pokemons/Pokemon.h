#include <utility>

#pragma once

class Trainer;

// A creature that is cute and can fight other ones.
class Pokemon
{
public:
    Pokemon(const std::string &name)
            : _name { name } {}

    std::string name() const { return _name; }

    void captured_by(const Trainer &trainer) { _trainer = &trainer; }

    const Trainer *trainer() const { return _trainer; }

private:
    const Trainer *_trainer = nullptr;
    std::string   _name;
};
