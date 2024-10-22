
import string,random,sys
random.seed(int(sys.argv[1]))
def producer(chars, l, n=1):
    return [''.join([random.choice(chars) for i in range(l)]) for i in range(n)]
print(producer(string.printable, int(sys.argv[2])))
