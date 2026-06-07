try:
    
    a,b,c=7,9,6
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(a=5,2,c=4)
    print(a,b,c)
    
except: print('error')
