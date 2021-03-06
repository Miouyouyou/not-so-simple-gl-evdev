/*
	Copyright (c) 2017 Miouyouyou <Myy>

  Permission is hereby granted, free of charge, to any person obtaining
  a copy of this software and associated documentation files 
  (the "Software"), to deal in the Software without restriction, 
  including without limitation the rights to use, copy, modify, merge, 
  publish, distribute, sublicense, and/or sell copies of the Software, 
  and to permit persons to whom the Software is furnished to do so, 
  subject to the following conditions:

  The above copyright notice and this permission notice shall be 
  included in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
  TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef MYY_INCLUDED
#define MYY_INCLUDED 1

#include <stdint.h>

enum glsl_programs { 
	glsl_cursor_program, 
	glsl_text_program,
	glsl_simple_text_program,
	n_glsl_programs
};
// ------ Cursor variables
enum glsl_cursor_program_uniforms { 
	glsl_cursor_unif_tex,
	glsl_cursor_unif_norm,
	glsl_cursor_unif_position,
	n_glsl_cursor_uniforms
};
enum glsl_textures { glsl_cursor_texture, n_glsl_textures };
enum glsl_buffers  { glsl_cursor_buffer,  n_glsl_buffers  };
enum glsl_cursor_program_attribs { glsl_cursor_attr_xyst };

void myy_display_initialised(unsigned int width, unsigned int height);
void myy_init_drawing();
void myy_draw();
void myy_cleanup_drawing();
void myy_generate_new_state();

/* Temporary changes */
enum mouse_action_type { myy_mouse_wheel_action };
void myy_mouse_action(enum mouse_action_type, int value);

void myy_abs_mouse_move(int x, int y);

#endif 
