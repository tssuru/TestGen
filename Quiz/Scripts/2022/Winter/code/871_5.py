try:
    
    a,b,c=9,7,6
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(0,c=1)
    print(a,b,c)
    
except: print('error')
