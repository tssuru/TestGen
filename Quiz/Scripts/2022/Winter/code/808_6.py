try:
    a,b,c=5,3,1
    def f(a):
        global c
        a=3
        b+=4
        c=1
        return a+b+c
    
    a,b,c=7,6,4
    print(f(b),a,b,c)
    
except: print('error')
