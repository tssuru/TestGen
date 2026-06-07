try:
    a,b,c=0,5,9
    def g(a):
        global c
        a=3
        b+=1
        c=1
        return a+b+c
    
    a,b,c=3,9,0
    print(g(b),a,b,c)
    
except: print('error')
