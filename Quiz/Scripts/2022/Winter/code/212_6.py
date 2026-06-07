try:
    a,b,c=8,9,0
    def f(a):
        a=4
        b+=3
        c=2
        return a+b+c
    
    a,b,c=6,2,7
    print(f(b),a,b,c)
    
except: print('error')
