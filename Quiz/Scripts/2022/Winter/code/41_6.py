try:
    a,b,c=1,3,7
    def f(a):
        a=5
        b+=3
        c=2
        return a+b+c
    
    a,b,c=9,5,0
    print(f(b),a,b,c)
    
except: print('error')
