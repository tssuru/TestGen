try:
    a,b,c=2,0,7
    def f(a):
        a=3
        b-=5
        c=1
        return a+b+c
    
    a,b,c=6,3,5
    print(f(b),a,b,c)
    
except: print('error')
