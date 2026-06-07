try:
    a,b,c=1,4,2
    def f(a):
        a=2
        b-=4
        c=5
        return a+b+c
    
    a,b,c=5,2,3
    print(f(b),a,b,c)
    
except: print('error')
