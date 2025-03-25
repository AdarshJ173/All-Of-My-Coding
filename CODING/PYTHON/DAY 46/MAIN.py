'''OS MODULE'''

'''
The os module in Python provides a way to interact with the operating system. It allows you to perform various operations like navigating the file system, creating and deleting directories, checking file permissions, and more. Here are some common functions and examples of how to use them:

Working with Files and Directories:
os.getcwd(): Get the current working directory.
os.chdir(path): Change the current working directory to path.
os.listdir(path): Return a list of the entries in the directory given by path.
Example:

import os

print(os.getcwd())
os.chdir('/path/to/directory')
print(os.listdir())

File and Directory Operations:
os.mkdir(path): Create a new directory at the specified path.
os.rmdir(path): Remove the directory at the specified path.
os.remove(file): Delete the file at file.
Example:

import os

os.mkdir('/path/to/new/directory')
os.remove('file.txt')

Path Manipulation:
os.path.join(path1, path2): Join one or more path components intelligently.
os.path.exists(path): Check if a path exists.
os.path.isfile(path): Check if the path is a file.
os.path.isdir(path): Check if the path is a directory.
Example:

import os

path = os.path.join('/path/to', 'file.txt')
if os.path.exists(path):
    if os.path.isfile(path):
        print('File exists!')
    elif os.path.isdir(path):
        print('Directory exists!')

Operating System Information:
os.name: The name of the operating system dependent module imported.
os.uname(): Return information identifying the current operating system.
Example:

import os

print(os.name)
print(os.uname())

These are just a few examples of how you can use the os module in Python to interact with the operating system.
'''

import os

if(not os.path.exists("AAJ")):
    os.mkdir("AAJ")

for i in range(0, 100):
    if(not os.path.exists(f"AAJ/Day{i+1}")):
        os.mkdir(f"AAJ/Day{i+1}")
    # os.makedirs(f"AAJ/Day{i+1}/main.py")

# ALL MODULES(NOT all EXACTLY) OF OS MODULE 
'''
The `os` module in Python is a built-in module that provides a way of using operating system dependent functionality. It includes a wide variety of functions to interact with the file system, manage processes, and read or set system information. Listing every single function and attribute can be extensive, but here’s a fairly comprehensive overview of the most commonly used and important methods available in the `os` module as of Python 3.8:

### System Information
- `os.name` - The name of the operating system dependent module imported (`posix`, `nt`, `os2`, `ce`, `java`, `riscos`).
- `os.environ` - A mapping object representing the string environment.
- `os.getenv(key, default=None)` - Returns the value of the environment variable `key` if it exists, or `default` if it doesn't.
- `os.putenv(key, value)` - Sets/changes the value of the environment variable named `key`.
- `os.unsetenv(key)` - Unsets the environment variable named `key`.
- `os.urandom(size)` - Returns `size` bytes of random data suitable for cryptographic use.

### File and Directory Management
- `os.chdir(path)` - Change the current working directory to `path`.
- `os.getcwd()` - Return a string representing the current working directory.
- `os.mkdir(path, mode=0o777)` - Create a directory named `path` with numeric mode `mode`.
- `os.makedirs(path, mode=0o777, exist_ok=False)` - Recursive directory creation function.
- `os.remove(path)` - Remove (delete) the file `path`.
- `os.rename(src, dst)` - Rename the file or directory `src` to `dst`.
- `os.renames(old, new)` - Recursive directory or file renaming function.
- `os.rmdir(path)` - Remove (delete) the directory `path`.
- `os.removedirs(path)` - Remove directories recursively.
- `os.listdir(path=".")` - Return a list containing the names of the entries in the directory given by `path`.
- `os.stat(path)` - Perform a stat system call on the given path.

### File Descriptors Operations
- `os.open(file, flags, mode=0o777)` - Open the file `file` and set various flags according to `flags` and `mode`.
- `os.close(fd)` - Close file descriptor `fd`.
- `os.read(fd, n)` - Read `n` bytes from file descriptor `fd`.
- `os.write(fd, str)` - Write the string `str` to file descriptor `fd`.
- `os.fsync(fd)` - Force write of file with filedescriptor `fd` to disk.
- `os.ftruncate(fd, length)` - Truncate the file corresponding to file descriptor `fd`, so that it is at most `length` bytes in size.

### Path Manipulation
- `os.path` - A submodule of `os` that is a separate module `os.path`, which includes functions on path manipulations like `os.path.join()`, `os.path.split()`, `os.path.exists()`, `os.path.isfile()`, etc.

### Execution Handling
- `os.system(command)` - Execute the command (a string) in a subshell.
- `os.execl(path, arg0, arg1, ...)` - Execute a program, replacing the current process.
- `os.execvp(file, args)` - Execute a program, using a file search if necessary and replacing the current process.

### Miscellaneous
- `os.link(src, dst)` - Create a hard link pointing from `dst` to `src`.
- `os.symlink(src, dst)` - Create a symbolic link pointing from `dst` to `src`.
- `os.umask(mask)` - Set the current numeric umask and return the previous umask.
- `os.chmod(path, mode)` - Change the mode of `path` to the numeric `mode`.
- `os.chown(path, uid, gid)` - Change the owner and group id of `path`.

This is not an exhaustive list as the `os` module also contains many more specialized functions, especially for handling low-level OS operations like process and signal management. For a complete and updated list, consult the official Python documentation specific to the version of Python you are using.
'''














