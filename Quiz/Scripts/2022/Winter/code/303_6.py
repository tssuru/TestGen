try:
    a,b,c=2,0,4
    def f(a):
        global c
        a=1
        b+=3
        c=4
        return a+b+c
    
    a,b,c=6,2,5
    print(f(b),a,b,c)
    
except: print('error')
