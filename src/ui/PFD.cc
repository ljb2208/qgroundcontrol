/*=====================================================================

PIXHAWK Micro Air Vehicle Flying Robotics Toolkit

(c) 2009 PIXHAWK PROJECT  <http://pixhawk.ethz.ch>

This file is part of the PIXHAWK project

    PIXHAWK is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    PIXHAWK is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with PIXHAWK. If not, see <http://www.gnu.org/licenses/>.

======================================================================*/

/**
 * @file
 *   @brief Head Down Display / Primary Flight Display
 *
 *   @author Lorenz Meier <mavteam@student.ethz.ch>
 *
 */

#include "PFD.h"

PFD::PFD(int width, int height, QWidget* parent)
        : HUD(width, height, parent)
{
    vGaugeSpacing = 70.0f;
    vwidth = 200.0f;
    vheight = 200.0f;
}


//        xCenterOffset(0.0f),
//        yCenterOffset(0.0f),
//        vwidth(200.0f),
//        vheight(150.0f),
//        vGaugeSpacing(50.0f),
//        vPitchPerDeg(6.0f), ///< 4 mm y translation per degree)
//        noCamera(true),
//        hardwareAcceleration(true),
//        strongStrokeWidth(1.5f),
//        normalStrokeWidth(1.0f),
//        fineStrokeWidth(0.5f)