try:
    a,b,c=8,7,9
    def f(a):
        a=2
        b-=4
        c=1
        return a+b+c
    
    a,b,c=6,5,3
    print(f(b),a,b,c)
    
except: print('error')
