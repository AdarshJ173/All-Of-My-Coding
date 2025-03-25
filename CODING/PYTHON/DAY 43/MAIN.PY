'''VIRTUAL ENVIRONMENTS IN PYTHON'''

'''
VIRTUAL ENVIRONMENTS

To create a virtual environment, you can use the venv module that comes with Python. Here's an example of how to create a virtual environment:

python3 -m venv myenv

This command creates a new virtual environment called myenv. You can activate the environment using the following command:


source myenv/bin/activate

Once the environment is activated, you can install packages specific to that project using pip, and they won't interfere with other projects. To deactivate the environment, you can simply type deactivate.

'''

# Imagine you have two different projects that you're working on, and each project requires different versions of the same package. If you install the package for one project, it could potentially break the other project because it's using a different version.

# Virtual environments in Python solve this problem by creating separate environments for each project. Each environment has its own set of packages and dependencies, so you can install different versions of the same package for each project without affecting the others.

# To create a virtual environment, you can use the venv module that comes with Python. Here's an example of how to create a virtual environment:

# python -m venv myenv

# This command creates a new virtual environment called myenv. You can activate the environment using the following command:

# source myenv/bin/activate

# import pandas as pd
# print(pd.__version__)

'''The requirement.txt file'''
'''

The requirement.txt file is used to specify the dependencies and versions of packages required for your Python project. It is typically used when you want to share or install your project's dependencies on another machine.

To create a requirement.txt file, you can use the pip freeze command. This command lists all the installed packages and their versions in a format that can be easily read by pip.

Here's how you can create a requirement.txt file for your project:

Activate your virtual environment (if you're using one).
Open a terminal or command prompt.
Navigate to the root directory of your project.
Run the following command:

pip freeze > requirements.txt

This command will generate a requirements.txt file in your project's directory.

The requirements.txt file will contain lines in the format package_name==version_number. 

now if someone else want to download all the same packages then ,

pip install -r requirements.txt

'''


