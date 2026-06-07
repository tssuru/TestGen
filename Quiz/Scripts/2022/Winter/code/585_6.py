try:
    a,b,c=1,2,5
    def f(a):
        a-=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=3,0,9
    print(f(b),a,b,c)
    
except: print('error')
