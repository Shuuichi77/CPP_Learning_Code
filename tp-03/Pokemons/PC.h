#pragma once

#include "Pokemon.h"

// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.
class PC
{
public:
    const std::vector<std::unique_ptr<Pokemon>> &pokemons() const;

    void receive(std::unique_ptr<Pokemon> pokemon) { _pokemons.emplace_back(std::move(pokemon)); }

    void give_back(Trainer &trainer, const std::string &name);

private:
    std::vector<std::unique_ptr<Pokemon>> _pokemons;
};
