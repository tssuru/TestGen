try:
    
    a,b,c=8,7,9
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(c=5,a=4,b=5)
    print(a,b,c)
    
except: print('error')
