try:
    a,b,c=8,4,5
    def f(b):
        a=4
        b-=5
        c=1
        return a+b+c
    
    a,b,c=3,7,9
    print(f(b),a,b,c)
except: print('error')
