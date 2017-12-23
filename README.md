# GDB-Debugging
Tugas Debugging Mata Kuliah Sistem Mikroprosesor

Langkah kerja :

Buat program parsing dengan bahasa C :

source code sudah diupload https://github.com/leonardgozal/GDB-Debugging/blob/master/parsinggozal.c
program berfungsi membagi input menjadi beberapa bagian dengan delimiter tertentu dengan menggunakan fungsi strtok, hasil pembagian berupa token tersebut lalu dikelompokkan menjadi identifier, operator, dan keyword berdasarkan pemrograman bahasa C.
hasil run dari program tersebut :
![Run C](https://github.com/leonardgozal/GDB-Debugging/blob/master/Gambar/Run.png)

Source code C lalu di disassembly :

digunakan gdb pada ubuntu sebagai tools untuk disassembly
hasil inline assembly : 
![Debug Dev C ++](https://github.com/leonardgozal/GDB-Debugging/blob/master/Gambar/Debug%20Dev%20C%20%2B%2B.png)
hasil disassembly sebagai berikut :
![Disassembly fungsi periksa](https://github.com/leonardgozal/GDB-Debugging/blob/master/Gambar/disassperiksa.png)
![Disassembly fungsi main](https://github.com/leonardgozal/GDB-Debugging/blob/master/Gambar/disassmain1.png)
![Disassembly fungsi main](https://github.com/leonardgozal/GDB-Debugging/blob/master/Gambar/disassmain2.png)
![Disassembly fungsi main](https://github.com/leonardgozal/GDB-Debugging/blob/master/Gambar/disassmain3.png)
![Disassembly fungsi main](https://github.com/leonardgozal/GDB-Debugging/blob/master/Gambar/disassmain4.png)



problem : program baru bisa membagi dan mengidentifikasi jenis token, program masih belum bisa memeriksa kebenaran syntax 
