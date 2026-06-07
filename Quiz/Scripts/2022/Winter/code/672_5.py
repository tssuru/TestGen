try:
    
    a,b,c=6,9,6
    def g(a,b=7,c=8):
        print(a,b,c,end="")
    
    g(4,5,a=1)
    print(a,b,c)
    
except: print('error')
