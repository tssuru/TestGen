try:
    a,b,c=8,5,0
    def g(a):
        a=1
        b=3
        c=2
        return a+b+c
    
    a,b,c=3,4,7
    print(g(b),a,b,c)
except: print('error')
