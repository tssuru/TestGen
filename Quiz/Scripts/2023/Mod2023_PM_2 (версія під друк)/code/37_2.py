try:
    a,b,c=8,4,9
    def g(a):
        global c
        a=3
        b+=2
        c=1
        return a+b+c
    
    a,b,c=7,6,9
    print(g(b),a,b,c)
    
except: print('error')
