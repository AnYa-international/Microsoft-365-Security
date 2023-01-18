# Microsoft Office ASR Test Documents

This folder contains a collection of Office documents that can be used to test the effectiveness of Attack Surface Rules (ASR) in Microsoft 365 environments.

The documents contain various types of content, including macros, embedded scripts, and active content, and are designed to test the ability of ASR rules to detect and block malicious activity. Please note that these documents do not contain any weaponized scripts. They might only show a MessageBox, execute calc.exe, etc. when the payload is successfully triggered.

To use these documents, simply download the files and attempt to open them in the Microsoft 365 environment you wish to test. Observe whether the ASR rules are properly configured and able to detect and block any malicious activity.

Please note that these documents are for testing purposes only and should not be used in a production environment.
Disclaimer

These documents are for testing purposes only and must not be used in a production environment. The use of these documents should be done at your own risk. The creator of this repository will not be responsible for any damage that may happen as a result of using these files.

# Disclaimer

These documents are for testing purposes only and must not be used in a production environment. The use of these documents should be done at your own risk. The creator of this repository will not be responsible for any damage that may happen as a result of using these files.

# Contents

## WinAPI.xlsm
An Excel file that contains a VBA macro that displays a message box when the file is opened. This macro uses the Windows Application Programming Interface (WinAPI) to achieve this. The macro is designed to work on both 32-bit and 64-bit platforms. 

## Shell Function.xlsm
This Excel file contains a VBA script that utilizes the Shell function to open the Calculator application (calc.exe) when the file is opened.

## WScript Shell.xlsm
This Excel file contains a VBA script that utilizes the WScript.Shell object to open the Calculator application (calc.exe) when the file is opened. 

## Registry Write.xlsm
This Excel file contains a VBA script that utilizes the WScript.Shell object to write a value to the registry when the file is opened. The script creates a registry key in the "HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Run" path and sets the value of the key to the path of the Calculator application (calc.exe).
