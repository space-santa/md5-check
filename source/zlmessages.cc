// 
// File:   zlmessages.cc
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


#include "../header/zlmessages.h"
#include <QMessageBox>
#include <QString>

ZlMessages::ZlMessages() {
	
}

void ZlMessages::fehlermeldung(QWidget* parent, QString e) {
	QString tit = tr("Error");
	QMessageBox::critical(parent, tit, e, QMessageBox::Ok);
}

void ZlMessages::gpl_info(QWidget* parent) {
	QMessageBox::information(	
			parent, 
			tr("Info"),
			tr(	"Copyright (c) 2008 Armin Zirkel\n\n"
				"This program is free software; you can redistribute it and/or modify\n"
				"it under the terms of the GNU General Public License as published by\n"
				"the Free Software Foundation; either version 2 of the License, or\n"
				"(at your option) any later version.\n\n"
				"This program is distributed in the hope that it will be useful,\n"
				"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
				"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
				"GNU General Public License for more details.\n\n"
				"You should have received a copy of the GNU General Public License along\n"
				"with this program; if not, write to the Free Software Foundation, Inc.,\n"
				"51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.\n"
				"\nMost or all of the Icons are from Icon-Kings Nuvola-Theme\n"
				"They are free under the terms of the LGPL.\n"
				"http://www.icon-king.com/\n"
				"http://www.gnu.org/copyleft/lgpl.html\n"
				),
			QMessageBox::Ok,
			QMessageBox::Ok
		);
}
