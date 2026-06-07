try:
    a,b,c=6,7,4
    def f(a):
        global c
        a+=1
        b=4
        c=5
        return a+b+c
    
    a,b,c=8,5,3
    print(f(b),a,b,c)
    
except: print('error')
