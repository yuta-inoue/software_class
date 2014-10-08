import sys
import math
for s in sys.stdin:
	a,b=map(float,s.split())
	print((pow(a,3)-pow(a-b,3))*4/3*math.pi);

