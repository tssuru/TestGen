try:
    a,b,c=4,6,1
    def f(b):
        a+=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=7,8,3
    print(f(b),a,b,c)
    
except: print('error')
