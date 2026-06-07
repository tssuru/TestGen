try:
    a,b,c=7,3,1
    def f(b):
        global c
        a=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=4,9,5
    print(f(b),a,b,c)
    
except: print('error')
