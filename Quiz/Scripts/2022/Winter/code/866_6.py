try:
    a,b,c=9,4,2
    def f(b):
        global c
        a+=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=6,3,0
    print(f(b),a,b,c)
    
except: print('error')
