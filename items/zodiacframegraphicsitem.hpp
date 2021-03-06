/*
    This file is part of Kamala, an astrology application.
    Copyright (C) 2009 Stanislas Marquis <smarquis@chaosorigin.com>

    Kamala is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License as
    published by the Free Software Foundation; either version 3 of
    the License, or (at your option) any later version.

    Kamala is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Kamala.  If not, see <http://www.gnu.org/licenses/>.
*/

/** @file zodiacframegraphicsitem.hpp
 */

#ifndef KAMALA_ZODIACFRAMEGRAPHICSITEM_HPP
#define KAMALA_ZODIACFRAMEGRAPHICSITEM_HPP

class QGraphicsItem;
#include <QGraphicsSvgItem>
class QSvgRenderer;
#include "../kamala_export.hpp"

/** @class ZodiacFrameGraphicsItem
 *  @brief Svg graphics item with the circles and boundaries of zodiac signs
 */
class KAMALA_EXPORT ZodiacFrameGraphicsItem
    : public QGraphicsSvgItem
{
    Q_OBJECT

  public:

    /** @brief Constructor
     *  @param name Optional tooltip for item, can be empty (unused actually)
     *  @param renderer Svg renderer
     *  @param parent Parent item
     */
    explicit ZodiacFrameGraphicsItem( const QString& name, QSvgRenderer* renderer,
        QGraphicsItem* parent );

};

#endif // KAMALA_ZODIACFRAMEGRAPHICSITEM_HPP
