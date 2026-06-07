try:
    a,b,c=3,5,9
    def f(a):
        global c
        a=5
        b*=4
        c=2
        return a+b+c
    
    a,b,c=6,0,6
    print(f(b),a,b,c)
    
except: print('error')
