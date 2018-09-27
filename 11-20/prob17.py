

#If all the numbers from 1 to 1000 (one thousand) inclusive
#were written out in words, how many letters would be used?


def main():
	total = 0
	one_to_ninetynine = 0
	#1 - 9
	one_to_nine = [3,3,5,4,4,3,5,5,4]
	one_to_ninetynine += sum(one_to_nine)
	#10 - 19
	ten_to_nineteen = [3,6,6,8,8,7,7,9,8,8]
	one_to_ninetynine += sum(ten_to_nineteen)
	#20 - 99
	twenty_to_ninetynine = [6,6,5,5,5,7,6,6]
	one_to_ninetynine += sum(twenty_to_ninetynine)*10 + (8*36)
	#100-999 
	#1-9 occurs 100 times
	total += sum(one_to_nine)*100
	#1-99 occurs 9 times
	total += one_to_ninetynine*9
	#100 occurs 7 times
	total += 9*7
	#'hundred and' occurs 891 times
	total += 10*891
	#'one thousand' occurs 1 time
	total += 11*1
	#consider 1-99 occurances total
	total += one_to_ninetynine 
	print(total)

if __name__ == '__main__':
	main()