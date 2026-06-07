try:
    a,b,c=7,0,2
    def f(a):
        a=4
        b+=1
        c=2
        return a+b+c
    
    a,b,c=6,3,9
    print(f(b),a,b,c)
    
except: print('error')
