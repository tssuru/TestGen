try:
    
    a,b,c=6,7,9
    def g(a,b=6,c=8):
        print(a,b,c,end="")
    
    g(a=0,b=5,a=2)
    print(a,b,c)
    
except: print('error')
