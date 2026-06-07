try:
    a,b,c=8,7,0
    def f(a):
        global c
        a=3
        b+=4
        c=2
        return a+b+c
    
    a,b,c=2,5,4
    print(f(b),a,b,c)
    
except: print('error')
