/*
 * SiEd-Dana - A text editor optimized for the AlphaSmart Dana.
 * Copyright (C) 2016 Reg Tiangha
 * Contact:  reg@reginaldtiangha.com
 *
 * Portions of SiEd-Dana are based off the original SiEd project,
 * Copyright (C) 2003-2005 Benjamin Roe with original translations by:
 *
 * French Translation (C) 2003 Johnny Brasseur/David Bosman
 * Spanish Translation (C) 2004 Abraham Estrada
 * German Tranlation (C) 2003 Sebastian Meyer
 * Catalan Tranlation (C) 2003 PalmCAT.org
 * Italian Translation (C) 2004 Alessandro Bagnoli
*  Norgwegian Translation (C) 2004 John Gothard/Simen Graaten
 * Turkish Translation (C) 2004 Tankut Enric
 * Russian Translation (C) 2004 Pravdin, Ilchenko Denis
 * Dutch Translation (C)2004 Maurice Heck
 * Portuguese Translation (C) 2004 Matheus Lamberti
 * Czech Translation (C) 2004 Benda Radek
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

//this file contains all the text for SiEd-Dana dialogs, menus etc.
//the language for the build is selected at build time by defining the
//correct LANGUAGE_ symbol
//if you want add another language, just replace the english words and change the language symbol
//definition. Leave all the punctuation and numbers unchanged!

#define SIED_VERSION "SiEd-Dana 0.10.0-beta4"
#define READ_ONLY_MODE "Read Only"
#define MAIN_DIRNODE_TEXT "Main"

#define OUT_OF_MEMORY_WARNING "Editing. Save your work now!" //warning dialog displays "Out of memory while " + this message
#define DEFAULT_TEXT_EDITOR "Default Editor"
#define TAP_TO_OPEN "Tap to Open"
#define TEXT_DOCUMENT_ALPHA_CHARS_1 "Alpha. characters:"
#define TEXT_DOCUMENT_ALPHA_CHARS_2 "(a-Z,0-9)"
#define CHARS_MESSAGE "(uncounted)"
#define ESTIMATE_TEXT "(estimate)"

//Untranslated strings
#define SMALL_CHUNK_TEXT "Small"
#define MEDIUM_CHUNK_TEXT "Medium"
#define LARGE_CHUNK_TEXT "Large"
#define OFF_CHUNK_TEXT "Off"
#define CLOSE "Close"
#define CLOSE_TITLE "Abandon Changes?"
#define CLOSE_TITLE_SAVED "Close File?"
#define CLOSE_TEXT "Close current file without saving? All changes will be lost."
#define CLOSE_TEXT_SAVED "Close current file?"
#define INCREMENTAL_FILE_OPEN_MODE "Initial File Load"
#define FILE_TOO_LARGE "File Too Large"
#define FILE_TOO_LARGE_TEXT "File exceeds maximum size for SiEd-Dana."
#define FILE_TRUNCATION_TEXT "Truncated version of file loaded due to insufficient memory."
#define FILE_TRUNCATION "Memory Error"
#define FROM_TOP "From Top"
#define KEYBOARD "Keyboard"
#define STOP_RECORD_MENU "Stop Record"
#define INC_SEARCH_TEXT "Inc. Search"

#ifdef LANGUAGE_ENGLISH
#define REVERT_FILE "Reload File?"
#define MESSAGE_REVERT_FILE "Reload current file? All changes will be lost."
#define REVERT "Reload"
#define NONE_TEXT "None"
#define EOL_TEXT "Line Feeds"
#define SHOW_CODES_TEXT "Show Codes"
#define SHOW_MODE "Mode"
#define MACRO_POPUP_TEXT_1 "If you record a"
#define MACRO_POPUP_TEXT_2 "macro you can"
#define MACRO_POPUP_TEXT_3 "play it from here"
#define GET_PASSWORD "Enter Password"
#define PASSWORD_TEXT "Password:"
#define TEXT_ENCRYPTED "Encrypt"
#define FILE_NOT_ENCRYPTED_TITLE "File Not Encrypt"
#define FILE_NOT_ENCRYPTED_TEXT "File ^1 is not encrypted"
#define DECRYPT "Decrypt"
#define QUICK_MACRO "Quick Mac."
#define FILE_LOCATION "Enter password for file "
#define UNABLE_TO_CREATE_DIR_TEXT "Unable to create directory ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Error"
#define NO_COMPRESSED_DOC_TITLE "Not Supported"
#define NO_COMPRESSED_DOC_TEXT "File ^1 is compressed. No support for compressed DOCs yet."
#define MUST_ENTER_NAME_TITLE "No Name"
#define MUST_ENTER_NAME_TEXT "Must enter a name for the macro"
#define CONFIRM_MACRO_DELETE "Confirm"
#define MESSAGE_CONFIRM_MACRO_DELETE "Delete Macro ^1?"
#define PLAY_MACRO "Play Macro"
#define START_RECORD "Record Macro"
#define RECORD "Record"
#define PLAY "Play"
//C++ file text
#define INVALID_FILE_NAME_TITLE "Invalid Filename"
#define INVALID_FILE_NAME_TEXT "^1 is not a valid filename."
#define SELECTION_MODE "Selection Mode"
#define TEXT_BEAM "Beam"
#define BEAM_FILE "Selected file"
#define BEAM_APP "SiEd-Dana App."
#define PALM_STYLE_TEXT "Palm Style"
#define STANDARD_STYLE_TEXT "Standard"
#define SELECT_ALL "Select All"
#define WAITING_TEXT "Please Wait..." //Text displayed while leaving SiEd-Dana

//Resource text
#define TEXT_NEW_DIRECTORY "New Directory Name"

//simple ones
#define OK "OK"
#define CLOSE "Close"
#define OVERWRITE "Overwrite"
#define CANCEL "Cancel"
#define SAVE "Save"
#define DISCARD "Discard"
#define YES "Yes"
#define NO "No"
#define TEXT_FONT "Font"
#define TEXT_NONE "None"
#define TEXT_SIZE "Size:"
#define TOTAL "Total:"
#define OPEN "Open"
#define TEXT_FIND "Find"
#define TEXT_FIND_COLON "Find:"
#define TEXT_REPLACE "Find & Replace"
#define DELETE "Delete"
#define TEXT_DATE "Date:"
#define TEXT_COPY_FULL "Copy"
#define RENAME "Rename"
#define TEXT_EXIT "Exit"
#define TEXT_FILE "File"
#define TEXT_NEW "New"
#define PREFERENCES_ABBR "Prefs" //abbreviation for preferences
#define TEXT_ABOUT "About"
#define TEXT_COPY "Copy"
#define TEXT_PASTE "Paste"
#define TEXT_CUT "Cut"
#define TEXT_UNDO "Undo"
#define TEXT_REDO "Redo"
#define TEXT_CURSOR "Cursor"
#define TEXT_END "End"
#define TEXT_HOME "Home" //as in beginning of line key
#define TEXT_EDIT "Edit" //as in the menu title
#define TEXT_CALCULATE "Count" //abbreviation for count
#define TEXT_DOCUMENT_STATISTICS "Document Statistics"
#define TEXT_DOCUMENT_CHARS "Characters:"
#define TEXT_DOCUMENT_WORDS "Words:"
#define MENU_TEXT_STATS "Stats"
#define MANAGE_FILES "Files"
//other text
#define NEW_FILENAME "New Filename"
#define OLD_FILENAME "Current Filename"
#define RENAME_FILE "Rename File"
#define FIND_AGAIN "Find Again"
#define SAVE_AS "Save As"
#define SELECT_FILE "Select File"
#define TERM_NOT_FOUND "Term Not Found"
#define END_OF_DOCUMENT_REACHED "End of document reached"
#define CONFIRM_FILE_DELETE "Confirm File Delete"
#define MESSAGE_CONFIRM_FILE_DELETE "Delete file ^1?"

#define CONFIRM_OVERWRITE "Confirm Overwrite"
#define MESSAGE_CONFIRM_OVERWRITE "Opening a new file will erase current changes. Save file first?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\SiEd-Dana is based on the original SiEd text editor, \251 2003-2005\nBenjamin Roe.\nArtwork is \251 Stefan Smith & Tankut Eric.\nThis application is distributed under the terms of the GPLv2."

#define NEW_FILE "New File"
#define MESSAGE_NEW_FILE "Open a new file?"
#define EDITOR_PREFERENCES "Editor Preferences"

#define SAVE_FILE_AS "Save File As"
#define FILENAME "Filename"

#define SEARCH_TERM "Search Term"
#define MATCH_CASE "Match Case"
#define MATCH_WHOLE_WORD "Whole Word"

#define REPLACE_ABBR "Repl:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Repl" //abbreviation for replace
#define TEXT_WITH "With:"
#define REPLACE_ALL_ABBR "R all" //abbreviation for replace all
#define END_OF_DOCUMENT "End of Doc"
#define START_OF_DOCUMENT "Start of Doc"
#define DELETE_LINE "Delete Line"
#define SPLIT_VIEW "Split View"
#define UNSPLIT_VIEW "Unsplit View"
#define TEXT_VIEW "View"
#define NEW_DIRECTORY "New Dir"

//error messages - less important to translate
#define UNABLE_TO_UNDO "No undo"
#define OVERWRITE_FILE "Overwrite File?"
#define OVERWRITE_FILE_TEXT "A file with that name exists. Overwrite?"
#define UNABLE_TO_UNDO_TEXT "This change can not be undone."
#define TEXT_SELECTION_COPY_TRUNCATED "Selection Truncated"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Insufficient space in clipboard for entire selection"

#define MESSAGE_NOT_SUPPORTED "^1 Not Supported."
#define TEXT_FILE_NOT_FOUND "File Not Found"
#define MESSAGE_FILE_NOT_FOUND "File ^1 not found."
#define TEXT_DATABASE_ACCESS_ERROR "Database Access Error"
#define MESSAGE_DATABASE_ACCESS_ERROR "Database Error while ^1."
#define TEXT_FILE_ACCESS_ERROR "File Access Error"
#define MESSAGE_FILE_ACCESS_ERROR "Error in accessing file ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Screen Access Error"
#define MESSAGE_SCREEN_ACCESS_ERROR "Error in creating offscreen window."
#define TEXT_UNABLE_TO_SAVE "Unable to Save"
#define MESSAGE_UNABLE_TO_SAVE "Could not save file ^1."
#define TEXT_DEBUG_MESSAGE "Debug Message"
#define TEXT_OUT_OF_MEMORY "Out of Memory"
#define MESSAGE_OUT_OF_MEMORY "Memory Allocation Error in ^1"
#define FEATURE_NOT_IMPLEMENTED "Feature Not Implemented"

#endif
#ifdef LANGUAGE_FRENCH
#define DEFAULT_TEXT_EDITOR "Editeur par d�faut"
#define TAP_TO_OPEN "Tap pour ouvrir"
#define TEXT_DOCUMENT_ALPHA_CHARS_1 "Caract. alphab. :"
#define TEXT_DOCUMENT_ALPHA_CHARS_2 "(a-Z,0-9)"
#define CHARS_MESSAGE "(non cont�)"

#define SMALL_CHUNK_TEXT "Petit"
#define MEDIUM_CHUNK_TEXT "Medium"
#define LARGE_CHUNK_TEXT "Large"
#define OFF_CHUNK_TEXT "Off" //as in opposite of on
#define CLOSE "Fermer"
#define CLOSE_TITLE "Perdre modif?"
#define CLOSE_TITLE_SAVED "Fermer le fichier ?"
#define CLOSE_TEXT "Fermer le document actif sans enregistrer ? Toutes les modifs seront perdues."
#define CLOSE_TEXT_SAVED "Fermer le document actif ?"
#define INCREMENTAL_FILE_OPEN_MODE "Chargement initial du fichier"
#define STOP_RECORD_MENU "Arr�ter Enreg."
//Untranslated strings for the French version
#define FILE_TOO_LARGE "Fichier trop large"
#define FILE_TOO_LARGE_TEXT "Fichier d�passe taille maximale" // File exceeds maximum size for SiEd-Dana."
#define FILE_TRUNCATION_TEXT "par manque de m�moire une version tronqu�e du fichier est charg�e"//"Truncated version of file loaded due to insufficient memory."
#define FILE_TRUNCATION "erreur m�moire"//"Memory Error"
#define FROM_TOP "Du D�but"//"From Top"
#define KEYBOARD "Clavier"
// short for incremental search in the menu
#define INC_SEARCH_TEXT "Recherche incr�m." //"Inc. Search"
#define REVERT_FILE "Recharger le fichier?"
#define REVERT "Recharger"
#define MESSAGE_REVERT_FILE "Recharger le fichier? Cela supprimera toutes les modifications non sauvegard�es"
#define NONE_TEXT "Aucun"
#define EOL_TEXT "Saut de ligne"
#define SHOW_CODES_TEXT "Afficher code"
#define SHOW_MODE "Mode"
#define MACRO_POPUP_TEXT_1 "Si vous cr�ez une"
#define MACRO_POPUP_TEXT_2 "macro vous pouvez"
#define MACRO_POPUP_TEXT_3 "la lancer ici"

#define GET_PASSWORD "Entr. mot de passe"
#define PASSWORD_TEXT "Mot de passe:"
#define TEXT_ENCRYPTED "Crypter"
#define FILE_NOT_ENCRYPTED_TITLE "Fichier non crypt�"
#define FILE_NOT_ENCRYPTED_TEXT "Le fichier ^1 n'est pas crypt�"
#define DECRYPT "D�crypter"
#define QUICK_MACRO "Quick Mac."
#define FILE_LOCATION "Entrez le mot de passe"
#define UNABLE_TO_CREATE_DIR_TEXT "Impossible de cr�er le r�p. ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Erreur"
#define NO_COMPRESSED_DOC_TITLE "Pas support�"
#define NO_COMPRESSED_DOC_TEXT "Le fichier ^1 est compress�. Cela n'est pas encore support�."
#define MUST_ENTER_NAME_TITLE "Pas de nom"
#define MUST_ENTER_NAME_TEXT "Vous devez donner un nom � la macro"
#define CONFIRM_MACRO_DELETE "Confirmez"
#define MESSAGE_CONFIRM_MACRO_DELETE "Effacer la macro ^1?"
#define PLAY_MACRO "Lire macro"
#define START_RECORD "Enreg. macro"
#define RECORD "Enreg."
#define PLAY "Lire"
//C++ file text
#define INVALID_FILE_NAME_TITLE "Nom de fichier incorrect"
#define INVALID_FILE_NAME_TEXT "^1 n'est pas un nom valide."
#define SELECTION_MODE "Selection Mode"
#define TEXT_BEAM "Transmettre"
#define BEAM_FILE "Fichier s�lectionn�"
#define BEAM_APP "SiEd-Dana App."
#define PALM_STYLE_TEXT "Palm Style"
#define STANDARD_STYLE_TEXT "Standard"
#define SELECT_ALL "S�lect. tout"
#define WAITING_TEXT "Patientez SVP..." //Text displayed while leaving SiEd-Dana

//Resource text

//simple ones
#define OK "OK"
#define CANCEL "Annuler"
#define OVERWRITE "Effacer"
#define SAVE "Enregistrer" // "Enregistrer" should be ok as it is used by other applications
#define DISCARD "Annuler"  // be replaced by "Annuler" for same reasons
#define CLOSE "Fermer"
#define YES "Oui"
#define NO "Non"
#define TEXT_FONT "Police:"
#define TEXT_NONE "Aucun"
#define TEXT_SIZE "Taille:"
#define TOTAL "Total:"
#define OPEN "Ouvrir"
#define TEXT_FIND "Chercher"
#define TEXT_FIND_COLON "Chercher:"
#define TEXT_REPLACE "Remplacer"
#define DELETE "Effacer"
#define TEXT_DATE "Date:"
#define TEXT_COPY_FULL "Copier"
#define RENAME "Renommer"
#define TEXT_EXIT "Sortir"
#define TEXT_FILE "Fichier"
#define TEXT_NEW "Nouveau"
#define PREFERENCES_ABBR "Pr�fs." //abbreviation for preferences
#define TEXT_ABOUT "A propos de"
#define TEXT_COPY "Copier"
#define TEXT_PASTE "Coller"
#define TEXT_CUT "Couper"
#define TEXT_UNDO "Annuler" // can be replaced by english Undo
#define TEXT_REDO "R�p�ter"
#define TEXT_CURSOR "Curseur"
#define TEXT_END "Fin"
#define TEXT_HOME "D�but" //as in beginning of line key
#define TEXT_EDIT "Editer" //as in the menu title
#define NEW_DIRECTORY "Nv. r�pert."
#define TEXT_NEW_DIRECTORY "Nom du r�pertoire"

#define MENU_TEXT_STATS "Stats"
#define TEXT_CALCULATE "Calc" //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "Statistiques"
#define TEXT_DOCUMENT_CHARS "Caract�res:"
#define TEXT_DOCUMENT_WORDS "Mots:"
#define MANAGE_FILES "Fichiers"
//other text
#define FIND_AGAIN "Suivant..."
#define OLD_FILENAME "Nom actuel"
#define SAVE_AS "Enreg. sous..." // "Sauver en.."
#define SELECT_FILE "S�lect. fichier" // just put "Select. Fichier"
#define TERM_NOT_FOUND "Mot non trouv�" // funny TNT why not C4 ?
#define END_OF_DOCUMENT_REACHED "Fin du document"
#define CONFIRM_FILE_DELETE "Confirmez la suppression" // you coul use shorter "Confirmez la suppression"
#define MESSAGE_CONFIRM_FILE_DELETE "Effacer le fichier ^1?"
#define CONFIRM_OVERWRITE "Remplacer?"
#define OVERWRITE_FILE "Remplacer le fichier existant ?" // let's say : remove existing file ? you may put "Confirmez" for confirm
#define OVERWRITE_FILE_TEXT "Effacer le fichier existant ?"
#define MESSAGE_CONFIRM_OVERWRITE "Ouvrir un nouveau fichier effacera les modifications en cours. Sauvegarder le fichier d'abord ?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\251 Bas� sur SiEd, \251 2003-2005 Benjamin Roe.\nArtwork \251 Stefan Smith & Tankut Eric.\nCette application est sous licence GPL. Traduction fran�aise Johnny Brasseur (2003), David Bosman (2004) "// Is it ok ?

#define NEW_FILE "Nouveau fichier"
#define MESSAGE_NEW_FILE "Cr�er un nouveau fichier?"
#define EDITOR_PREFERENCES "Pr�f�rences"
#define TEXT_DELETE_ABBR "Ef" //two letter abbreviation for ReMove (Ef) for Effacer
#define TEXT_MOVE_ABBR "De" //Move (rename) (De) for Deplacer
#define TEXT_COPY_ABBR "Cp" //copy

#define COPY_FILE "Copier le fichier"
#define NEW_FILENAME "Nouveau nom de fichier"

#define RENAME_FILE "Renommer le fichier"

#define SAVE_FILE_AS "Enregistrer sous..."
#define FILENAME "Nom de fichier"

#define SEARCH_TERM "Chercher un mot" // "mot" means word, a term is a technical feature in french
#define MATCH_CASE "Respecter la casse"
#define MATCH_WHOLE_WORD "Mot entier"

#define REPLACE_ABBR "Rempl:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Rempl." //abbreviation for replace
#define TEXT_WITH "Avec:"
#define REPLACE_ALL_ABBR "R.tout" //abbreviation for replace all
#define END_OF_DOCUMENT "Fin du doc"
#define START_OF_DOCUMENT "D�but du doc"
#define DELETE_LINE "Effacer la ligne"
#define SPLIT_VIEW "Diviser la vue"
#define UNSPLIT_VIEW "Une seule vue" // means one view only : "Rassembler les vues" means Gather views
#define TEXT_VIEW "Vue" // what is the meaning of view here ?

//error messages - less important to translate
#define TEXT_SELECTION_COPY_TRUNCATED "S�lection tronqu�e"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Espace insuffisant dans le presse-papier pour la s�lection"
#define TEXT_FEATURE_ERROR "Erreur de fonctionnalit�"
#define MESSAGE_NOT_SUPPORTED "^1 Non fourni." // means not yet implemented ? not supplied ? not yet done ?
#define TEXT_FILE_NOT_FOUND "Fichier non trouv�"
#define MESSAGE_FILE_NOT_FOUND "Fichier ^1 non trouv�."
#define UNABLE_TO_UNDO "Pas d'annulation."
#define UNABLE_TO_UNDO_TEXT "Impossible d'annuler."
#define TEXT_DATABASE_ACCESS_ERROR "Erreur d'acc�s � la database" // we sometimes use Database instead of "base de donn�es" which is longer
#define MESSAGE_DATABASE_ACCESS_ERROR "Erreur database : ^1."
#define TEXT_FILE_ACCESS_ERROR "Fichier inaccessible"
#define MESSAGE_FILE_ACCESS_ERROR "Erreur lors de l'acc�s au fichier ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Ecran inaccessible"
#define MESSAGE_SCREEN_ACCESS_ERROR "Erreur lors de la cr�ation de la fen�tre d�di�e." // what means offscreen here ? means out of the screen drawing ? or dedicated ?
#define TEXT_UNABLE_TO_SAVE "Erreur sauvegarde"
#define MESSAGE_UNABLE_TO_SAVE "Fichier non enregistr� ^1."
#define TEXT_DEBUG_MESSAGE "Message Debug"
#define TEXT_OUT_OF_MEMORY "D�passement de capacit� m�moire"
#define MESSAGE_OUT_OF_MEMORY "Erreur d'allocation de la m�moire : ^1"
#define FEATURE_NOT_IMPLEMENTED "Fonction non impl�ment�e"
#define MESSAGE_FEATURE_NOT_IMPLEMENTED "Cette fonction sera impl�ment�e dans une version future. Soyez patient SVP!"
#endif

#ifdef LANGUAGE_GERMAN
#define REVERT_FILE "Neu laden?"
#define REVERT "Neu laden"
#define MESSAGE_REVERT_FILE "Aktuelle Datei neu laden? Alle �nderungen gehen verloren."
#define NONE_TEXT "Keine"
#define EOL_TEXT "Line Feeds"
#define SHOW_CODES_TEXT "Zeige Codes"
#define SHOW_MODE "Mode"
#define MACRO_POPUP_TEXT_1 "Aufgezeichnete"
#define MACRO_POPUP_TEXT_2 "Makros sind"
#define MACRO_POPUP_TEXT_3 "hier abspielbar"
#define GET_PASSWORD "Passwort eingeben"
#define PASSWORD_TEXT "Passwort:"
#define TEXT_ENCRYPTED "Verschl�sseln"
#define FILE_NOT_ENCRYPTED_TITLE "Datei nicht verschl�sselt"
#define FILE_NOT_ENCRYPTED_TEXT "File ^1 is not encrypted"
#define DECRYPT "Entschl�sseln"
#define QUICK_MACRO "Quick-Makro"
#define FILE_LOCATION "Gib ein Passwort f�r Datei ein  "
#define UNABLE_TO_CREATE_DIR_TEXT "Verzeichnis ^1 kann nicht angelegt werden."
#define UNABLE_TO_CREATE_DIR_TITLE "Fehler"
#define NO_COMPRESSED_DOC_TITLE "Nicht unterst�tzt"
#define NO_COMPRESSED_DOC_TEXT "Datei ^1 ist komprimiert. Komprimierte DOCs werden noch nicht unterst�tzt."
#define MUST_ENTER_NAME_TITLE "Namenlos"
#define MUST_ENTER_NAME_TEXT "Name f�r Makro ist erforderlich!"
#define CONFIRM_MACRO_DELETE "Best�tigung"
#define MESSAGE_CONFIRM_MACRO_DELETE "Makro ^1 l�schen?"
#define PLAY_MACRO "Makro abspielen"
#define START_RECORD "Makro aufnehmen"
#define STOP_RECORD_MENU "Aufnahme beenden"
#define RECORD "Aufnahme"
#define PLAY "Abspielen"
//C++ file text
#define INVALID_FILE_NAME_TITLE "Ung�ltiger Dateiname"
#define INVALID_FILE_NAME_TEXT "^1 ist kein g�ltiger Dateiname."
#define SELECTION_MODE "Auswahlmodus"
#define TEXT_BEAM "Beamen"
#define BEAM_FILE "Gew�hlte Datei"
#define BEAM_APP "SiEd-Dana App."
#define PALM_STYLE_TEXT "Palm Style"
#define STANDARD_STYLE_TEXT "Standard"
#define SELECT_ALL "Alles markieren"
#define WAITING_TEXT "Bitte warten..." //Text displayed while leaving SiEd-Dana

//Resource text

//simple ones
#define OK "OK"
#define CANCEL "Abbrechen"
#define OVERWRITE "�berschreiben"
#define SAVE "Speichern"
#define DISCARD "Verwerfen"
#define YES "Ja"
#define NO "Nein"
#define TEXT_FONT "Schrift"
#define TEXT_NONE "Keine"
#define TEXT_SIZE "Gr��e:"
#define TOTAL "Gesamt:"
#define OPEN "�ffnen"
#define TEXT_FIND "Suchen"
#define TEXT_FIND_COLON "Suchen:"
#define TEXT_REPLACE "Ersetzen"
#define DELETE "L�schen"
#define TEXT_DATE "Datum:"
#define TEXT_COPY_FULL "Kopieren"
#define RENAME "Umbenenn."
#define TEXT_EXIT "Beenden"
#define TEXT_FILE "Datei"
#define TEXT_NEW "Neu"
#define PREFERENCES_ABBR "Einstellungen.." //abbreviation for preferences
#define TEXT_ABOUT "�ber"
#define TEXT_COPY "Kopieren"
#define TEXT_PASTE "Einf�gen"
#define TEXT_CUT "Ausschneiden"
#define TEXT_UNDO "R�ckg�ngig"
#define TEXT_REDO "Wiederherstellen"
#define TEXT_CURSOR "Cursor"
#define TEXT_END "Ende"
#define TEXT_HOME "Anfang" //as in beginning of line key
#define TEXT_EDIT "Bearb." //as in the menu title
#define MANAGE_FILES "Datei"
#define TEXT_NEW_DIRECTORY "Neuer Ordner"

#define OLD_FILENAME "Alter Dateiname"
#define MENU_TEXT_STATS "Statistik"
#define TEXT_CALCULATE "Z�hle" //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "Dokumentstatistik"
#define TEXT_DOCUMENT_CHARS "Zeichen:"
#define TEXT_DOCUMENT_WORDS "W�rter:"
//other text
#define FIND_AGAIN "Weitersuchen"
#define SAVE_AS "Speichern unter.."
#define SELECT_FILE "Datei w�hlen"
#define TERM_NOT_FOUND "Ausdruck nicht gefunden"
#define END_OF_DOCUMENT_REACHED "Ende des Dokumentes erreicht"
#define CONFIRM_FILE_DELETE "Datei l�schen best�tigen"
#define MESSAGE_CONFIRM_FILE_DELETE "Datei ^1 l�schen?"
#define INC_SEARCH_TEXT "Inkrem. Suche"
#define CONFIRM_OVERWRITE "�berschreiben best�tigen"
#define MESSAGE_CONFIRM_OVERWRITE "�ffnen einer neuen Datei l�scht aktuelle �nderungen. Datei zuerst speichern?"
//#define MESSAGE_CONFIRM_OVERWRITE "Wenn Sie eine neue Datei �ffnen wird dies die gemachten �nderungen l�schen. �nderungen speichern?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\251 Beyogen auf SiEd, \251 2003-2005 Benjamin Roe.\nKunstwerk \251 Stefan Smith & Tankut Eric.\n\Deutsche �bersetzung von Sebastian Meyern\nDieses Programm wird unter den Auflagen der GPL verbreitet."

#define NEW_FILE "Neue Datei"
#define MESSAGE_NEW_FILE "Eine neue Datei �ffnen?"
#define EDITOR_PREFERENCES "Einstellungen"
#define TEXT_DELETE_ABBR "L�" //two letter abbreviation for ReMove
#define TEXT_MOVE_ABBR "Ve" //Move (rename)
#define TEXT_COPY_ABBR "Ko" //copy
#define CLOSE "Ende"
#define COPY_FILE "Datei kopieren"
#define NEW_FILENAME "Neuer Dateiname"
#define NEW_DIRECTORY "Neuer Ordner"
#define RENAME_FILE "Umbenennen"

#define SAVE_FILE_AS "Speichern unter"
#define FILENAME "Dateiname"

#define SEARCH_TERM "Suchen nach"
#define MATCH_CASE "Gross/Klein"
#define MATCH_WHOLE_WORD "Ganzes Wort"

#define REPLACE_ABBR "Ersetz:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Ersetz" //abbreviation for replace
#define TEXT_WITH "Mit:"
#define REPLACE_ALL_ABBR "Alle" //abbreviation for replace all
#define END_OF_DOCUMENT "Ende der Datei"
#define START_OF_DOCUMENT "Beginn der Datei"
#define DELETE_LINE "Zeile l�schen"
#define SPLIT_VIEW "Geteilte Ansicht"
#define UNSPLIT_VIEW "Gesamtansicht"
#define TEXT_VIEW "Ansicht"
#define OVERWRITE_FILE_TEXT "Datei �berschreiben?"
#define OVERWRITE_FILE "Datei �berschreiben?"
//error messages - less important to translate
#define UNABLE_TO_UNDO "R�ckg�ngig unm�glich."
#define UNABLE_TO_UNDO_TEXT "�nderung kann nicht r�ckg�ngig gemacht werden."
#define TEXT_SELECTION_COPY_TRUNCATED "Auswahl beschnitten"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Nicht gen�gend Platz in der Zwischenablage f�r die gesamte Auswahl"
#define TEXT_FEATURE_ERROR "Funktions-Fehler"
#define MESSAGE_NOT_SUPPORTED "^1 nicht unterst�tzt."
#define TEXT_FILE_NOT_FOUND "Datei nicht gefunden"
#define MESSAGE_FILE_NOT_FOUND "Datei ^1 nicht gefunden."
#define TEXT_DATABASE_ACCESS_ERROR "Fehler beim Zugriff auf die Datenbank"
#define MESSAGE_DATABASE_ACCESS_ERROR "Datenbankfehler w�hrend ^1."
#define TEXT_FILE_ACCESS_ERROR "Fehler beim Dateizugriff"
#define MESSAGE_FILE_ACCESS_ERROR "Fehler beim Zugriff auf Datei ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Fehler beim Zugriff auf den Bildschirm"
#define MESSAGE_SCREEN_ACCESS_ERROR "Fehler beim Erstellen des Offscreen Fensters"
#define TEXT_UNABLE_TO_SAVE "Speichern nicht m�glich"
#define MESSAGE_UNABLE_TO_SAVE "Datei ^1 kann nicht gespeichert werden."
#define TEXT_DEBUG_MESSAGE "Debug-Meldung"
#define TEXT_OUT_OF_MEMORY "Speicher voll"
#define MESSAGE_OUT_OF_MEMORY "Speicheranforderungs-Fehler bei ^1"
#define FEATURE_NOT_IMPLEMENTED "Funktion nicht implementiert"
#define MESSAGE_FEATURE_NOT_IMPLEMENTED "Diese Funktion wird in einer sp�teren Version eingef�gt. Bitte haben Sie Geduld!"
#endif

#ifdef LANGUAGE_SPANISH
#define FILE_TOO_LARGE "Archivo muy grande"
#define FILE_TOO_LARGE_TEXT "El archivo excede el maximo por SiEd-Dana."
#define FILE_TRUNCATION_TEXT "Version incompleta del archivo dada la capacidad de memoria disponible."
#define FILE_TRUNCATION "Error de memoria"
#define FROM_TOP "Desde arriba"
#define KEYBOARD "Teclado"
#define STOP_RECORD_MENU "Detener grabacion"
#define INC_SEARCH_TEXT "Busqueda Inc."
#define REVERT_FILE "�Cargar archivo?"
#define REVERT "Cargar"
#define MESSAGE_REVERT_FILE "�Cargar archivo actual? Todos los cambios seran perdidos."
#define NONE_TEXT "Ninguno"
#define EOL_TEXT "Fin de la linea"
#define SHOW_CODES_TEXT "Mostrar C�digos"
#define SHOW_MODE "Modo"
#define MACRO_POPUP_TEXT_1 "Si grabas un macro"
#define MACRO_POPUP_TEXT_2 "macro puedes"
#define MACRO_POPUP_TEXT_3 "reproducir desde aqui"
#define GET_PASSWORD "Introduce Contrase�a"
#define PASSWORD_TEXT "Contrase�a:"
#define TEXT_ENCRYPTED "Encriptar"
#define FILE_NOT_ENCRYPTED_TITLE "Archivo no encrtiptado"
#define FILE_NOT_ENCRYPTED_TEXT "El archivo ^1 no esta encriptado"
#define DECRYPT "Desencriptar"
#define QUICK_MACRO "Macro Rapido"
#define FILE_LOCATION "Introduce contrase�a para el archivo "
#define UNABLE_TO_CREATE_DIR_TEXT "No se puede crear el directorio ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Error"
#define NO_COMPRESSED_DOC_TITLE "No hay soporte"
#define NO_COMPRESSED_DOC_TEXT "Archivo ^1 esta comprimido. No hay soporte para archivos comprimidos aun."
#define MUST_ENTER_NAME_TITLE "Sin nombre"
#define MUST_ENTER_NAME_TEXT "Debes introducir un nombre a la Macro"
#define CONFIRM_MACRO_DELETE "Confirmar"
#define MESSAGE_CONFIRM_MACRO_DELETE "�Borrar Macro ^1?"
#define PLAY_MACRO "Reproducir Macro"
#define START_RECORD "Grabar Macro"
#define RECORD "Grabar"
#define PLAY "Reproducir"
//C++ file text
#define INVALID_FILE_NAME_TITLE "Nombre del archivo invalido"
#define INVALID_FILE_NAME_TEXT "^1 no es un nombre valido."
#define SELECTION_MODE "Selecciona modo"
#define TEXT_BEAM "Beam"
#define BEAM_FILE "Selecciona archivo"
#define BEAM_APP "SiEd-Dana App."
#define PALM_STYLE_TEXT "Estilo Palm"
#define STANDARD_STYLE_TEXT "Estandard"
#define SELECT_ALL "Seleccionar Todo"

//C++ file text

#define WAITING_TEXT "Por favor Espera..." //Text displayed while leaving SiEd-Dana

//Resource text

//simple ones
#define OK "Aceptar"
#define CANCEL "Cancelar"
#define OVERWRITE "Sobreescribir"
#define SAVE "Grabar"
#define DISCARD "Ignorar"
#define YES "Si"
#define NO "No"
#define TEXT_FONT "Fuente"
#define TEXT_NONE "None"
#define TEXT_SIZE "Tama�o:"
#define TOTAL "Total:"
#define OPEN "Abrir"
#define TEXT_FIND "Buscar"
#define TEXT_FIND_COLON "Buscar:"
#define TEXT_REPLACE "Reemplazar"
#define DELETE "Borrar"
#define TEXT_DATE "Fecha:"
#define TEXT_COPY_FULL "Copiar"
#define RENAME "Renombrar"
#define TEXT_EXIT "Salir"
#define TEXT_FILE "Archivo"
#define TEXT_NEW "Nuevo"
#define PREFERENCES_ABBR "Prefs" //abbreviation for preferences
#define TEXT_ABOUT "Acerca de"
#define TEXT_COPY "Copiar"
#define TEXT_PASTE "Pegar"
#define TEXT_CUT "Cortar"
#define TEXT_UNDO "Deshacer"
#define TEXT_REDO "Rehacer"
#define TEXT_CURSOR "Cursor"
#define TEXT_END "Fin"
#define TEXT_HOME "Inicio" //as in beginning of line key
#define TEXT_EDIT "Editar" //as in the menu title
#define CLOSE "Cerrar"
#define TEXT_NEW_DIRECTORY "Nuevo nombre del Dir"
#define MANAGE_FILES "Archivos"
#define MENU_TEXT_STATS "Stads"
#define OLD_FILENAME "Nombre de archivo"
#define NEW_DIRECTORY "Nuevo Dir"
#define RENAME_FILE "Renombrar"
#define TEXT_CALCULATE "Calc" //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "Estadisticas del Doc"
#define TEXT_DOCUMENT_CHARS "Caracteres:"
#define TEXT_DOCUMENT_WORDS "Palabras:"

//other text
#define FIND_AGAIN "Buscar de nuevo"
#define SAVE_AS "Grabar como"
#define SELECT_FILE "Seleccionar archivo"
#define TERM_NOT_FOUND "Termino no encontrado"
#define END_OF_DOCUMENT_REACHED "Fin de documento"
#define CONFIRM_FILE_DELETE "Confirmar Borrar Archivo"
#define MESSAGE_CONFIRM_FILE_DELETE "Borrar archivo ^1?"

#define CONFIRM_OVERWRITE "Confirmar Sobreescritura"
#define MESSAGE_CONFIRM_OVERWRITE "Abrir un nuevo archivo borrara los cambios actuales.\n\�Grabar archivo primero?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\251 Residencia en SiEd, \251 2003-2005 Benjamin Roe.\nObra de arte \251 Stefan Smith & Tankut Eric.\nTraducci�n al espa�ol por Abraham Estrada\n\nEsta aplicaci�n es distribuida bajo los terminos de GPL."

#define NEW_FILE "Nuevo Archivo"
#define MESSAGE_NEW_FILE "�Crear nuevo archivo?"
#define EDITOR_PREFERENCES "Preferencias"
#define TEXT_DELETE_ABBR "Rm" //two letter abbreviation for ReMove
#define TEXT_MOVE_ABBR "Mv" //Move (rename)
#define TEXT_COPY_ABBR "Cp" //copy

#define NEW_FILENAME "Nuevo nombre de archivo"

#define SAVE_FILE_AS "Grabar Archivo como"
#define FILENAME "Nombre de archivo"

#define SEARCH_TERM "Buscar Termino"
#define MATCH_CASE "May�sculas"
#define MATCH_WHOLE_WORD "Palabra completa"

#define REPLACE_ABBR "Reepl:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Reepl" //abbreviation for replace
#define TEXT_WITH "Con:"
#define REPLACE_ALL_ABBR "R all" //abbreviation for replace all
#define END_OF_DOCUMENT "Fin del Doc"
#define START_OF_DOCUMENT "Inicio del Doc"
#define DELETE_LINE "Borrar Linea"
#define SPLIT_VIEW "Vista Doble"
#define UNSPLIT_VIEW "Vista Simple"
#define TEXT_VIEW "Vista"
#define UNABLE_TO_UNDO "No se puede deshacer."
#define UNABLE_TO_UNDO_TEXT "El cambio al archivo no se puede deshacer."
#define OVERWRITE_FILE "�Sobreescribir el archivo?"
#define OVERWRITE_FILE_TEXT "�Sobreescribir el archivo?"

//error messages - less important to translate
#define TEXT_SELECTION_COPY_TRUNCATED "Selecci�n Truncada"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Espacio insuficiente para copiar la selecci�n"
#define TEXT_FEATURE_ERROR "Error en la caracter�stica"
#define MESSAGE_NOT_SUPPORTED "^1 No Soportado."
#define TEXT_FILE_NOT_FOUND "Archivo no encontrado"
#define MESSAGE_FILE_NOT_FOUND "El Archivo ^1 no fue encontrado."
#define TEXT_DATABASE_ACCESS_ERROR "Error en la base de datos"
#define MESSAGE_DATABASE_ACCESS_ERROR "Error en la base de datos cuando ^1."
#define TEXT_FILE_ACCESS_ERROR "Error al accesar al archivo"
#define MESSAGE_FILE_ACCESS_ERROR "Error al accesar al archivo ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Error de acceso a pantalla"
#define MESSAGE_SCREEN_ACCESS_ERROR "Error in creating offscreen window."
#define TEXT_UNABLE_TO_SAVE "Imposible de grabar"
#define MESSAGE_UNABLE_TO_SAVE "No se pudo grabar el archivo ^1."
#define TEXT_DEBUG_MESSAGE "Mensaje de depuraci�n"
#define TEXT_OUT_OF_MEMORY "Sin memoria"
#define MESSAGE_OUT_OF_MEMORY "Error en la memoria de asiganaci�n ^1"
#define FEATURE_NOT_IMPLEMENTED "Caracter�stica no implementada"
#define MESSAGE_FEATURE_NOT_IMPLEMENTED "Caracter�stica no implementada hasta versiones posteriores. Por favor se paciente!"

#endif//end spanish

#ifdef LANGUAGE_CATALAN
#define CHARS_MESSAGE "(no s'han comptat)"
#define ESTIMATE_TEXT "(estimat)"
#define SMALL_CHUNK_TEXT "Petit"
#define MEDIUM_CHUNK_TEXT "Mitg"
#define LARGE_CHUNK_TEXT "Mitg"
#define OFF_CHUNK_TEXT "Cap"
#define DEFAULT_TEXT_EDITOR "Editor per omissi�"
#define INCREMENTAL_FILE_OPEN_MODE "Carrega Arxiu Inicial"

#define READ_ONLY_MODE "Nom�s de lectura"
#define TAP_TO_OPEN "Clica per obrir"
#define MAIN_DIRNODE_TEXT "Principal"

#define INC_SEARCH_TEXT "Cerca progressiva"
#define MACRO_POPUP_FOUR_STRINGS
//remaining english strings I could find
#define FILE_TOO_LARGE "L'arxiu �s massa gran"
#define FILE_TOO_LARGE_TEXT "L'arxiu supera la mida m�xima que SiEd-Dana pot tractar."
#define FILE_TRUNCATION_TEXT "S'ha carregat una versi� truncada de l'arxiu donat que ho hi ha prou mem�ria."
#define FILE_TRUNCATION "Error de mem�ria"
#define FROM_TOP "Des d'adalt"
#define KEYBOARD "Teclat"
#define REVERT_FILE "Tornar a carregar l'arxiu?"
#define REVERT "Torna a carregar"
#define MESSAGE_REVERT_FILE "Tornar a carregar? Es perdr�n tots els canvis."

#define PLAY_MACRO_MENU "Executa Macro"
#define START_RECORD_MENU "Registra"
#define STOP_RECORD_MENU "Atura"

#define NONE_TEXT "Cap"
#define EOL_TEXT "Finals de l��nia"
#define SHOW_CODES_TEXT "Mostra els Codis"
#define SHOW_MODE "Mode"
#define MACRO_POPUP_TEXT_1 "Si heu registrat"
#define MACRO_POPUP_TEXT_2 "una macro, la"
#define MACRO_POPUP_TEXT_3 "podeu executar"
#define MACRO_POPUP_TEXT_4 "des d'aqu�"
#define GET_PASSWORD "Trieu la contrassenya"
#define PASSWORD_TEXT "Contrassenya:"
#define TEXT_ENCRYPTED "Xifrat"
#define FILE_NOT_ENCRYPTED_TITLE "Arxiu no xifrat"
#define FILE_NOT_ENCRYPTED_TEXT "L'arxiu ^1 no est� xifrat"
#define DECRYPT "Desxifra"
#define QUICK_MACRO "Macro r�pida"
#define FILE_LOCATION "Trieu la contrassenya per l'arxiu "
#define UNABLE_TO_CREATE_DIR_TEXT "No es pot crear la carpeta ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Error"
#define NO_COMPRESSED_DOC_TITLE "No perm�s"
#define NO_COMPRESSED_DOC_TEXT "L'arxiu ^1 est� comprimit. Encara no es permeten arxius DOC comprimits."
#define MUST_ENTER_NAME_TITLE "Sense nom"
#define MUST_ENTER_NAME_TEXT "Heu de donar un nom a la Macro"
#define CONFIRM_MACRO_DELETE "Confirmaci�"
#define MESSAGE_CONFIRM_MACRO_DELETE "Voleu suprimir la Macro ^1?"
#define PLAY_MACRO "Executa Macro"
#define START_RECORD "Registra Macro"
#define RECORD "Registra"
#define PLAY "Executa"
//C++ file text
#define INVALID_FILE_NAME_TITLE "El nom de l'arxiu no �s v�lid"
#define INVALID_FILE_NAME_TEXT "^1 no �s un nom d'arxiu v�lid."
#define SELECTION_MODE "Tipus de selecci�"
#define TEXT_BEAM "Envia"
#define BEAM_FILE "L'arxiu seleccionat"
#define BEAM_APP "l'aplicaci� SiEd-Dana"
#define PALM_STYLE_TEXT "A l'estil Palm"
#define STANDARD_STYLE_TEXT "Est�ndar"
#define SELECT_ALL "Selecciona-ho tot"
//Resource text
#define WAITING_TEXT "Un moment..." //Text displayed while a long action is happening

//simple ones
#define OK "D'acord"
#define OVERWRITE "Sobreesciu"
#define CANCEL "Cancel�la"
#define SAVE "Desa"
#define DISCARD "Descarta"
#define YES "S�"
#define NO "No"
#define TEXT_FONT "Lletra:"
#define TEXT_NONE "Cap"
#define TEXT_SIZE "Mida:"
#define TOTAL "Total:"
#define OPEN "Obre"
#define TEXT_FIND "Cerca"
#define TEXT_FIND_COLON "Cerca:"
#define TEXT_REPLACE "Reempla�a"
#define DELETE "Suprimeix"
#define TEXT_DATE "Data:"
#define TEXT_COPY_FULL "Copia"
#define RENAME "Anomena"
#define TEXT_EXIT "Surt"
#define TEXT_FILE "Arxiu"
#define TEXT_NEW "Nou"
#define PREFERENCES_ABBR "Prefer�ncies" //abbreviation for preferences
#define TEXT_ABOUT "Quant a"
#define TEXT_COPY "Copia"
#define TEXT_PASTE "Enganxa"
#define TEXT_CUT "Talla"
#define TEXT_UNDO "Desf�s"
#define TEXT_REDO "Restaura"
#define TEXT_CURSOR "Cursor"
#define TEXT_END "Fi"
#define TEXT_HOME "Inici" //as in beginning of line key
#define TEXT_EDIT "Edita" //as in the menu title
#define TEXT_CALCULATE "Calcula" //abbreviation for calculate
#define MENU_TEXT_STATS "Estad�stiques" //abbreviation for statistics
#define TEXT_DOCUMENT_STATISTICS "Estad��stiques" //abbreviation for statistics
#define TEXT_DOCUMENT_CHARS "Car�cters:"
#define TEXT_DOCUMENT_WORDS "Mots:"

#define TEXT_NEW_DIRECTORY "Nom del nou direc."
#define MANAGE_FILES "Arxius"
#define CLOSE "Tanca"
#define OLD_FILENAME "Nom actual"
#define NEW_FILENAME "Nou nom"
#define RENAME_FILE "Canvia de nom"
#define NEW_DIRECTORY "Nou Dir"
//other text
#define FIND_AGAIN "Seg�ent"
#define SAVE_AS "Anomena i desa"
#define SELECT_FILE "Obre"
#define TERM_NOT_FOUND "No es troba"
#define END_OF_DOCUMENT_REACHED "Final del document"
#define CONFIRM_FILE_DELETE "Confirmeu Suprimir Arxiu"
#define MESSAGE_CONFIRM_FILE_DELETE "Segur que voleu esborrar l'arxiu ^1?"

#define CONFIRM_OVERWRITE "Confirmeu Sobreescriptura"
#define MESSAGE_CONFIRM_OVERWRITE "Obrir un nou arxiu esborrar� els canvis actuals. Voleu desar-los primer?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\251 Basat en SiEd, \251 2003-2005 Benjamin Roe.\nObra d'art \251 Stefan Smith & Tankut Eric.\nAquesta aplicaci� es distribueix i tradueix sota els termes de la GPL.\251 de la traducci�: PalmCAT 2003\nwww.palmcat.org\n"

#define NEW_FILE "Nou Arxiu"
#define MESSAGE_NEW_FILE "Obrir un nou arxiu?"
#define EDITOR_PREFERENCES "Editor de Prefer�ncies"

#define SAVE_FILE_AS "Anomena i desa"
#define FILENAME "Nom"

#define SEARCH_TERM "Cerca"
#define MATCH_CASE "Coinc. exacta"
#define MATCH_WHOLE_WORD "Paraul. complet."

#define REPLACE_ABBR "Reemp:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Reemp" //abbreviation for replace
#define TEXT_WITH "amb:"
#define REPLACE_ALL_ABBR "R tot" //abbreviation for replace all
#define END_OF_DOCUMENT "Fi del Doc"
#define START_OF_DOCUMENT "Inici del Doc"
#define DELETE_LINE "Esborra la l�nia"
#define SPLIT_VIEW "Vista dividida" //into two
#define UNSPLIT_VIEW "Una vista"
#define TEXT_VIEW "Vista" //as in the screen display

//error messages - less important to translate
#define UNABLE_TO_UNDO "No es pot desfer"
#define OVERWRITE_FILE "Segur que voleu sobreescriure arxiu?"
#define OVERWRITE_FILE_TEXT "Aquest arxiu ja existeix. Voleu substituir el fitxer existent?"
#define UNABLE_TO_UNDO_TEXT "Aquest canvi no es pot desfer."
#define TEXT_SELECTION_COPY_TRUNCATED "Selecci� retallada"
#define MESSAGE_SELECTION_COPY_TRUNCATED "No hi ha prou mem�ria al portapapers per tota la selecci�"

#define MESSAGE_NOT_SUPPORTED "^1 No �s perm�s."
#define TEXT_FILE_NOT_FOUND "No es troba l'arxiu"
#define MESSAGE_FILE_NOT_FOUND "L'arxiu ^1 no es troba."
#define TEXT_DATABASE_ACCESS_ERROR "Error de Base de Dades"
#define MESSAGE_DATABASE_ACCESS_ERROR "Hi ha hagut un error mentre ^1."
#define TEXT_FILE_ACCESS_ERROR "Error d'acc�s a arxiu"
#define MESSAGE_FILE_ACCESS_ERROR "Error d'acc�s a l'arxiu ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Error d'acc�s a la pantalla"
#define MESSAGE_SCREEN_ACCESS_ERROR "Error al crear una finestra fora de la pantalla."
#define TEXT_UNABLE_TO_SAVE "No es pot desar"
#define MESSAGE_UNABLE_TO_SAVE "No s'ha pogut desar l'arxiu ^1."
#define TEXT_OUT_OF_MEMORY "Sense Mem�ria"
#define MESSAGE_OUT_OF_MEMORY "Error d'assignaci� de mem�ria a ^1"
#define TEXT_DEBUG_MESSAGE "Error"
#endif

#ifdef LANGUAGE_PORTUGUESE
#define REVERT_FILE "Reload File?"
#define REVERT "Reload"
#define MESSAGE_REVERT_FILE "Reload current file? All changes will be lost."
#define NONE_TEXT "None"
#define EOL_TEXT "Line Feeds"
#define SHOW_CODES_TEXT "Show Codes"
#define SHOW_MODE "Mode"
#define MACRO_POPUP_TEXT_1 "If you record a"
#define MACRO_POPUP_TEXT_2 "macro you can"
#define MACRO_POPUP_TEXT_3 "play it from here"
#define GET_PASSWORD "Enter Password"
#define PASSWORD_TEXT "Password:"
#define TEXT_ENCRYPTED "Encrypt"
#define FILE_NOT_ENCRYPTED_TITLE "File Not Encrypt"
#define FILE_NOT_ENCRYPTED_TEXT "File ^1 is not encrypted"
#define DECRYPT "Decrypt"
#define QUICK_MACRO "Quick Mac."
#define FILE_LOCATION "Enter password for file "
#define UNABLE_TO_CREATE_DIR_TEXT "Unable to create directory ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Error"
#define NO_COMPRESSED_DOC_TITLE "Not Supported"
#define NO_COMPRESSED_DOC_TEXT "File ^1 is compressed. No support for compressed DOCs yet."
#define MUST_ENTER_NAME_TITLE "No Name"
#define MUST_ENTER_NAME_TEXT "Must enter a name for the macro"
#define CONFIRM_MACRO_DELETE "Confirm"
#define MESSAGE_CONFIRM_MACRO_DELETE "Delete Macro ^1?"
#define PLAY_MACRO "Play Macro"
#define START_RECORD "Record Macro"
#define RECORD "Record"
#define PLAY "Play"
//C++ file text
#define INVALID_FILE_NAME_TITLE "Nome de arq. Inv�lido"
#define INVALID_FILE_NAME_TEXT "^1 n�o � um nome v�lido."
#define SELECTION_MODE "Modo de Sele��o"
#define TEXT_BEAM "Enviar"
#define BEAM_FILE "Arquivo Selecionado"
#define BEAM_APP "Enviar SiEd-Dana"
#define PALM_STYLE_TEXT "Estilo Palm"
#define STANDARD_STYLE_TEXT "Padr�o"
#define SELECT_ALL "Selecionar Tudo"
#define WAITING_TEXT "Aguarde um momento..." //Text displayed while leaving


//Resource text
#define TEXT_NEW_DIRECTORY "Novo Nome de Diret�rio"

//simple ones
#define OK "OK"
#define CLOSE "Fechar"
#define OVERWRITE "Sobrescrever"
#define CANCEL "Cancelar"
#define SAVE "Salvar"
#define DISCARD "Discartar"
#define YES "Sim"
#define NO "N�o"
#define TEXT_FONT "Fonte"
#define TEXT_NONE "Nenhum"
#define TEXT_SIZE "Tamanho:"
#define TOTAL "Total:"
#define OPEN "Abrir"
#define TEXT_FIND "Procu."
#define TEXT_FIND_COLON "Procu:"
#define TEXT_REPLACE "Subst."
#define DELETE "Deletar"
#define TEXT_DATE "Data:"
#define TEXT_COPY_FULL "Copiar"
#define RENAME "Renomear"
#define TEXT_EXIT "Sair"
#define TEXT_FILE "Arquivo"
#define TEXT_NEW "Novo"
#define PREFERENCES_ABBR "Prefs" //abbreviation for preferences
#define TEXT_ABOUT "Sobre"
#define TEXT_COPY "Copiar"
#define TEXT_PASTE "Colar"
#define TEXT_CUT "Recortar"
#define TEXT_UNDO "Desfazer"
#define TEXT_REDO "Refazer"
#define TEXT_CURSOR "Cursor"
#define TEXT_END "Fim"
#define TEXT_HOME "In�cio" //as in beginning of line key
#define TEXT_EDIT "Editar" //as in the menu title
#define TEXT_CALCULATE "Calcular" //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "Estat�sticas do Documento"
#define TEXT_DOCUMENT_CHARS "Caracteres:"
#define TEXT_DOCUMENT_WORDS "Palavras:"
#define MENU_TEXT_STATS "Estat�sticas"
#define MANAGE_FILES "Arquivos"
//other text
#define NEW_FILENAME "Novo Nome"
#define OLD_FILENAME "Nome Atual"
#define RENAME_FILE "Renomear Arquivo"
#define FIND_AGAIN "Procurar Novamente"
#define SAVE_AS "Salvar Como"
#define SELECT_FILE "Selecionar Arquivo"
#define TERM_NOT_FOUND "Termo n�o encontrado"
#define END_OF_DOCUMENT_REACHED "Final do Documento"
#define CONFIRM_FILE_DELETE "Confirmar Deleta��o do Arquivo"
#define MESSAGE_CONFIRM_FILE_DELETE "Deletar arquivo ^1?"

#define CONFIRM_OVERWRITE "Confirmar Sobrescri��o"
#define MESSAGE_CONFIRM_OVERWRITE "Abrir um novo arquivo ir� apagar as mudan�as. Deseja salvar primeiro?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\251 Baseado em SiEd, \251 2003-2005 Benjamin Roe.\nObra de arte \251 Stefan Smith & Tankut Eric.\nEsta aplica��o � distribu�da sob os termos GPL."

#define NEW_FILE "Novo Arquivo"
#define MESSAGE_NEW_FILE "Abrir um novo arquivo?"
#define EDITOR_PREFERENCES "Prefer�ncias do Editor"

#define SAVE_FILE_AS "Salvar Arquivo Como"
#define FILENAME "Nome do Arquivo"

#define SEARCH_TERM "Termo a Procurar"
#define MATCH_CASE "Coincidir Maiusc./Minusc."
#define MATCH_WHOLE_WORD "Palavra Completa"

#define REPLACE_ABBR "Trocar:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Trocar" //abbreviation for replace
#define TEXT_WITH "Com:"
#define REPLACE_ALL_ABBR "Tr. Tu." //abbreviation for replace all
#define END_OF_DOCUMENT "Fim do Documento"
#define START_OF_DOCUMENT "In�cio do Documento"
#define DELETE_LINE "Deletar Linha"
#define SPLIT_VIEW "Visualiza��o Dividida"
#define UNSPLIT_VIEW "Visualiza��o �nica"
#define TEXT_VIEW "Vis."
#define NEW_DIRECTORY "Novo Diret�rio"

//error messages - less important to translate
#define UNABLE_TO_UNDO "Sem volta!"
#define OVERWRITE_FILE "Sobrescrever Arquivo?"
#define OVERWRITE_FILE_TEXT "J� existe um arquivo com esse nome. Sobrescrever?"
#define UNABLE_TO_UNDO_TEXT "Esta mudan�a n�o poder� ser desfeita."
#define TEXT_SELECTION_COPY_TRUNCATED "Sele��o truncada."
#define MESSAGE_SELECTION_COPY_TRUNCATED "Espa�o insuficiente na �rea de transfer�ncia para esta sele��o."

#define MESSAGE_NOT_SUPPORTED "^1 N�o Suportado."
#define TEXT_FILE_NOT_FOUND "Arquivo n�o encontrado"
#define MESSAGE_FILE_NOT_FOUND "Arquivo ^1 n�o encontrado."
#define TEXT_DATABASE_ACCESS_ERROR "Erro de acesso ao banco de dados"
#define MESSAGE_DATABASE_ACCESS_ERROR "Erro de banco de dados enquanto ^1."
#define TEXT_FILE_ACCESS_ERROR "Erro de acesso de arquivo"
#define MESSAGE_FILE_ACCESS_ERROR "Erro no acesso ao arquivo ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Erro de acesso a tela."
#define MESSAGE_SCREEN_ACCESS_ERROR "Erro na cria��o da janela."
#define TEXT_UNABLE_TO_SAVE "N�o posso salvar"
#define MESSAGE_UNABLE_TO_SAVE "N�o posso salvar o arquivo ^1."
#define TEXT_DEBUG_MESSAGE "Mensagem de Debug"
#define TEXT_OUT_OF_MEMORY "Falta de Mem�ria"
#define MESSAGE_OUT_OF_MEMORY "Erro de aloca��o de mem�ria em ^1"
#define FEATURE_NOT_IMPLEMENTED "Recurso n�o implementado"

#endif


#ifdef LANGUAGE_NORWEGIAN

//Remaining untranslated strings
#define INC_SEARCH_TEXT "Inkr. S�k" //abbreviation for incremental search
#define FILE_TOO_LARGE "For stor fil"
#define FILE_TOO_LARGE_TEXT "Fil for stor for SiEd-Dana."
#define FILE_TRUNCATION_TEXT "Filen avkuttet pga for lite minne."
#define FILE_TRUNCATION "Minne feil"
#define STOP_RECORD_MENU "Stans innspilling"

#define FROM_TOP "Fra topp"
#define KEYBOARD "Tastatur"
#define INVALID_FILE_NAME_TITLE "Ugyldig filnavn"
#define INVALID_FILE_NAME_TEXT "^1 er ikke et gyldig filnavn."
#define SELECTION_MODE "Utvalgsmodus"
#define TEXT_BEAM "Send"
#define BEAM_FILE "Valgt fil"
#define BEAM_APP "SiEd-Dana Prog."
#define PALM_STYLE_TEXT "Palm stil"
#define STANDARD_STYLE_TEXT "Standard"
#define SELECT_ALL "Velg alt"
#define REVERT_FILE "Gjen�pne fil?"
#define REVERT "Gjen�pne fil"
#define MESSAGE_REVERT_FILE "Gjen�pne aktuell fil? Alle endringer tapes."
#define NONE_TEXT "Ingen"
#define EOL_TEXT "Linjeskift"
#define SHOW_CODES_TEXT "Vis koder"
#define SHOW_MODE "Modus"
#define MACRO_POPUP_TEXT_1 "Innspilte makro"
#define MACRO_POPUP_TEXT_2 "kan spilles"
#define MACRO_POPUP_TEXT_3 "av herfra"
#define GET_PASSWORD "Skriv passord"
#define PASSWORD_TEXT "Passord:"
#define TEXT_ENCRYPTED "Krypter"
#define FILE_NOT_ENCRYPTED_TITLE "Fil er ikke kryptert"
#define FILE_NOT_ENCRYPTED_TEXT "Fil ^1 er ikke kryptert"
#define DECRYPT "Dekrypter"
#define QUICK_MACRO "Hurtig Mak."
#define FILE_LOCATION "Skriv passord for fil"
#define UNABLE_TO_CREATE_DIR_TEXT "Kan ikke lage mappe ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Feil"
#define NO_COMPRESSED_DOC_TITLE "Ikke st�ttet"
#define NO_COMPRESSED_DOC_TEXT "Fil ^1 er komprimert. Ingen st�tte for komprimerte DOK enn�."
#define MUST_ENTER_NAME_TITLE "Ingen navn"
#define MUST_ENTER_NAME_TEXT "Trenger navn for makroen"
#define CONFIRM_MACRO_DELETE "Bekreft"
#define MESSAGE_CONFIRM_MACRO_DELETE "Slett makro ^1?"
#define PLAY_MACRO "Avspill makro"
#define START_RECORD "Innspill makro"
#define RECORD "Innspill"
#define PLAY "Avspill"


#define WAITING_TEXT "Vennligst vent..." //Text displayed while leaving SiEd-Dana

//Resource text
#define TEXT_NEW_DIRECTORY "Nytt mappenavn"

//simple ones
#define OK "OK"
#define CLOSE "Lukk"
#define OVERWRITE "Overskriv"
#define CANCEL "Avbryt"
#define SAVE "Lagre"
#define DISCARD "Forkast"
#define YES "Ja"
#define NO "Nei"
#define TEXT_FONT "Skrifttype"
#define TEXT_NONE "Ingen"
#define TEXT_SIZE "St�rrelse:"
#define TOTAL "Total:"
#define OPEN "�pne"
#define TEXT_FIND "Finn"
#define TEXT_FIND_COLON "Finn:"
#define TEXT_REPLACE "Finn & erstatt"
#define DELETE "Slett"
#define TEXT_DATE "Dato:"
#define TEXT_COPY_FULL "Kopier"
#define RENAME "Gi nytt navn"
#define TEXT_EXIT "Avslutt"
#define TEXT_FILE "Fil"
#define TEXT_NEW "Ny"
#define PREFERENCES_ABBR "Alt." //abbreviation for preferences
#define TEXT_ABOUT "Om"
#define TEXT_COPY "Kopier"
#define TEXT_PASTE "Lim inn"
#define TEXT_CUT "Klipp ut"
#define TEXT_UNDO "Angre"
#define TEXT_REDO "Gjenta"
#define TEXT_CURSOR "Mark�r"
#define TEXT_END "Linjeslutt"
#define TEXT_HOME "Hjem" //as in beginning of line key
#define TEXT_EDIT "Rediger" //as in the menu title
#define TEXT_CALCULATE "Beregn" //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "Dokument statistikk"
#define TEXT_DOCUMENT_CHARS "Tegn:"
#define TEXT_DOCUMENT_WORDS "Ord:"
#define MENU_TEXT_STATS "Stats"
#define MANAGE_FILES "Filer"
//other text
#define NEW_FILENAME "Nytt filnavn"
#define OLD_FILENAME "Gammelt filnavn"
#define RENAME_FILE "Endre filnavn"
#define FIND_AGAIN "Finn neste"
#define SAVE_AS "Lagre som"
#define SELECT_FILE "Velg fil"
#define TERM_NOT_FOUND "Fant ikke tekst"
#define END_OF_DOCUMENT_REACHED "N�dde slutten av dokumentet"
#define CONFIRM_FILE_DELETE "Bekreft sletting av fil"
#define MESSAGE_CONFIRM_FILE_DELETE "Slett filen ^1?"

#define CONFIRM_OVERWRITE "Bekreft overskriving"
#define MESSAGE_CONFIRM_OVERWRITE "Endringer vil g� tapt ved �pning av ny fil. Lagre f�rst?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\251 Basert pa SiEd, \251 2003-2005 Benjamin Roe.\nArtwork \251 Stefan Smith & Tankut Eric.\nDenne applikasjonen distribueres under GPL-lisensen. Oversatt til norsk av John Gothard" //Norwegian translation by jorigo@online.no

#define NEW_FILE "Ny fil"
#define MESSAGE_NEW_FILE "�pne en ny fil?"
#define EDITOR_PREFERENCES "Editor alternativer"

#define SAVE_FILE_AS "Lagre filen som"
#define FILENAME "Filnavn"

#define SEARCH_TERM "S�keord"
#define MATCH_CASE "Sm�/store bokst."
#define MATCH_WHOLE_WORD "Hele ordet"

#define REPLACE_ABBR "Erst:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Erst" //abbreviation for replace
#define TEXT_WITH "Med:"
#define REPLACE_ALL_ABBR "Erst. alle" //abbreviation for replace all
#define END_OF_DOCUMENT "Dok slutt"
#define START_OF_DOCUMENT "Dok start"
#define DELETE_LINE "Slett linje"
#define SPLIT_VIEW "Delt skjerm"
#define UNSPLIT_VIEW "Udelt skjerm"
#define TEXT_VIEW "Vindu"
#define NEW_DIRECTORY "Ny mappe"

//error messages - less important to translate
#define UNABLE_TO_UNDO "Kan ikke angres"
#define OVERWRITE_FILE "Overskrive fil?"
#define OVERWRITE_FILE_TEXT "En fil med samme navn ekstisterer. Overskriv?"
#define UNABLE_TO_UNDO_TEXT "Denne forandringen kan ikke angres."
#define TEXT_SELECTION_COPY_TRUNCATED "Utvalg avkuttet"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Ikke plass i utklippstavlet for valget"

#define MESSAGE_NOT_SUPPORTED "^1 st�ttes ikke."
#define TEXT_FILE_NOT_FOUND "Fant ikke filen"
#define MESSAGE_FILE_NOT_FOUND "Filen ^1 ble ikke funnet."
#define TEXT_DATABASE_ACCESS_ERROR "Databasefeil"
#define MESSAGE_DATABASE_ACCESS_ERROR "Databasefeil ved ^1."
#define TEXT_FILE_ACCESS_ERROR "Filtilgangsfeil"
#define MESSAGE_FILE_ACCESS_ERROR "Feil ved Error in accessing file ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Skjermfeil"
#define MESSAGE_SCREEN_ACCESS_ERROR "Feil ved tilgang til dobbelbuffer."
#define TEXT_UNABLE_TO_SAVE "Kunne ikke lagre"
#define MESSAGE_UNABLE_TO_SAVE "Kunne ikke lagre til filen ^1."
#define TEXT_DEBUG_MESSAGE "Debugmelding"
#define TEXT_OUT_OF_MEMORY "Tom for minne"
#define MESSAGE_OUT_OF_MEMORY "Minnetildelingsfeil ved ^1"
#define FEATURE_NOT_IMPLEMENTED "Funksjonen er ikke implimentert"
#endif
#ifdef LANGUAGE_ITALIAN
#define REVERT_FILE "Reload File?"
#define REVERT "Reload"
#define MESSAGE_REVERT_FILE "Reload current file? All changes will be lost."
#define NONE_TEXT "None"
#define EOL_TEXT "Line Feeds"
#define SHOW_CODES_TEXT "Show Codes"
#define SHOW_MODE "Mode"
#define MACRO_POPUP_TEXT_1 "If you record a"
#define MACRO_POPUP_TEXT_2 "macro you can"
#define MACRO_POPUP_TEXT_3 "play it from here"
#define GET_PASSWORD "Enter Password"
#define PASSWORD_TEXT "Password:"
#define TEXT_ENCRYPTED "Encrypt"
#define FILE_NOT_ENCRYPTED_TITLE "File Not Encrypt"
#define FILE_NOT_ENCRYPTED_TEXT "File ^1 is not encrypted"
#define DECRYPT "Decrypt"
#define QUICK_MACRO "Quick Mac."
#define FILE_LOCATION "Enter password for file "
#define UNABLE_TO_CREATE_DIR_TEXT "Unable to create directory ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Error"
#define NO_COMPRESSED_DOC_TITLE "Not Supported"
#define NO_COMPRESSED_DOC_TEXT "File ^1 is compressed. No support for compressed DOCs yet."
#define MUST_ENTER_NAME_TITLE "No Name"
#define MUST_ENTER_NAME_TEXT "Must enter a name for the macro"
#define CONFIRM_MACRO_DELETE "Confirm"
#define MESSAGE_CONFIRM_MACRO_DELETE "Delete Macro ^1?"
#define PLAY_MACRO "Play Macro"
#define START_RECORD "Record Macro"
#define RECORD "Record"
#define PLAY "Play"


#define INVALID_FILE_NAME_TITLE "Nome di file non valido"
#define INVALID_FILE_NAME_TEXT "^1 non � un nome di file valido."
#define SELECTION_MODE "Modalit� selezione"
#define TEXT_BEAM "Invia IR"
#define BEAM_FILE "File selezionato"
#define BEAM_APP "SiEd-Dana App."
#define PALM_STYLE_TEXT "Stile Palm"
#define STANDARD_STYLE_TEXT "Standard"
#define SELECT_ALL "Seleziona tutto"


#define WAITING_TEXT "Prego attendi..." //Text displayed while leaving SiEd-Dana

//Resource text
#define TEXT_NEW_DIRECTORY "Nuovo nome della directory"

//simple ones
#define OK "OK"
#define CLOSE "Chiudi"
#define OVERWRITE "Sovrascrivi"
#define CANCEL "Cancella"
#define SAVE "Salva"
#define DISCARD "Abbandona"
#define YES "Si"
#define NO "No"
#define TEXT_FONT "Font"
#define TEXT_NONE "Nessuno"
#define TEXT_SIZE "Dimensione:"
#define TOTAL "Totale:"
#define OPEN "Apri"
#define TEXT_FIND "Trova"
#define TEXT_FIND_COLON "Trova:"
#define TEXT_REPLACE "Sostituisci"
#define DELETE "Cancella"
#define TEXT_DATE "Data:"
#define TEXT_COPY_FULL "Copia"
#define RENAME "Rinomina"
#define TEXT_EXIT "Esci"
#define TEXT_FILE "File"
#define TEXT_NEW "Nuovo"
#define PREFERENCES_ABBR "Prefs" //abbreviation for preferences
#define TEXT_ABOUT "Informazioni"
#define TEXT_COPY "Copia"
#define TEXT_PASTE "Incolla"
#define TEXT_CUT "Taglia"
#define TEXT_UNDO "Undo"
#define TEXT_REDO "Redo"
#define TEXT_CURSOR "Cursore"
#define TEXT_END "Fine"
#define TEXT_HOME "Inizio" //as in beginning of line key
#define TEXT_EDIT "Edita" //as in the menu title
#define TEXT_CALCULATE "Conta" //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "Statistiche Documento "
#define TEXT_DOCUMENT_CHARS "Caratteri:"
#define TEXT_DOCUMENT_WORDS "Parole:"
#define MENU_TEXT_STATS "Statistiche"
#define MANAGE_FILES "Files"
//other text
#define NEW_FILENAME "Nuovo Nome"
#define OLD_FILENAME "Nome Corrente"
#define RENAME_FILE "Rinomina File"
#define FIND_AGAIN "Trova ancora"
#define SAVE_AS "Salva come"
#define SELECT_FILE "Seleziona File"
#define TERM_NOT_FOUND "Termine Non Trovato"
#define END_OF_DOCUMENT_REACHED "Raggiunta Fine del documento"
#define CONFIRM_FILE_DELETE "Conferma Eliminazione File"
#define MESSAGE_CONFIRM_FILE_DELETE "Cancello il file ^1?"

#define CONFIRM_OVERWRITE "Confermi Sovrascrittura"
#define MESSAGE_CONFIRM_OVERWRITE "L'apertura di un nuovo file annuller� le ultime modifiche. Salvo prima il file?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\SiEd-Dana is based on the original SiEd text editor, \251 2003-2005\nBenjamin Roe.\nArtwork is \251 Stefan Smith & Tankut Eric.\nThis application is distributed under the terms of the GPLv2."

#define NEW_FILE "Nuovo File"
#define MESSAGE_NEW_FILE "Apro un nuovo file?"
#define EDITOR_PREFERENCES "Impostazioni Editor"

#define SAVE_FILE_AS "Salva File Come"
#define FILENAME "Nomefile"

#define SEARCH_TERM "Termine ricercato"
#define MATCH_CASE "Maiuscole"
#define MATCH_WHOLE_WORD "Parola intera"

#define REPLACE_ABBR "Sost:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Sost" //abbreviation for replace
#define TEXT_WITH "Con:"
#define REPLACE_ALL_ABBR "Sost t." //abbreviation for replace all
#define END_OF_DOCUMENT "Fine del Doc"
#define START_OF_DOCUMENT "Inizio del Doc"
#define DELETE_LINE "Cancella Linea"
#define SPLIT_VIEW "Dividi Vista"
#define UNSPLIT_VIEW "Riunisci Vista"
#define TEXT_VIEW "Vista"
#define NEW_DIRECTORY "Nuova Dir"

//error messages - less important to translate
#define UNABLE_TO_UNDO "Impossibile Annullare"
#define OVERWRITE_FILE "Sovrascrivo il File?"
#define OVERWRITE_FILE_TEXT "Un file con questo nome esiste gi�. Sovrascrivo?"
#define UNABLE_TO_UNDO_TEXT "Questa modifica non potr� essere annullata."
#define TEXT_SELECTION_COPY_TRUNCATED "Selezione Troncata"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Spazio Insufficiente in memoria per l'intera selezione"

#define MESSAGE_NOT_SUPPORTED "^1 Non Supportato."
#define TEXT_FILE_NOT_FOUND "File Non trovato"
#define MESSAGE_FILE_NOT_FOUND "File ^1 non trovato."
#define TEXT_DATABASE_ACCESS_ERROR "Errore di accesso al Database"
#define MESSAGE_DATABASE_ACCESS_ERROR "Errore Database �con ^1."
#define TEXT_FILE_ACCESS_ERROR "Errore di Accesso al File"
#define MESSAGE_FILE_ACCESS_ERROR "Errore di �accesso al file ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Errore di Accesso allo schermo"
#define MESSAGE_SCREEN_ACCESS_ERROR "Errore nel creare la finestra fuori schermo."
#define TEXT_UNABLE_TO_SAVE "Impossibile Salvare"
#define MESSAGE_UNABLE_TO_SAVE "Impossibile Salvare il file ^1."
#define TEXT_DEBUG_MESSAGE "Messaggio di Debug"
#define TEXT_OUT_OF_MEMORY "Memoria Piena"
#define MESSAGE_OUT_OF_MEMORY "Errore di Allocazione Memoria in ^1"
#define FEATURE_NOT_IMPLEMENTED "Caratteristica Non Implementata"
#endif

#ifdef LANGUAGE_DUTCH
#define REVERT_FILE "Reload File?"
#define REVERT "Reload"
#define MESSAGE_REVERT_FILE "Reload current file? All changes will be lost."
#define NONE_TEXT "None"
#define EOL_TEXT "Line Feeds"
#define SHOW_CODES_TEXT "Show Codes"
#define SHOW_MODE "Mode"
#define MACRO_POPUP_TEXT_1 "If you record a"
#define MACRO_POPUP_TEXT_2 "macro you can"
#define MACRO_POPUP_TEXT_3 "play it from here"
#define GET_PASSWORD "Enter Password"
#define PASSWORD_TEXT "Password:"
#define TEXT_ENCRYPTED "Encrypt"
#define FILE_NOT_ENCRYPTED_TITLE "File Not Encrypt"
#define FILE_NOT_ENCRYPTED_TEXT "File ^1 is not encrypted"
#define DECRYPT "Decrypt"
#define QUICK_MACRO "Quick Mac."
#define FILE_LOCATION "Enter password for file "
#define UNABLE_TO_CREATE_DIR_TEXT "Unable to create directory ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Error"
#define NO_COMPRESSED_DOC_TITLE "Not Supported"
#define NO_COMPRESSED_DOC_TEXT "File ^1 is compressed. No support for compressed DOCs yet."
#define MUST_ENTER_NAME_TITLE "No Name"
#define MUST_ENTER_NAME_TEXT "Must enter a name for the macro"
#define CONFIRM_MACRO_DELETE "Confirm"
#define MESSAGE_CONFIRM_MACRO_DELETE "Delete Macro ^1?"
#define PLAY_MACRO "Play Macro"
#define START_RECORD "Record Macro"
#define RECORD "Record"
#define PLAY "Play"
#define INVALID_FILE_NAME_TITLE "Ongeldige bestandsnaam"
#define INVALID_FILE_NAME_TEXT "^1 is geen geldige bestandsnaam."
#define SELECTION_MODE "Selection Mode"
#define TEXT_BEAM "Zend met IR"
#define BEAM_FILE "Geselecteerd bestand"
#define BEAM_APP  "SiEd-Dana App."
#define PALM_STYLE_TEXT "Palm Style"
#define STANDARD_STYLE_TEXT "Standaard"
#define SELECT_ALL "Selecteer Alles"

#define WAITING_TEXT "Moment a.u.b." //Text displayed while leaving SiEd-Dana

//Resource text
#define TEXT_NEW_DIRECTORY "Naam nieuwe map"

//simple ones
#define OK "OK"
#define CLOSE "Sluit"
#define OVERWRITE "Overschrijven"
#define CANCEL "Annuleer"
#define SAVE "Opslaan"
#define DISCARD "Negeer"
#define YES "Ja"
#define NO "Nee"
#define TEXT_FONT "Lettertype"
#define TEXT_NONE "Geen"
#define TEXT_SIZE "Grootte:"
#define TOTAL "Totaal:"
#define OPEN "Open"
#define TEXT_FIND "Zoek"
#define TEXT_FIND_COLON "Zoek:"
#define TEXT_REPLACE "Vervangen"
#define DELETE "Wissen"
#define TEXT_DATE "Datum:"
#define TEXT_COPY_FULL "Kopieer"
#define RENAME "Hernoem"
#define TEXT_EXIT "Exit"
#define TEXT_FILE "Bestand"
#define TEXT_NEW "Nieuw"
#define PREFERENCES_ABBR "Voork." //abbreviation for preferences
#define TEXT_ABOUT "Over"
#define TEXT_COPY "Kopieer"
#define TEXT_PASTE "Plak"
#define TEXT_CUT "Knip"
#define TEXT_UNDO "Ongedaan maken"
#define TEXT_REDO "Opnieuw"
#define TEXT_CURSOR "Cursor"
#define TEXT_END "Eind"
#define TEXT_HOME "Home" //as in beginning of line key
#define TEXT_EDIT "Bewerk" //as in the menu title
#define TEXT_CALCULATE "Calc." //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "Document Statistieken"
#define TEXT_DOCUMENT_CHARS "Letters:"
#define TEXT_DOCUMENT_WORDS "Woorden:"
#define MENU_TEXT_STATS "Statistieken"
#define MANAGE_FILES "Bestanden"
//other text
#define NEW_FILENAME "Nieuwe Bestandsnaam"
#define OLD_FILENAME "Huidige Bestandsnaam"
#define RENAME_FILE "Bestand hernoemen"
#define FIND_AGAIN "Opnieuw zoeken"
#define SAVE_AS "Opslaan als"
#define SELECT_FILE "Selecteer Bestand"
#define TERM_NOT_FOUND "Gezochte woord niet gevonden"
#define END_OF_DOCUMENT_REACHED "Eind van document"
#define CONFIRM_FILE_DELETE "Bevestig bestandsverwijdering"
#define MESSAGE_CONFIRM_FILE_DELETE "Verwijder bestand ^1?"

#define CONFIRM_OVERWRITE "Bevestig overschrijven"
#define MESSAGE_CONFIRM_OVERWRITE "Openen van een nieuw bestand wist de aangebrachte veranderingen. Bestand eerst opslaan?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\251 Gebaseerd op SiEd, \251 2003-2005 Benjamin Roe.\nArtwork \251 Stefan Smith & Tankut Eric.\nDit programma wordt verspreid volgens de bepalingen van de GPL."

#define NEW_FILE "Nieuw Bestand"
#define MESSAGE_NEW_FILE "Open een nieuw bestand?"
#define EDITOR_PREFERENCES "Editor voorkeuren"

#define SAVE_FILE_AS "Sla bestand op als"
#define FILENAME "Bestandsnaam"

#define SEARCH_TERM "Zoekterm"
#define MATCH_CASE "Identieke hoofdletters/kleine letters"
#define MATCH_WHOLE_WORD "Hele woord"

#define REPLACE_ABBR "Verv:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Verv" //abbreviation for replace
#define TEXT_WITH "Door:"
#define REPLACE_ALL_ABBR "All. verv." //abbreviation for replace all
#define END_OF_DOCUMENT "Eind van Document"
#define START_OF_DOCUMENT "Begin van Document"
#define DELETE_LINE "Verwijder regel"
#define SPLIT_VIEW "Splits Beeld"
#define UNSPLIT_VIEW "Voeg Beeld samen"
#define TEXT_VIEW "Bekijk"
#define NEW_DIRECTORY "Nieuwe map"

//error messages - less important to translate
#define UNABLE_TO_UNDO "Geen undo mogelijk"
#define OVERWRITE_FILE "Bestand overschrijven?"
#define OVERWRITE_FILE_TEXT "Een bestand met die naam bestaat reeds. Overschrijven?"
#define UNABLE_TO_UNDO_TEXT "Deze verandering kan niet ongedaan gemaakt worden."
#define TEXT_SELECTION_COPY_TRUNCATED "Selectie ingekort"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Klembord is niet groot genoeg voor gehele selectie"

#define MESSAGE_NOT_SUPPORTED "^1 niet ondersteund."
#define TEXT_FILE_NOT_FOUND "bestand niet gevonden"
#define MESSAGE_FILE_NOT_FOUND "Bestand ^1 niet gevonden."
#define TEXT_DATABASE_ACCESS_ERROR "Fout bij openen database"
#define MESSAGE_DATABASE_ACCESS_ERROR "Fout in database tijdens ^1."
#define TEXT_FILE_ACCESS_ERROR "Fout bij openen bestand"
#define MESSAGE_FILE_ACCESS_ERROR "Fout bij openen bestand ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Scherm niet toegankelijk"
#define MESSAGE_SCREEN_ACCESS_ERROR "Fout bij maken van offscreen window."
#define TEXT_UNABLE_TO_SAVE "Fout bij opslaan"
#define MESSAGE_UNABLE_TO_SAVE "Bestand ^1 kon niet opgeslagen worden."
#define TEXT_DEBUG_MESSAGE "Debug Message"
#define TEXT_OUT_OF_MEMORY "Geen geheugen"
#define MESSAGE_OUT_OF_MEMORY "Memory Allocation Error in ^1"
#define FEATURE_NOT_IMPLEMENTED "Feature Not Implemented"

#endif
//Untranslated strings
#ifdef LANGUAGE_TURKISH
#define REVERT_FILE "Reload File?"
#define REVERT "Reload"
#define MESSAGE_REVERT_FILE "Reload current file? All changes will be lost."
#define NONE_TEXT "None"
#define EOL_TEXT "Line Feeds"
#define SHOW_CODES_TEXT "Show Codes"
#define SHOW_MODE "Mode"
#define MACRO_POPUP_TEXT_1 "If you record a"
#define MACRO_POPUP_TEXT_2 "macro you can"
#define MACRO_POPUP_TEXT_3 "play it from here"
#define GET_PASSWORD "Sifre giriniz"
#define PASSWORD_TEXT "Sifre:"
#define TEXT_ENCRYPTED "Sifrele"
#define FILE_NOT_ENCRYPTED_TITLE "Dosya sifreli degil"
#define FILE_NOT_ENCRYPTED_TEXT "^1 dosyasi sifreli degil"
#define DECRYPT "Desifre"
#define QUICK_MACRO "Hizli makro"
#define FILE_LOCATION "Dosya icin sifre giriniz "
#define UNABLE_TO_CREATE_DIR_TEXT "^1 klasoru yaratilamadi"
#define UNABLE_TO_CREATE_DIR_TITLE "Hata"
#define NO_COMPRESSED_DOC_TITLE "Desteklenmiyor"
#define NO_COMPRESSED_DOC_TEXT "^1 dosyasi sikistirilmis. Henuz bu tur DOC dosyalari acilamiyor."
#define MUST_ENTER_NAME_TITLE "Isim yok"
#define MUST_ENTER_NAME_TEXT "Makro icin isim girmelisiniz"
#define CONFIRM_MACRO_DELETE "Onaylayiniz"
#define MESSAGE_CONFIRM_MACRO_DELETE "Makro silinsin mi ^1?"
#define PLAY_MACRO "Makro calistir"
#define START_RECORD "Makro kaydet"
#define RECORD "Kaydet"
#define PLAY "Calistir"

//C++ file text
#define INVALID_FILE_NAME_TITLE "Gecersiz dosya adi"
#define INVALID_FILE_NAME_TEXT "^1 gecerli bir dosya degil."
#define SELECTION_MODE "Secme kipi"
#define TEXT_BEAM "Kizilotesi"
#define BEAM_FILE "Secili dosya"
#define BEAM_APP "SiEd-Dana Prog."
#define PALM_STYLE_TEXT "Palm Tarzi"
#define STANDARD_STYLE_TEXT "Standart"
#define SELECT_ALL "Tumunu Sec"
#define WAITING_TEXT "Bekleyiniz..." //Text displayed while leaving SiEd-Dana

//Resource text
#define TEXT_NEW_DIRECTORY "Yeni klasor adi"

//simple ones
#define OK "Tamam"
#define CLOSE "Kapat"
#define OVERWRITE "Ustune Yaz"
#define CANCEL "Iptal"
#define SAVE "Kaydet"
#define DISCARD "Kaybet"
#define YES "Evet"
#define NO "Hayir"
#define TEXT_FONT "Font:"
#define TEXT_NONE "Hicbiri"
#define TEXT_SIZE "Boy:"
#define TOTAL "Toplam:"
#define OPEN "Ac"
#define TEXT_FIND "Bul"
#define TEXT_FIND_COLON "Bul:"
#define TEXT_REPLACE "Degistir"
#define DELETE "Sil"
#define TEXT_DATE "Tarih:"
#define TEXT_COPY_FULL "Kopyala"
#define RENAME "Isim degistir"
#define TEXT_EXIT "Cikis"
#define TEXT_FILE "Dosya"
#define TEXT_NEW "Yeni"
#define PREFERENCES_ABBR "Secenek" //abbreviation for preferences
#define TEXT_ABOUT "Hakkinda"
#define TEXT_COPY "Kopyala"
#define TEXT_PASTE "Yapistir"
#define TEXT_CUT "Kes"
#define TEXT_UNDO "Geri Al"
#define TEXT_REDO "Tekrarla"
#define TEXT_CURSOR "Imlec"
#define TEXT_END "Son"
#define TEXT_HOME "Basa don" //as in beginning of line key
#define TEXT_EDIT "Duzenle" //as in the menu title
#define TEXT_CALCULATE "Hesapla" //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "Dokuman Istatistikleri:"
#define TEXT_DOCUMENT_CHARS "Karakter:"
#define TEXT_DOCUMENT_WORDS "Kelime:"
#define MENU_TEXT_STATS "Istatistik"
#define MANAGE_FILES "Dosyalar"
//other text
#define NEW_FILENAME "Yeni Dosya Adi"
#define OLD_FILENAME "Gecerli Dosya Adi"
#define RENAME_FILE "Isim Degistir"
#define FIND_AGAIN "Tekrar Bul"
#define SAVE_AS "Farkli Kaydet"
#define SELECT_FILE "Dosya Sec"
#define TERM_NOT_FOUND "Bulunamadi"
#define END_OF_DOCUMENT_REACHED "Dokuman sonuna ulasildi"
#define CONFIRM_FILE_DELETE "Dosya silmeyi onaylayiniz."
#define MESSAGE_CONFIRM_FILE_DELETE "^1 silinsin mi?"

#define CONFIRM_OVERWRITE "Uzerine yazmayi onaylayiniz"
#define MESSAGE_CONFIRM_OVERWRITE "Yeni dosya acarsaniz degisiklikleri kaybedersiniz.  Once kaydedelim mi?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\251 Dayali SiEd, \251 2003-2005 Benjamin Roe.\nSanat eseri \251 Stefan Smith & Tankut Eric.\nBu yazilim GPL anlasmasi kurallari altinda dagitilmaktadir."

#define NEW_FILE "Yeni Dosya"
#define MESSAGE_NEW_FILE "Yeni dosya acilsin mi?"
#define EDITOR_PREFERENCES "Editor Secenekleri"

#define SAVE_FILE_AS "Farkli Kaydet"
#define FILENAME "Dosya Adi"

#define SEARCH_TERM "Aranacak terim"
#define MATCH_CASE "Kucuk/Buyuk eslestir"
#define MATCH_WHOLE_WORD "Tam kelime"

#define REPLACE_ABBR "Bunu:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Bunu" //abbreviation for replace
#define TEXT_WITH "Bununla:"
#define REPLACE_ALL_ABBR "Tum D" //abbreviation for replace all
#define END_OF_DOCUMENT "Son"
#define START_OF_DOCUMENT "Baslangic"
#define DELETE_LINE "Satir Sil"
#define SPLIT_VIEW "Ekrani Bol"
#define UNSPLIT_VIEW "Ekrani Birlestir"
#define TEXT_VIEW "Gorunum"
#define NEW_DIRECTORY "Yeni Klasor"

//error messages - less important to translate
#define UNABLE_TO_UNDO "Geri Alinamaz"
#define OVERWRITE_FILE "Uzerine yazilsin mi?"
#define OVERWRITE_FILE_TEXT "Ayni isimle dosya var. Degistir?"
#define UNABLE_TO_UNDO_TEXT ".Bu degisiklik geri alinamaz."
#define TEXT_SELECTION_COPY_TRUNCATED "Secim kirpildi"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Tum secim icin yeterli alan yok"

#define MESSAGE_NOT_SUPPORTED "^1 Desteklenmiyor."
#define TEXT_FILE_NOT_FOUND "Dosya Bulunamadi"
#define MESSAGE_FILE_NOT_FOUND "^1 bulunamadi."
#define TEXT_DATABASE_ACCESS_ERROR "Veritabani erisim hatasi"
#define MESSAGE_DATABASE_ACCESS_ERROR "^1 yapilirken erisim hatasi."
#define TEXT_FILE_ACCESS_ERROR "Dosya Erisim Hatasi"
#define MESSAGE_FILE_ACCESS_ERROR "^1 dosyasina erisirken hata."
#define TEXT_SCREEN_ACCESS_ERROR "Ekran Erisim Hatasi"
#define MESSAGE_SCREEN_ACCESS_ERROR "Ekran disi pencere yaratilamadi."
#define TEXT_UNABLE_TO_SAVE "Kaydedilemiyor"
#define MESSAGE_UNABLE_TO_SAVE "^1 dosyasi kaydedilemedi."
#define TEXT_DEBUG_MESSAGE "Debug Mesaji"
#define TEXT_OUT_OF_MEMORY "Hafiza Kalmadi"
#define MESSAGE_OUT_OF_MEMORY "^1da hafiza alinamadi"
#define FEATURE_NOT_IMPLEMENTED "Ozellik henuz uygulanmadi"

#endif

#ifdef LANGUAGE_RUSSIAN
#define REVERT_FILE "Reload File?"
#define REVERT "Reload"
#define MESSAGE_REVERT_FILE "������������� ����? ��� �������� ����� ��������."
#define GET_PASSWORD "������� ������"
#define PASSWORD_TEXT "������:"
#define TEXT_ENCRYPTED "�����."
#define FILE_NOT_ENCRYPTED_TITLE "���� �� �����������"
#define FILE_NOT_ENCRYPTED_TEXT "���� ^1 �� �����������"
#define DECRYPT "������."
#define QUICK_MACRO "������"
#define FILE_LOCATION "������� ������ ��� �����"
#define UNABLE_TO_CREATE_DIR_TEXT "���������� ������� ���������� ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "������"
#define NO_COMPRESSED_DOC_TITLE "�� ��������������"
#define NO_COMPRESSED_DOC_TEXT "���� ^1 ����. ������ DOC ����� �� ��������������."
#define MUST_ENTER_NAME_TITLE "��� �����"
#define MUST_ENTER_NAME_TEXT "������� ��� �������"
#define CONFIRM_MACRO_DELETE "�����������"
#define MESSAGE_CONFIRM_MACRO_DELETE "������� ������ ^1?"
#define PLAY_MACRO "������ ��������"
#define START_RECORD "�������� ������"
#define RECORD "������"
#define PLAY "������"

//C++ file text
#define INVALID_FILE_NAME_TITLE "������������ ��� �����"
#define INVALID_FILE_NAME_TEXT "^1 ������������ ��� �����."
#define SELECTION_MODE "����� ������"
#define TEXT_BEAM "�������� �� ��"
#define BEAM_FILE "��������� ����"
#define BEAM_APP "SiEd-Dana"
#define PALM_STYLE_TEXT "����� Palm"
#define STANDARD_STYLE_TEXT "�����������"
#define SELECT_ALL "������� ���"
#define WAITING_TEXT "�����..." //Text displayed while leaving SiEd-Dana

//Resource text
#define TEXT_NEW_DIRECTORY "��� ����� ����������"

//simple ones
#define OK "��"
#define CLOSE "�������"
#define OVERWRITE "��"
#define CANCEL "������"
#define SAVE "���������"
#define DISCARD "���"
#define YES "��"
#define NO "���"
#define TEXT_FONT "�����:"
#define TEXT_NONE "���"
#define TEXT_SIZE "������:"
#define TOTAL "�����:"
#define OPEN "�������"
#define TEXT_FIND "�����"
#define TEXT_FIND_COLON "�����:"
#define TEXT_REPLACE "��������"
#define DELETE "�������"
#define TEXT_DATE "����:"
#define TEXT_COPY_FULL "����������"
#define RENAME "�������������"
#define TEXT_EXIT "�����"
#define TEXT_FILE "����"
#define TEXT_NEW "�����"
#define PREFERENCES_ABBR "��������" //abbreviation for preferences
#define TEXT_ABOUT "� ���������"
#define TEXT_COPY "����������"
#define TEXT_PASTE "��������"
#define TEXT_CUT "��������"
#define TEXT_UNDO "������"
#define TEXT_REDO "������������"
#define TEXT_CURSOR "������"
#define TEXT_END "� �����"
#define TEXT_HOME "� ������" //as in beginning of line key
#define TEXT_EDIT "���" //as in the menu title
#define TEXT_CALCULATE "����." //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "����������"
#define TEXT_DOCUMENT_CHARS "��������:"
#define TEXT_DOCUMENT_WORDS "����:"
#define MENU_TEXT_STATS "����"
#define MANAGE_FILES "�����"
//other text
#define NEW_FILENAME "����� ���"
#define OLD_FILENAME "������������ ���"
#define RENAME_FILE "������������� ����"
#define FIND_AGAIN "����� ���"
#define SAVE_AS "��������� ���"
#define SELECT_FILE "������� ����"
#define TERM_NOT_FOUND "�� �������"
#define END_OF_DOCUMENT_REACHED "����� ���������"
#define CONFIRM_FILE_DELETE "�����������!"
#define MESSAGE_CONFIRM_FILE_DELETE "������� ���� ^1?"
#define MACRO_POPUP_TEXT_1 "�������� ������"
#define MACRO_POPUP_TEXT_2 "� ���������� ���"
#define MACRO_POPUP_TEXT_3 "� ���� ����."

#define CONFIRM_OVERWRITE "�����������!"
#define MESSAGE_CONFIRM_OVERWRITE "�������� ������ ����� ��������� ��������� � ������. ��������� ����?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\SiEd-Dana is based on the original SiEd text editor, \251 2003-2005\nBenjamin Roe.\nArtwork is \251 Stefan Smith & Tankut Eric.\nThis application is distributed under the terms of the GPLv2."

#define NEW_FILE "����� ����!"
#define MESSAGE_NEW_FILE "������� ����� ����?"
#define EDITOR_PREFERENCES "���������"

#define SAVE_FILE_AS "��������� ���..."
#define FILENAME "��� �����"

#define SEARCH_TERM "������"
#define MATCH_CASE "���������"
#define MATCH_WHOLE_WORD "����� �������"

#define REPLACE_ABBR "������:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "������" //abbreviation for replace
#define TEXT_WITH "�:"
#define REPLACE_ALL_ABBR "���" //abbreviation for replace all
#define END_OF_DOCUMENT "�����"
#define START_OF_DOCUMENT "������"
#define DELETE_LINE "������� ������"
#define SPLIT_VIEW "��� �������"
#define UNSPLIT_VIEW "���� �������"
#define TEXT_VIEW "��������"
#define NEW_DIRECTORY "����� ����������"

//error messages - less important to translate
#define UNABLE_TO_UNDO "��� ������"
#define OVERWRITE_FILE "����������?"
#define OVERWRITE_FILE_TEXT "���� ����������. ����������?"
#define UNABLE_TO_UNDO_TEXT "��������� �� ����� ���� ��������."
#define TEXT_SELECTION_COPY_TRUNCATED "�� �������"
#define MESSAGE_SELECTION_COPY_TRUNCATED "���� ����� � ������ ������"

#define MESSAGE_NOT_SUPPORTED "^1 �� ��������������."
#define TEXT_FILE_NOT_FOUND "���� �� ������"
#define MESSAGE_FILE_NOT_FOUND "���� ^1 �� ������."
#define TEXT_DATABASE_ACCESS_ERROR "������ �������"
#define MESSAGE_DATABASE_ACCESS_ERROR "������ � ���� ^1."
#define TEXT_FILE_ACCESS_ERROR "��� ������� � �����"
#define MESSAGE_FILE_ACCESS_ERROR "��� ������� � ����� ^1."
#define TEXT_SCREEN_ACCESS_ERROR "������ �������"
#define MESSAGE_SCREEN_ACCESS_ERROR "�� ���� ������� ����"
#define TEXT_UNABLE_TO_SAVE "�� ���� ���������"
#define MESSAGE_UNABLE_TO_SAVE "�� ���� ��������� ���� ^1."
#define TEXT_DEBUG_MESSAGE "������ �������"
#define TEXT_OUT_OF_MEMORY "�� ���������� ������"
#define MESSAGE_OUT_OF_MEMORY "������ ������������� ������ ^1"
#define FEATURE_NOT_IMPLEMENTED "�� ���������������"
#define NONE_TEXT "���"
#define EOL_TEXT "����.�����:"
#define SHOW_CODES_TEXT "����������:"
#define SHOW_MODE "�����"

#endif

#ifdef LANGUAGE_POLISH
#define REVERT_FILE "Zaladowac ponownie plik?"
#define MESSAGE_REVERT_FILE "Czy zaladowac ponownie edytowany plik? Wszystkie zmiany zostana stracone!"
#define REVERT "Przeladowa� plik?"
#define NONE_TEXT "Brak"
#define EOL_TEXT "Przejscie do nastepnej lini"
#define SHOW_CODES_TEXT "Pokaz kody"
#define SHOW_MODE "Tryb"
#define MACRO_POPUP_TEXT_1 "Jesli zapiszesz makro, "
#define MACRO_POPUP_TEXT_2 "to pozniej mozesz"
#define MACRO_POPUP_TEXT_3 "Uruchomic je tu"
#define GET_PASSWORD "Wprowadz haslo"
#define PASSWORD_TEXT "Haslo:"
#define TEXT_ENCRYPTED "Zaszyfrowany"
#define FILE_NOT_ENCRYPTED_TITLE "Plik niezaszyfrowany"
#define FILE_NOT_ENCRYPTED_TEXT "Plik ^1 jest niezaszyfrowany"
#define DECRYPT "Odszyfruj"
#define QUICK_MACRO "Szybkie Makro"
#define FILE_LOCATION "Podaj  haslo dla podanego pliku"
#define UNABLE_TO_CREATE_DIR_TEXT "Nie mozna utworzyc podanego katalogu ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Blad tworzenia katalogu"
#define NO_COMPRESSED_DOC_TITLE "Opcja niezaimplementowana"
#define NO_COMPRESSED_DOC_TEXT "Plik ^1 jest skompresowany. Opcja jeszcze niezaimplementowana."
#define MUST_ENTER_NAME_TITLE "Brak nazwy pliku"
#define MUST_ENTER_NAME_TEXT "Musisz podac nazwe makra"
#define CONFIRM_MACRO_DELETE "Zatwierdz"
#define MESSAGE_CONFIRM_MACRO_DELETE "Usunac makro?"
#define PLAY_MACRO "Odtworz makro"
#define START_RECORD "Zapisz makro"
#define RECORD "Zapisz"
#define PLAY "Odtworz"
//C++ file text
#define INVALID_FILE_NAME_TITLE "Bledna nazwa pliku"
#define INVALID_FILE_NAME_TEXT "^1 nie jest poprawna nazwa pliku."
#define SELECTION_MODE "Tryb zaznaczania"
#define TEXT_BEAM "Podczerwien"
#define BEAM_FILE "Wybierz plik"
#define BEAM_APP "SiEd-Dana App."
#define PALM_STYLE_TEXT "Palm Style"
#define STANDARD_STYLE_TEXT "Standard"
#define SELECT_ALL "Zaznacz wszystko"
#define WAITING_TEXT "Poczekaj..." //Text displayed while leaving SiEd-Dana

//Resource text
#define TEXT_NEW_DIRECTORY "Nowa nazwa katalogu"

//simple ones
#define OK "OK"
#define CLOSE "Zamknij"
#define OVERWRITE "Nadpisz"
#define CANCEL "Anuluj"
#define SAVE "Zapisz"
#define DISCARD "Odrzuc"
#define YES "Tak"
#define NO "Nie"
#define TEXT_FONT "Font"
#define TEXT_NONE "Brak"
#define TEXT_SIZE "Wielkosc:"
#define TOTAL "Calkowita:"
#define OPEN "Otworz"
#define TEXT_FIND "Znajdz"
#define TEXT_FIND_COLON "Znajdz:"
#define TEXT_REPLACE "Znajdz i zamien"
#define DELETE "Usun"
#define TEXT_DATE "Data:"
#define TEXT_COPY_FULL "Kopiuj"
#define RENAME "Zmien nazwe"
#define TEXT_EXIT "Wyjdz"
#define TEXT_FILE "Plik"
#define TEXT_NEW "Nowy"
#define PREFERENCES_ABBR "Pref." //abbreviation for preferences
#define TEXT_ABOUT "O programie"
#define TEXT_COPY "Kopiuj"
#define TEXT_PASTE "Wstaw"
#define TEXT_CUT "Wytnij"
#define TEXT_UNDO "Cofnij"
#define TEXT_REDO "Redo"
#define TEXT_CURSOR "Kursor"
#define TEXT_END "Koniec"
#define TEXT_HOME "Na poczatek" //as in beginning of line key
#define TEXT_EDIT "Edytuj" //as in the menu title
#define TEXT_CALCULATE "Przelicz" //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "Statystyka tekstu"
#define TEXT_DOCUMENT_CHARS "Liczba znakow:"
#define TEXT_DOCUMENT_WORDS "Slow:"
#define MENU_TEXT_STATS "Stat"
#define MANAGE_FILES "Pliki"
//other text
#define NEW_FILENAME "Nowa nazwa pliku"
#define OLD_FILENAME "Obecna nazwa pliku"
#define RENAME_FILE "Zmien nazwe pliku"
#define FIND_AGAIN "Znajdz ponownie"
#define SAVE_AS "Zapisz jako"
#define SELECT_FILE "Wybierz plik"
#define TERM_NOT_FOUND "Nieznaleziono tekstu"
#define END_OF_DOCUMENT_REACHED "Osiagnieto koniec pliku"
#define CONFIRM_FILE_DELETE "Zatwierdz  usuniecie pliku"
#define MESSAGE_CONFIRM_FILE_DELETE "Usunac plik ^1?"

#define CONFIRM_OVERWRITE "Zatwierdz nadpisanie"
#define MESSAGE_CONFIRM_OVERWRITE "Otwarcie nowego pliku spowoduje utrate zmian w pliku obecnym.  Zapiac zmiany?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\SiEd-Dana is based on the original SiEd text editor, \251 2003-2005\nBenjamin Roe.\nArtwork is \251 Stefan Smith & Tankut Eric.\nThis application is distributed under the terms of the GPLv2."

#define NEW_FILE "Nowy plik"
#define MESSAGE_NEW_FILE "Otworzyc nowy plik?"
#define EDITOR_PREFERENCES "Ustawienia edytora"

#define SAVE_FILE_AS "Zapisz plik jako.."
#define FILENAME "Nazwa pliku"

#define SEARCH_TERM "Szukaj tekstu"
#define MATCH_CASE "Wielkosc liter"
#define MATCH_WHOLE_WORD "Cale slowa"

#define REPLACE_ABBR "Zast:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Zast" //abbreviation for replace
#define TEXT_WITH "przez:"
#define REPLACE_ALL_ABBR "Z wszyst." //abbreviation for replace all
#define END_OF_DOCUMENT "Koniec pliku"
#define START_OF_DOCUMENT "Poczatek pliku"
#define DELETE_LINE "Usun linie"
#define SPLIT_VIEW "Podziel widok"
#define UNSPLIT_VIEW "Polacz widok"
#define TEXT_VIEW "Widok"
#define NEW_DIRECTORY "Nowy katalog"

//error messages - less important to translate
#define UNABLE_TO_UNDO "Nie mozna cofnac"
#define OVERWRITE_FILE "Nadpisac plik?"
#define OVERWRITE_FILE_TEXT "Plik juz istnieje. Nadpisac?"
#define UNABLE_TO_UNDO_TEXT "Nie mozna cofnac tej zmiany."
#define TEXT_SELECTION_COPY_TRUNCATED "Zaznaczenie uciete"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Brak miejsca w schowku by zaznaczyc wszystko"

#define MESSAGE_NOT_SUPPORTED "^1 Nie wspierane."
#define TEXT_FILE_NOT_FOUND "Nieznaleziono pliku"
#define MESSAGE_FILE_NOT_FOUND "Plik ^1 nie zostal znaleziony."
#define TEXT_DATABASE_ACCESS_ERROR "Blad dostepu do bazy danych"
#define MESSAGE_DATABASE_ACCESS_ERROR "Blad bazy danych podczas ^1."
#define TEXT_FILE_ACCESS_ERROR "Blad dostepu do pliku"
#define MESSAGE_FILE_ACCESS_ERROR "Blad podczas dostepu do pliku ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Blad dostepu do ekranu"
#define MESSAGE_SCREEN_ACCESS_ERROR "Blad tworzenia niewidocznej czesci ekranu."
#define TEXT_UNABLE_TO_SAVE "Nie mozna zapisac"
#define MESSAGE_UNABLE_TO_SAVE "Nie mozna zapisac pliku ^1."
#define TEXT_DEBUG_MESSAGE "Debug Message"
#define TEXT_OUT_OF_MEMORY "Zabraklo pamieci"
#define MESSAGE_OUT_OF_MEMORY "Blad alokacji pamieci podczas ^1"
#define FEATURE_NOT_IMPLEMENTED "Funkcja nie zostala jeszcze zaimplementowana"
#endif
#ifdef LANGUAGE_SWEDISH
#define REVERT_FILE "Ladda om filen?"
#define MESSAGE_REVERT_FILE "Ladda om aktuell fil? Alla �ndringar f�rloras."
#define REVERT "�terg�"
#define NONE_TEXT "Ingen"
#define EOL_TEXT "Radbrytningar"
#define SHOW_CODES_TEXT "Visa kod"
#define SHOW_MODE "L�ge"
#define MACRO_POPUP_TEXT_1 "Om du spelar in ett"
#define MACRO_POPUP_TEXT_2 "makro kan du"
#define MACRO_POPUP_TEXT_3 "spela upp det h�rifr�n"
#define GET_PASSWORD "Ange L�senord"
#define PASSWORD_TEXT "L�senord:"
#define TEXT_ENCRYPTED "Kryptera"
#define FILE_NOT_ENCRYPTED_TITLE "Filen ej krypterad"
#define FILE_NOT_ENCRYPTED_TEXT "Fil ^1 �r ej krypterad"
#define DECRYPT "Dekryptera"
#define QUICK_MACRO "Quick Mac." // ???
#define FILE_LOCATION "Ange l�senord f�r filen "
#define UNABLE_TO_CREATE_DIR_TEXT "Kunde inte skapa katalog ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Fel"
#define NO_COMPRESSED_DOC_TITLE "St�d saknas"
#define NO_COMPRESSED_DOC_TEXT "Filen ^1 �r komprimerad. St�d f�r komprimerade DOC-filer saknas."
#define MUST_ENTER_NAME_TITLE "Inget Namn"
#define MUST_ENTER_NAME_TEXT "Ett namn kr�vs f�r makrot"
#define CONFIRM_MACRO_DELETE "Bekr�fta"
#define MESSAGE_CONFIRM_MACRO_DELETE "Radera makro?"
#define PLAY_MACRO "Spela makro"
#define START_RECORD "Spela in makro"
#define RECORD "Spela in"
#define PLAY "Spela upp"
//C++ file text
#define INVALID_FILE_NAME_TITLE "Ogiltigt filnamn"
#define INVALID_FILE_NAME_TEXT "^1 �r inte ett giltigt filnamn."
#define SELECTION_MODE "Markerings l�ge"
#define TEXT_BEAM "Beama"
#define BEAM_FILE "Aktuell fil"
#define BEAM_APP "Programmet SiEd-Dana"
#define PALM_STYLE_TEXT "Palm"
#define STANDARD_STYLE_TEXT "Standard"
#define SELECT_ALL "Markera allt"
#define WAITING_TEXT "V�nligen v�nta..." //Text displayed while leaving SiEd-Dana

//Resource text
#define TEXT_NEW_DIRECTORY "Ny katalog"

//simple ones
#define OK "OK"
#define CLOSE "St�ng"
#define OVERWRITE "Skriv �ver"
#define CANCEL "Avbryt"
#define SAVE "Spara"
#define DISCARD "�verge"
#define YES "Ja"
#define NO "Nej"
#define TEXT_FONT "Font"
#define TEXT_NONE "None"
#define TEXT_SIZE "Size:"
#define TOTAL "Total:"
#define OPEN "�ppna"
#define TEXT_FIND "S�k"
#define TEXT_FIND_COLON "S�k:"
#define TEXT_REPLACE "S�k och ers�tt"
#define DELETE "Radera"
#define TEXT_DATE "Daum:"
#define TEXT_COPY_FULL "Kopiera"
#define RENAME "D�p om"
#define TEXT_EXIT "Avsluta"
#define TEXT_FILE "Arkiv"// As in file menu? Otherwise File = Fil
#define TEXT_NEW "Ny"
#define PREFERENCES_ABBR "Inst�llningar" // The shorter "Alternativ" would work too.
#define TEXT_ABOUT "Om"
#define TEXT_COPY "Kopiera"
#define TEXT_PASTE "Klistra in"
#define TEXT_CUT "Klipp ut"
#define TEXT_UNDO "�ngra"
#define TEXT_REDO "G�r om"
#define TEXT_CURSOR "Mark�r"
#define TEXT_END "Till slutet"
#define TEXT_HOME "Till b�rjan" // Literally "Too start". "Hem" ("Home") would work too.
#define TEXT_EDIT "Redigera"
#define TEXT_CALCULATE "R�kna"
#define TEXT_DOCUMENT_STATISTICS "Dokumentstatistik"
#define TEXT_DOCUMENT_CHARS "Tecken:"
#define TEXT_DOCUMENT_WORDS "Ord:"
#define MENU_TEXT_STATS "Stats"// Unless "Statistik" will fit.
#define MANAGE_FILES "Filer"
//other text
#define NEW_FILENAME "Nytt filnamn"
#define OLD_FILENAME "Nuvarande filnamn"
#define RENAME_FILE "D�m om fil"
#define FIND_AGAIN "S�k n�sta"
#define SAVE_AS "Spara som"
#define SELECT_FILE "V�lj fil"
#define TERM_NOT_FOUND "Ord hittades ej"
#define END_OF_DOCUMENT_REACHED "Slut p� dokumentet"
#define CONFIRM_FILE_DELETE "Bekr�fta radera fil"
#define MESSAGE_CONFIRM_FILE_DELETE "Radera fil ^1?"

#define CONFIRM_OVERWRITE "Bekr�fta �verskrivning"
#define MESSAGE_CONFIRM_OVERWRITE "�ppna ny fil raderar gjorda �ndringar.Spara filen f�rst?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\251 Baserat pa SiEd, \251 2003-2005 Benjamin Roe.\nKonstverk \251 Stefan Smith & Tankut Eric.\netta program distribueras enligt villkoren i GPL. "

#define NEW_FILE "Ny Fil"
#define MESSAGE_NEW_FILE "�ppna en ny fil?"
#define EDITOR_PREFERENCES "Inst�llningar"

#define SAVE_FILE_AS "Spara fil som"
#define FILENAME "Filnamn"

#define SEARCH_TERM "S�kord"
#define MATCH_CASE "Sm�/stora bokst�ver"
#define MATCH_WHOLE_WORD "Hela ordet"

#define REPLACE_ABBR "Ers�tt:"
#define REPLACE_ABBR_BUTTON "Ers." // If necessary. Will obviously work above as well.
#define TEXT_WITH "Med:"
#define REPLACE_ALL_ABBR "E alla" //abbreviation for replace all
#define END_OF_DOCUMENT "Slutet av dokumentet" // dok. would work
#define START_OF_DOCUMENT "B�rjan av dokumentet" // here too
#define DELETE_LINE "Radera rad"
#define SPLIT_VIEW "Dela f�nster"
#define UNSPLIT_VIEW "Ett f�nster" // Literally "One window". Couldn't think of a better translation . . .
#define TEXT_VIEW "F�nster" // "View" would work too. Shorter.
#define NEW_DIRECTORY "Ny katalog"

//error messages - less important to translate
#define UNABLE_TO_UNDO "Kan ej �ngra"
#define OVERWRITE_FILE "Skriva �ver fil?"
#define OVERWRITE_FILE_TEXT "En fil med det namnet finns. Skriva �ver?"
#define UNABLE_TO_UNDO_TEXT "Denna f�r�ndring kan inte �ngras."
#define TEXT_SELECTION_COPY_TRUNCATED "Markering trunkerad"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Hela markeringen f�r inte plats i urklipp."

#define MESSAGE_NOT_SUPPORTED "^1 st�ds ej."
#define TEXT_FILE_NOT_FOUND "Hittar ej filen"
#define MESSAGE_FILE_NOT_FOUND "File ^1 hittas ej."
#define TEXT_DATABASE_ACCESS_ERROR "Databasfel"
#define MESSAGE_DATABASE_ACCESS_ERROR "Databasfel vid ^1."
#define TEXT_FILE_ACCESS_ERROR "Fil�tkomstfel"
#define MESSAGE_FILE_ACCESS_ERROR "Fel vid �tkomst av fil ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Sk�rmfel"
#define MESSAGE_SCREEN_ACCESS_ERROR "Error in creating offscreen window."  // Not sure what this is
#define TEXT_UNABLE_TO_SAVE "Kunde inte spara"
#define MESSAGE_UNABLE_TO_SAVE "Kunde inte spara filen ^1."
#define TEXT_DEBUG_MESSAGE "Debug-meddelande"
#define TEXT_OUT_OF_MEMORY "Slut p� minne"
#define MESSAGE_OUT_OF_MEMORY "Minnesallokeringsfel i ^1"
#define FEATURE_NOT_IMPLEMENTED "Funktionen inte Implementerad"
#endif
#ifdef LANGUAGE_CZECH
#define REVERT_FILE "Obnovit Soubor?"
#define MESSAGE_REVERT_FILE "Obnovit tento soubor? Vechny zm�ny budou ztraceny."
#define REVERT "Obnovit"
#define NONE_TEXT "�dn�"
#define EOL_TEXT "��dkov�n�"
#define SHOW_CODES_TEXT "Uk�zat k�d"
#define SHOW_MODE "M�d"
#define MACRO_POPUP_TEXT_1 "Jestli chcete nahr�t"
#define MACRO_POPUP_TEXT_2 "makro, m�ete"
#define MACRO_POPUP_TEXT_3 "za��t odtud"
#define GET_PASSWORD "Zadej Heslo"
#define PASSWORD_TEXT "Heslo:"
#define TEXT_ENCRYPTED "Zaifrovat"
#define FILE_NOT_ENCRYPTED_TITLE "Soubor nezaifrov�n"
#define FILE_NOT_ENCRYPTED_TEXT "Soubor ^1 nen� zaifrov�n"
#define DECRYPT "Deifrovat"
#define QUICK_MACRO "Rychl� Mac."
#define FILE_LOCATION "Zadej heslo pro soubor "
#define UNABLE_TO_CREATE_DIR_TEXT "Nelze vytvo�it sloku ^1"
#define UNABLE_TO_CREATE_DIR_TITLE "Chyba"
#define NO_COMPRESSED_DOC_TITLE "Nen� podporov�no"
#define NO_COMPRESSED_DOC_TEXT "Soubor ^1 je komprimov�n. Komprimovan� DOC soubory nejsou zat�m podporov�ny."
#define MUST_ENTER_NAME_TITLE "Bez jm�na"
#define MUST_ENTER_NAME_TEXT "Mus�te vloit jm�no pro makro"
#define CONFIRM_MACRO_DELETE "Potvrdit"
#define MESSAGE_CONFIRM_MACRO_DELETE "Vymazat Makro?"
#define PLAY_MACRO "Spustit Makro"
#define START_RECORD "Nahr�t Makro"
#define RECORD "Nahraj"
#define PLAY "Spus"
//C++ file text
#define INVALID_FILE_NAME_TITLE "Neplatn� n�zev souboru"
#define INVALID_FILE_NAME_TEXT "^1 nen� platn� n�zev souboru."
#define SELECTION_MODE "Ozna�en� textu"
#define TEXT_BEAM "Beam"
#define BEAM_FILE "Ozna�en� soubor"
#define BEAM_APP "SiEd-Dana Apl."
#define PALM_STYLE_TEXT "Palm Styl"
#define STANDARD_STYLE_TEXT "Standard"
#define SELECT_ALL "Ozna�it ve"
#define WAITING_TEXT "�ekejte Pros�m..." //Text displayed while leaving SiEd-Dana

//Resource text
#define TEXT_NEW_DIRECTORY "Nov� N�zev Sloky"

//simple ones
#define OK "OK"
#define CLOSE "Zav��t"
#define OVERWRITE "P�epsat"
#define CANCEL "Zruit"
#define SAVE "Uloit"
#define DISCARD "Zahodit"
#define YES "Ano"
#define NO "Ne"
#define TEXT_FONT "Font"
#define TEXT_NONE "Nic"
#define TEXT_SIZE "Velikost:"
#define TOTAL "Celkem:"
#define OPEN "Otev��t"
#define TEXT_FIND "Hledat"
#define TEXT_FIND_COLON "Hledej:"
#define TEXT_REPLACE "Naj�t & Nahradit"
#define DELETE "Vymazat"
#define TEXT_DATE "Datum:"
#define TEXT_COPY_FULL "Kop�rovat"
#define RENAME "P�ejmenovat"
#define TEXT_EXIT "Konec"
#define TEXT_FILE "Soubor"
#define TEXT_NEW "Nov�"
#define PREFERENCES_ABBR "Pref." //abbreviation for preferences
#define TEXT_ABOUT "O SiEd-Dana"
#define TEXT_COPY "Kop�rovat"
#define TEXT_PASTE "Vloit"
#define TEXT_CUT "Vyjmout"
#define TEXT_UNDO "Zp�t"
#define TEXT_REDO "Znovu"
#define TEXT_CURSOR "Kurzor"
#define TEXT_END "Konec"
#define TEXT_HOME "Za��tek" //as in beginning of line key
#define TEXT_EDIT "�pravy" //as in the menu title
#define TEXT_CALCULATE "Souhrn" //abbreviation for calculate
#define TEXT_DOCUMENT_STATISTICS "Statistika dokumentu"
#define TEXT_DOCUMENT_CHARS "Znak�:"
#define TEXT_DOCUMENT_WORDS "Slov:"
#define MENU_TEXT_STATS "Stats"
#define MANAGE_FILES "Soubory"
//other text
#define NEW_FILENAME "Nov� n�zev Souboru"
#define OLD_FILENAME "Tento n�zev"
#define RENAME_FILE "P�epsat soubor"
#define FIND_AGAIN "Hledat znovu"
#define SAVE_AS "Uloit jako"
#define SELECT_FILE "Ozna� soubor"
#define TERM_NOT_FOUND "Nenalezeno"
#define END_OF_DOCUMENT_REACHED "Konec dokumentu"
#define CONFIRM_FILE_DELETE "Smaz�n� souboru"
#define MESSAGE_CONFIRM_FILE_DELETE "Smazat soubor ^1?"

#define CONFIRM_OVERWRITE "P�eps�n� souboru"
#define MESSAGE_CONFIRM_OVERWRITE "Otev�en�m souboru zru�te proveden� zm�ny. Chcete uloit?"

#define COPYRIGHT_MESSAGE "\251 2016 Reg Tiangha.\n\SiEd-Dana is based on the original SiEd text editor, \251 2003-2005\nBenjamin Roe.\nArtwork is \251 Stefan Smith & Tankut Eric.\nThis application is distributed under the terms of the GPLv2."

#define NEW_FILE "Nov�"
#define MESSAGE_NEW_FILE "Vytvo�it nov� soubor?"
#define EDITOR_PREFERENCES "Vlastnosti"

#define SAVE_FILE_AS "Uloit jako"
#define FILENAME "N�zev"

#define SEARCH_TERM "Hledat"
#define MATCH_CASE "Case sens."
#define MATCH_WHOLE_WORD "Cel� slovo"

#define REPLACE_ABBR "Nahr:" //abbreviation for replace
#define REPLACE_ABBR_BUTTON "Nahr" //abbreviation for replace
#define TEXT_WITH "Za:"
#define REPLACE_ALL_ABBR "N ve" //abbreviation for replace all
#define END_OF_DOCUMENT "Na konec"
#define START_OF_DOCUMENT "Na za��tek"
#define DELETE_LINE "Smazat ��dek"
#define SPLIT_VIEW "2 okna"
#define UNSPLIT_VIEW "1 okno"
#define TEXT_VIEW "Dal�"
#define NEW_DIRECTORY "Sloka"

//error messages - less important to translate
#define UNABLE_TO_UNDO "Nelze zp�t"
#define OVERWRITE_FILE "P�epsat soubor?"
#define OVERWRITE_FILE_TEXT "Soubor s t�mto n�zvem existuje. P�epsat?"
#define UNABLE_TO_UNDO_TEXT "Tato zm�na nem�e b�t vzata zp�t."
#define TEXT_SELECTION_COPY_TRUNCATED "Ozna�en� zkr�ceno"
#define MESSAGE_SELECTION_COPY_TRUNCATED "Nedostatek pam�ti ve schr�nce pro ozn. text"

#define MESSAGE_NOT_SUPPORTED "^1 Nen� podporov�n."
#define TEXT_FILE_NOT_FOUND "Soubor nenalezen"
#define MESSAGE_FILE_NOT_FOUND "Soubor ^1 nenalezen."
#define TEXT_DATABASE_ACCESS_ERROR "Database Access Error"
#define MESSAGE_DATABASE_ACCESS_ERROR "Database Error while ^1."
#define TEXT_FILE_ACCESS_ERROR "File Access Error"
#define MESSAGE_FILE_ACCESS_ERROR "Error in accessing file ^1."
#define TEXT_SCREEN_ACCESS_ERROR "Screen Access Error"
#define MESSAGE_SCREEN_ACCESS_ERROR "Error in creating offscreen window."
#define TEXT_UNABLE_TO_SAVE "Nelze uloit"
#define MESSAGE_UNABLE_TO_SAVE "Nemohu uloit ^1."
#define TEXT_DEBUG_MESSAGE "Debug Message"
#define TEXT_OUT_OF_MEMORY "Nedostatek pam�ti"
#define MESSAGE_OUT_OF_MEMORY "Memory Allocation Error in ^1"
#define FEATURE_NOT_IMPLEMENTED "Nen� implementov�no"
#endif
