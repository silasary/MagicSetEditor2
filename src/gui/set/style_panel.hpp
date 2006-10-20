//+----------------------------------------------------------------------------+
//| Description:  Magic Set Editor - Program to make Magic (tm) cards          |
//| Copyright:    (C) 2001 - 2006 Twan van Laarhoven                           |
//| License:      GNU General Public License 2 or later (see file COPYING)     |
//+----------------------------------------------------------------------------+

#ifndef HEADER_GUI_SET_STYLE_PANEL
#define HEADER_GUI_SET_STYLE_PANEL

// ----------------------------------------------------------------------------- : Includes

#include <util/prec.hpp>
#include <gui/set/panel.hpp>

// ----------------------------------------------------------------------------- : StylePanel

class StylePanel : public SetWindowPanel {
  public:
	StylePanel(Window* parent, int id);
};

// ----------------------------------------------------------------------------- : EOF
#endif