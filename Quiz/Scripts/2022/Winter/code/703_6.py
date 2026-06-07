try:
    a,b,c=4,6,8
    def f(b):
        global c
        a=2
        b*=5
        c=4
        return a+b+c
    
    a,b,c=7,9,5
    print(f(b),a,b,c)
    
except: print('error')
