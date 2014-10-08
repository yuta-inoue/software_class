import sys

for s in sys.stdin:
	a,b = map(int,s.split())
	print(a*a+b*b)
