try:
    a,b,c=7,1,2
    def f(b):
        a=3
        b-=2
        c=4
        return a+b+c
    
    a,b,c=9,0,2
    print(f(b),a,b,c)
    
except: print('error')
