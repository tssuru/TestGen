try:
    a,b,c=8,0,2
    def f(a):
        global c
        a=3
        b-=5
        c=2
        return a+b+c
    
    a,b,c=9,5,1
    print(f(b),a,b,c)
    
except: print('error')
