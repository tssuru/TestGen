try:
    a,b,c=9,4,3
    def g(b):
        a=4
        b*=5
        c=1
        return a+b+c
    
    a,b,c=1,9,6
    print(g(b),a,b,c)
    
except: print('error')
