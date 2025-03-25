# Creating command line utility

'''

command line utility are programs that can be run from the terminal or command line interface, and they are an essential part of many development workflows. In python , you can create you own command line utilities using the built in argparse module.

'''

import argparse

parser = argparse.ArgumentParser()

#Add command line arguments
parser.add_argument("arg1",help="description of argument 1")
parser.add_argument("arg2",help="description of argument 2")

#parse the arguments
args = parser.parse_args()

#use the arguments in your code
print(args.agr1)
print(args.arg2)















































































