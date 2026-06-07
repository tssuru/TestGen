try:
    
    a,b,c=8,7,6
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(c=4,b=0,a=5)
    print(a,b,c)
    
except: print('error')
