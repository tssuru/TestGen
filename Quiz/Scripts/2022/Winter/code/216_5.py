try:
    
    a,b,c=6,9,7
    def g(a,b=6,c=8):
        print(a,b,c,end="")
    
    g(b=5,c=3,2)
    print(a,b,c)
    
except: print('error')
