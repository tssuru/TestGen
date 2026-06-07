try:
    a,b,c=7,3,1
    def f(b):
        global c
        a*=4
        b=3
        c=1
        return a+b+c
    
    a,b,c=9,8,2
    print(f(b),a,b,c)
    
except: print('error')
