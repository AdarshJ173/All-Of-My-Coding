#Shutil Module

'''
The shutil module in Python provides a higher level interface when working with files, and is particularly useful for copying and moving files and directories. Here are some of the key functions in the shutil module:

shutil.copy(src, dst): This function copies the file src to the file or directory dst. If dst is a file, it will be overwritten. If dst is a directory, the file will be copied into the directory.
Here's an example:

python
Copy code
import shutil

shutil.copy('source.txt', 'destination.txt')
shutil.copy2(src, dst): This function is similar to shutil.copy(), but it also copies the file's metadata (like its creation and modification times).

shutil.copytree(src, dst, symlinks=False, ignore=None): This function recursively copies a directory tree src to a directory dst.

Here's an example:

python
Copy code
import shutil

shutil.copytree('source_directory', 'destination_directory')
shutil.move(src, dst): This function moves the file or directory src to the file or directory dst.
Here's an example:

python
Copy code
import shutil

shutil.move('source.txt', 'destination.txt')
shutil.rmtree(path, ignore_errors=False, onerror=None): This function recursively removes a directory and all of its contents.
Here's an example:

python
Copy code
import shutil

shutil.rmtree('directory_to_remove')
shutil.make_archive(base_name, format, root_dir=None, base_dir=None, verbose=0): This function creates an archive file (such as a zip or tar file) from a directory.
Here's an example:

python
Copy code
import shutil

shutil.make_archive('archive_name', 'zip', 'directory_to_archive')
These are just a few of the functions available in the shutil module. For more information, you can refer to the official Python documentation.
'''
 
import shutil
# shutil.copy("Python/PYTHON/DAY 87/main.py","main2.py")

# shutil.copytree("Python/PYTHON/DAY 87","day 87")

# shutil.move("Python/PYTHON/DAY 87/main.py","mani.py")

# shutil.rmtree("Python/PYTHON/DAY 87")

















































































































