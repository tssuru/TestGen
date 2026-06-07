try:
    a,b,c=2,0,4
    def f(b):
        a=1
        b-=3
        c=2
        return a+b+c
    
    a,b,c=9,3,6
    print(f(b),a,b,c)
    
except: print('error')
