try:
    a,b,c=8,2,9
    def f(a):
        a=5
        b-=2
        c=5
        return a+b+c
    
    a,b,c=4,5,2
    print(f(b),a,b,c)
    
except: print('error')
