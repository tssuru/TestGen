try:
    
    a,b,c=9,9,6
    def g(a,b=7,c=8):
        print(a,b,c,end="")
    
    g(5,c=2,b=3)
    print(a,b,c)
    
except: print('error')
