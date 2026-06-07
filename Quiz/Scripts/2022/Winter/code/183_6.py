try:
    a,b,c=8,5,0
    def f(a):
        a=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=1,4,2
    print(f(b),a,b,c)
    
except: print('error')
