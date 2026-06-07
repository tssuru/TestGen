try:
    
    a,b,c=8,9,7
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(a=5,0,a=3)
    print(a,b,c)
    
except: print('error')
