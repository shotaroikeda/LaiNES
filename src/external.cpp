#include "external.hpp"
#include "common.hpp"
#include <algorithm>
#include <unistd.h>
#include <iostream>
#include <string>

External::External() {
	this->pressed_buttons = 0;
}

External::~External() {  }

External::External(const External& other) {
    this->pressed_buttons = other.pressed_buttons;
}

External::External(External&& other) {
    this->pressed_buttons = other.pressed_buttons;
}

External& External::operator=(const External& other) {
    if (this != &other) {
        this->pressed_buttons = other.pressed_buttons;
    }

    return *this;
}

External& External::operator=(External&& other) {
    if (this != &other) {
        this->pressed_buttons = other.pressed_buttons;
    }

    return *this;
}

u8 External::get_pressed_buttons() {
	this->held_frames += 1;
	if (this->held_frames == BUTTON_HOLD_FRAMES+1) {
		this->held_frames = 0;
		this->pressed_buttons = 0;
	}
    return this->pressed_buttons;
}

void External::set_button(u8 key, PressState p) {
    switch (p) {
    case PressState::PRESSED:
        this->pressed_buttons |= (1 << key);
		this->held_frames = 0;
        std::cout << std::to_string(this->pressed_buttons) << std::endl;
        break;
    case PressState::RELEASED:
        this->pressed_buttons &= ~(1 << key);
        break;
    default:
		std::cerr << "Unexpected PressState Found\n";
		break;
    }
}

void External::release() {
	this->pressed_buttons = 0;
}
