 💾 Custom Virtual File System (CVFS)

This project is a simple implementation of a Virtual File System written in C. It simulates how a file system works internally, including file creation, deletion, reading, and writing, without using the actual OS file system.

The goal of this project is to understand core concepts of operating systems like inodes, file tables, memory management, and file handling.

---
 💡 What this project does

- Creates and manages virtual files  
- Stores file data in memory  
- Supports basic file operations like read, write, delete  
- Uses inode-based structure similar to real file systems  
- Provides a command-line interface for interaction  

---

🛠️ Concepts Used

- Inode structure  
- File table (UFDT)  
- Memory allocation (malloc, free)  
- File permissions (read, write)  
- Linked list for inode management  
- Basic shell command processing  

---
 📂 Features

- `creat <filename> <permission>` → create new file  
- `write <fd>` → write data into file  
- `read <fd>` → read data from file  
- `ls` → list all files  
- `unlink <filename>` → delete file  
- `man <command>` → show command info  
- `help` → display all commands  
- `clear` → clear screen  
- `exit` → terminate program  

---

 ▶️ How to Run

1. Compile the program:
```

gcc cvfs.c -o cvfs

```

2. Run the program:
```

./cvfs

```

(For Windows)
```

gcc cvfs.c -o cvfs.exe
cvfs.exe

```

---

🖥️ Example Usage

```

Marvellous CVFS : > creat Demo.txt 3
Marvellous CVFS : > write 3
Enter the data that you want to write :
Hello World

Marvellous CVFS : > ls
Marvellous CVFS : > unlink Demo.txt

 ⚠️ Limitations

- Data is not stored permanently (lost after program exit)  
- Limited number of files (fixed inode count)  
- Basic error handling  
- No directory structure  

---
 🚀 Future Improvements

- Add persistent storage (save to disk)  
- Support directories and folders  
- Improve command handling  
- Add file permissions in detail  
- Create GUI version  

---
👨‍💻 Author

Vaibhav Vilas Datkhil  
BTech IT Student  
