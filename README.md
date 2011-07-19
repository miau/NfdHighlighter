NfdHighlighter
==============

Display an icon over the file that has NFD normalized file name on Windows Explorer.

**This tool support two combining characters only for now.**

- U+3099 Combining Katakana-Hiragana Voiced Sound Mark
- U+309A Combining Katakana-Hiragana Semi-Voiced Sound Mark

This tool is based on the source code of following article.

- [How to overlay an icon over existing shell objects in 3 easy steps - CodeProject](http://www.codeproject.com/KB/shell/overlayicon.aspx)

How to install
--------------

1. Copy NfdHighlighter.dll to C:\Windows\System32 or any other directory.
2. Open cmd.exe as administrator and type following command. 

  regsvr32 NfdHighlighter.dll

How to uninstall
----------------

1. Open cmd.exe as administrator and type following command.

  regsvr32 /u NfdHighlighter.dll

2. Then you can delete the DLL file.
