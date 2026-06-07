try:
    
    a,b,c=6,7,9
    def g(a,b=8,c=8):
        print(a,b,c,end="")
    
    g(5,0,3)
    print(a,b,c)
    
except: print('error')
