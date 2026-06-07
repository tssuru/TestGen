try:
    
    a,b,c=6,9,7
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(a=5,1,a=4)
    print(a,b,c)
    
except: print('error')
