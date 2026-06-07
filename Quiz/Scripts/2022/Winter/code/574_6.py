try:
    a,b,c=7,0,7
    def f(b):
        global c
        a=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=3,6,8
    print(f(b),a,b,c)
    
except: print('error')
