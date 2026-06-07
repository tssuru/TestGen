try:
    a,b,c=2,4,6
    def g(a):
        a=5
        b+=3
        c=2
        return a+b+c
    
    a,b,c=1,7,5
    print(g(b),a,b,c)
except: print('error')
