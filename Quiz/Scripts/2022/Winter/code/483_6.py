try:
    a,b,c=0,5,6
    def f(b):
        global c
        a=2
        b+=4
        c=1
        return a+b+c
    
    a,b,c=9,7,4
    print(f(b),a,b,c)
    
except: print('error')
