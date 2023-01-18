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

## WMI Process.xlsm
This Excel file contains a VBA script that utilizes the Windows Management Instrumentation (WMI) to create a new process and run the "calc.exe" application when the file is opened. 

## Scheduled Task.xlsm
This Excel file contains a VBA script that utilizes the Windows Task Scheduler to create a new task and run the "calc.exe" application with a specified start time when the file is opened. 

## DDE.xlsx
This Excel file contains a formula that uses a DDE payload as formula to execute "calc.exe" when the file is opened. 

## XLM Macro.xlsm
This Excel file contains an Excel 4.0 XLM macro that executes "calc.exe".

## SYLK Process.slk
This is a Symbolic Link (SYLK) file that when opened, it will automatically execute the command to open the Calculator (calc.exe) on windows.

## DCOM ShellBrowserWindow.xlsm
This document contains a VBA macro that uses the ShellBrowserWindow DCOM object to open the Calculator (calc.exe).

## Startup File Copy.xlsm
This Excel document contains a VBA macro that uses the FileCopy method to copy calc.exe to the Startup folder.

## XMLDOM.xlsm
This document contains a VBA macro that uses the Microsoft XMLDOM library to transform an XML payload using an XSLT style sheet which contains JavaScript code. The JavaScript code is executed when the XSLT is being applied to the payload. The script creates an ActiveXObject for WScript.Shell and uses its Run method to execute the Calculator (calc.exe). 

## WinAPI ProxyDll.xlsm
This Excel document contains a VBA macro that uses a custom DLL called ProxyDll.dll to call the Windows API function MessageBox. The DLL exports a single function called "ProxyMessageBox" that takes the same arguments as the MessageBox function and simply passes them on.
