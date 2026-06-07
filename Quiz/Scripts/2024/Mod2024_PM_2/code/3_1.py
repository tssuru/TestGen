try:
    a,b,c=3,7,6
    def f(a):
        a=1
        b-=5
        c=3
        return a+b+c
    
    a,b,c=2,9,3
    print(f(b),a,b,c)
    
except: print('error')
