try:
    
    a,b,c=9,6,7
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(4,0)
    print(a,b,c)
    
except: print('error')
