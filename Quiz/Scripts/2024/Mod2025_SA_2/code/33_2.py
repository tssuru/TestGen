try:
    a,b,c=5,0,4
    def f(a):
        global c
        a=2
        b-=2
        c=3
        return a+b+c
    
    a,b,c=1,9,2
    print(f(b),a,b,c)
except: print('error')
