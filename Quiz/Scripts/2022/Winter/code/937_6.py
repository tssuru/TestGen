try:
    a,b,c=8,9,7
    def f(b):
        a=3
        b-=5
        c=4
        return a+b+c
    
    a,b,c=6,4,2
    print(f(b),a,b,c)
    
except: print('error')
