#pragma once

/*
** RPI Game Architecture Engine
**
** Portions adapted from:
** Viper Engine - Copyright (C) 2016 Velan Studios - All Rights Reserved
**
** This file is distributed under the MIT License. See LICENSE.txt.
*/

#include <chrono>
#include <cstdint>

/*
** Represents the input stage of the frame.
** Owns the window, user input devices and clock.
*/
class ga_input
{
public:
	ga_input();
	~ga_input();

	bool update(struct ga_frame_params* params);

	void* get_window() const { return _window; }

private:
	uint64_t _button_mask;
	uint64_t _pressed_mask;
	uint64_t _released_mask;

	uint64_t _mouse_button_mask;

	float _mouse_x;
	float _mouse_y;
	float _wheel_x;
	float _wheel_y;

	std::chrono::high_resolution_clock::time_point _last_time;

	void* _window;

	bool _paused;
};
