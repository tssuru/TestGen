try:
    a,b,c=3,0,4
    def f(a):
        global c
        a=3
        b*=2
        c=1
        return a+b+c
    
    a,b,c=7,5,1
    print(f(b),a,b,c)
    
except: print('error')
