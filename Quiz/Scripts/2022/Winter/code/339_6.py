try:
    a,b,c=8,6,1
    def f(a):
        a=3
        b+=4
        c=2
        return a+b+c
    
    a,b,c=4,8,5
    print(f(b),a,b,c)
    
except: print('error')
