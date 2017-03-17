/*
 * Presence.cpp
 * Copyright (C) 2017  Belledonne Communications, Grenoble, France
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 *  Created on: March 14, 2017
 *      Author: Ghislain MARY
 */

#include <QtDebug>

#include "Presence.hpp"

// =============================================================================

Presence::PresenceLevel Presence::getPresenceLevel (const PresenceStatus &status) {
  switch (status) {
    case Online:
      return Green;
    case Busy:
      return Orange;
    case DoNotDisturb:
      return Red;
    case Offline:
    default:
      return White;
  }
}

QString Presence::getPresenceStatusAsString (const PresenceStatus &status) {
  switch (status) {
    case Online:
      return tr("presenceOnline");
    case Busy:
      return tr("presenceBusy");
    case DoNotDisturb:
      return tr("presenceDoNotDisturb");
    case Offline:
    default:
      return tr("presenceOffline");
  }
}

QString Presence::getPresenceLevelIconName (const PresenceLevel &level) {
  switch (level) {
    case Green:
      return "led_green";
    case Orange:
      return "led_orange";
    case Red:
      return "led_red";
    case White:
      return "led_white";
    default:
      return "";
  }
}