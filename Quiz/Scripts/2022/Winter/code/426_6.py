try:
    a,b,c=7,3,9
    def f(a):
        global c
        a=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=8,4,6
    print(f(b),a,b,c)
    
except: print('error')
