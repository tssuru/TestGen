try:
    a,b,c=1,5,2
    def f(b):
        a=4
        b+=3
        c=5
        return a+b+c
    
    a,b,c=6,7,8
    print(f(b),a,b,c)
    
except: print('error')
