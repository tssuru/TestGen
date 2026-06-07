try:
    a,b,c=0,6,9
    def f(a):
        global c
        a=3
        b-=5
        c=4
        return a+b+c
    
    a,b,c=4,7,1
    print(f(b),a,b,c)
    
except: print('error')
