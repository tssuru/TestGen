try:
    a,b,c=0,6,3
    def f(a):
        a=1
        b-=4
        c=3
        return a+b+c
    
    a,b,c=9,7,4
    print(f(b),a,b,c)
    
except: print('error')
