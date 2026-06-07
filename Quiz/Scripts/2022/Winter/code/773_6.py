try:
    a,b,c=5,1,3
    def f(a):
        a=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=0,2,6
    print(f(b),a,b,c)
    
except: print('error')
