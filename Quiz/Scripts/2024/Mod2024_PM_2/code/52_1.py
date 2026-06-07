try:
    a,b,c=6,4,3
    def f(a):
        global c
        a=2
        b+=2
        c=1
        return a+b+c
    
    a,b,c=8,1,6
    print(f(b),a,b,c)
    
except: print('error')
