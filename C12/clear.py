import os

def get_files():
	c_files = []
	for root, directories, files in os.walk('.'):
		for dirname in directories:
			path = os.path.join(root, dirname)
			if (not(dirname.startswith('ex') or dirname.startswith('C'))):
				os.system(f"rm -rf {path}")
		for file in files:
			path = os.path.join(root, file)
			if (not(file.endswith('.c') or file.endswith('.py'))):
				os.system(f"rm -rf {path}")
			else:
				c_files.append(path)
	del c_files[0]
	return(c_files)

def remove_main(c_file):
	tempfilename = c_file + "temp"
	tempfile = open(tempfilename, "w")
	file = open(c_file, "r")
	for line in file:
		if ("int main()" in line):
			break
		elif ("stdio.h" not in line):
			tempfile.write(line)
	tempfile.close()
	file.close()
	os.system(f"mv {tempfilename} {c_file}")

if __name__ == '__main__':
	agree = input("Are you sure you want to clear this directory ? (y/N) : ")
	if (agree.lower() == 'y'):
		for c_file in get_files():
			print(c_file)
			remove_main(c_file)
	else:
		exit()