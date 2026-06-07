try:
    
    a,b,c=6,9,7
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(1,2,b=4)
    print(a,b,c)
    
except: print('error')
