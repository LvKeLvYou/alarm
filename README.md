# alarm
a single alarm

C++ console countdown timer.

Input format:

DD HH MM SS

Example:

0 0 1 1

means 1 minute and 1 second.

Features:
- Countdown display: DD:HH:MM:SS
- Zero-padded output
- Beep when finished (Windows)
- Uses <thread> and <chrono>

Note:
- Windows only because it uses <windows.h> Beep().
