try:
    
    a,b,c=7,6,9
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(4,2,b=5)
    print(a,b,c)
    
except: print('error')
