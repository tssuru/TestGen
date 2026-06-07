try:
    a,b,c=6,2,7
    def f(a):
        a=4
        b-=2
        c=1
        return a+b+c
    
    a,b,c=0,8,9
    print(f(b),a,b,c)
    
except: print('error')
