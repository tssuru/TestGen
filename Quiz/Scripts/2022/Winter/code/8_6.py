try:
    a,b,c=3,0,1
    def f(a):
        global c
        a=1
        b-=5
        c=3
        return a+b+c
    
    a,b,c=5,9,4
    print(f(b),a,b,c)
    
except: print('error')
