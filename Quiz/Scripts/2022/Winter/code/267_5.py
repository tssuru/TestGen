try:
    
    a,b,c=9,7,9
    def g(a,b=6,c=8):
        print(a,b,c,end="")
    
    g(1,0)
    print(a,b,c)
    
except: print('error')
