try:
    a,b,c=4,7,1
    def f(a):
        global c
        a+=4
        b=5
        c=2
        return a+b+c
    
    a,b,c=6,5,0
    print(f(b),a,b,c)
    
except: print('error')
