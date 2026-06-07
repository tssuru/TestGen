try:
    a,b,c=1,0,1
    def f(b):
        a-=2
        b=1
        c=2
        return a+b+c
    
    a,b,c=7,5,6
    print(f(b),a,b,c)
    
except: print('error')
