// 
// File:   main.cc
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
// Created on March 14, 2008, 3:07 PM
//

#include <QApplication>
#include <QStringList>
#import "../header/ZlMd5Check.h"

int main( int argc, char *argv[]) {
	QApplication app( argc, argv );
	
//	qDebug() << "App started!";
	
	//looking for translation
	QString locale = QLocale::system().name();
	QTranslator translator;
	translator.load(QString("zlsync_") + locale);
	app.installTranslator(&translator);
	
	ZlMd5Check *win = new ZlMd5Check;
	
	win->show();
	
	return app.exec();
	
}



