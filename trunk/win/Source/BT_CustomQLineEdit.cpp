// Copyright 2012 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "BT_Common.h"
#include "BT_CustomQLineEdit.h"
#include "moc/moc_BT_CustomQLineEdit.cpp"

CustomQLineEdit::CustomQLineEdit(QWidget * parent)
: QLineEdit(parent) {
}

void CustomQLineEdit::focusOutEvent ( QFocusEvent * e ) { 

	if (e->reason() != Qt::PopupFocusReason) {
		emit QLineEdit::editingFinished();
	}
	QLineEdit::focusOutEvent(e);
	
}

void CustomQLineEdit::keyPressEvent(QKeyEvent *e)
{
	if (e->key() == Qt::Key_Escape)
		emit editingCanceled();	
	else
		QLineEdit::keyPressEvent(e);	
}


