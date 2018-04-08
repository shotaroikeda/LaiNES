// Defines a couple of macros for external influence on the emulator
#include "common.hpp"

#define EXTERNAL_KEY_A 0
#define EXTERNAL_KEY_B 1
#define EXTERNAL_KEY_SELECT 2
#define EXTERNAL_KEY_START 3
#define EXTERNAL_KEY_UP 4
#define EXTERNAL_KEY_DOWN 5
#define EXTERNAL_KEY_LEFT 6
#define EXTERNAL_KEY_RIGHT 7

#define BUTTON_HOLD_FRAMES 32

enum PressState {
	PRESSED=0, RELEASED
};

class External {

public:
	External();
	~External();
	External(const External& other);
	External(External&& other);
	External& operator=(const External& other);
	External& operator=(External&& other);

	u8 get_pressed_buttons();
	void set_button(u8 key, PressState p);
	void release();

private:
	const u8 maxbuttons = 8;
	u8 pressed_buttons;
	u8 held_frames;

};
