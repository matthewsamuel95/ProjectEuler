# What is the total of all the name scores in the file ( names.txt )?

def get_input():
	data = map(list, raw_input().split(','))
	return data

def get_score(index,name):
	sum = 0
	for i in range(len(name)):
		if name[i] != '"':
			sum += ord(name[i]) - (ord('A')-1)
	return sum * index

def main():
	data = get_input()
	data.sort()
	result = 0
	for i in range(len(data)):
		result += get_score(i+1,data[i])
	print(result)

if __name__ == '__main__':
	main()

