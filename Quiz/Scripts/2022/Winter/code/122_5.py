try:
    
    a,b,c=7,9,6
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(4,0,b=3)
    print(a,b,c)
    
except: print('error')
