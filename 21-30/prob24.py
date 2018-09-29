# What is the millionth lexicographic permutation of the digits 
# 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?

import itertools

def nth_lexicographic(n,string):
	permutations = list(itertools.permutations(string, len(string)))
	result = permutations[n-1]
	return ''.join(str(x) for x in result)
  
def main():
	string = "0123456789"
	nth = 1000000
	print (nth_lexicographic(nth,string))

if __name__ == '__main__':
	main()