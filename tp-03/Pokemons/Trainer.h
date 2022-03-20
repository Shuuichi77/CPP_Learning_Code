#include <utility>
#include "PC.h"
#include "Pokeball.h"

#pragma once

// A person that capture Pokemons and make them fight.
class Trainer
{
public:
    Trainer(const std::string &name, PC &pc)
            : _name { name }
            , _pc { pc } {}

    const std::string &name() const { return _name; }

    const std::array<Pokeball, 6> &pokeballs() const { return _pokeballs; }

    void capture(std::unique_ptr<Pokemon> pokemon)
    {
        pokemon->captured_by(*this);

        for (auto &pokeball: _pokeballs)
        {
            if (pokeball.empty())
            {
                pokeball.store(std::move(pokemon));
                return;
            }
        }

        _pc.receive(std::move(pokemon));
    }

    void store_in_pc(size_t index)
    {
        assert(index >= 0 && index <= 5);
        _pc.receive(_pokeballs[index].yield());
    }


private:
    std::string             _name;
    PC                      &_pc;
    std::array<Pokeball, 6> _pokeballs;
};
