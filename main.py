import subprocess

cppExecutable = './main.o' # or './main.o'
argument = '12'

output = subprocess.check_output([cppExecutable, argument])
print(output)