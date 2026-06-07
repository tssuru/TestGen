try:
    a,b,c=3,5,2
    def f(b):
        a=4
        b-=2
        c=5
        return a+b+c
    
    a,b,c=8,6,9
    print(f(b),a,b,c)
    
except: print('error')
