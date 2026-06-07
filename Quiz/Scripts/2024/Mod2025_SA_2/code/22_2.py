try:
    a,b,c=2,6,4
    def f(b):
        a+=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=8,3,0
    print(f(b),a,b,c)
except: print('error')
