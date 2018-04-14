// 
// File:   zlmessages.h
// Author: Armin Zirkel
//
// Copyright (c) 2008 Armin Zirkel
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// Created on 3. Februar 2008, 21:03
//

#ifndef _ZLMESSAGES_H
#define	_ZLMESSAGES_H

#ifdef BUILD_DLL
	#define EXPORT_DLL Q_DECL_EXPORT
#else
	#define EXPORT_DLL
#endif

#include <QtCore>
#include <QString>

class ZlMessages : public QObject {
	Q_OBJECT
	public:
		ZlMessages();
		~ZlMessages() {}
		
		static void fehlermeldung(QWidget* parent, QString e);
		static void gpl_info(QWidget* parent);
	
	private:
		
	
	private slots:
	
};

#endif	/* _ZLMESSAGES_H */

