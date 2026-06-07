try:
    a,b,c=9,5,3
    def g(b):
        global c
        a=3
        b+=1
        c=3
        return a+b+c
    
    a,b,c=8,6,7
    print(g(b),a,b,c)
    
except: print('error')
