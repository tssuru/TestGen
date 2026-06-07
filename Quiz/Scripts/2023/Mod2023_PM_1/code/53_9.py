try:
    a,b,c=3,0,7
    def f(a):
        a=4
        b*=5
        c=3
        return a+b+c
    
    a,b,c=6,4,5
    print(f(b),a,b,c)
    
except: print('error')
