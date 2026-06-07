try:
    a,b,c=2,7,6
    def f(b):
        global c
        a=4
        b-=3
        c=3
        return a+b+c
    
    a,b,c=0,7,0
    print(f(b),a,b,c)
    
except: print('error')
